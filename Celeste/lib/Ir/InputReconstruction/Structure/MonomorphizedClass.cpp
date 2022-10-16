#include "Celeste/Ir/InputReconstruction/Structure/MonomorphizedClass.h"
#include "Celeste/Ir/InputReconstruction/Computation/Value.h"
#include "Celeste/Ir/InputReconstruction/Computation/VariableDeclaration.h"
#include "Celeste/Ir/InputReconstruction/Structure/Class.h"

Celeste::ir::inputreconstruction::MonomorphizedClass::MonomorphizedClass(
	std::unique_ptr<NameReference> className_)
	: InputReconstructionObject(Type::MonomorphizedClass),
	  className(std::move(className_))
{
	className->SetParent(this);
}

void Celeste::ir::inputreconstruction::MonomorphizedClass::Complete()
{
	className->Resolve();
}

void Celeste::ir::inputreconstruction::MonomorphizedClass::SetTemplateParent(Class* class_)
{
	templateParent = class_;
}

Celeste::ir::inputreconstruction::Class*
Celeste::ir::inputreconstruction::MonomorphizedClass::GetTemplateParent() const
{
	return templateParent;
}

std::string Celeste::ir::inputreconstruction::MonomorphizedClass::GetFullyQualifiedName()
{
	std::string result = GetClassName()->GetResolvedName();
	for (auto& templateArgument : templateArguments)
	{
		result += templateArgument->GetName();
		if (templateArgument->GetValues().empty())
		{
			auto aliasedType = templateArgument->GetAliasedType();
			if (aliasedType->GetType() == Type::Class)
			{
				result += static_cast<Class*>(aliasedType)->GetClassName()->GetResolvedName();
			}
			else if (aliasedType->GetType() == Type::MonomorphizedClass)
			{
				result += static_cast<MonomorphizedClass*>(aliasedType)->GetFullyQualifiedName();
			}
		}
		result += ";";
	}
	return result;
}

void Celeste::ir::inputreconstruction::MonomorphizedClass::Add(
	std::unique_ptr<InputReconstructionObject> object)
{
	object->SetParent(this);
	if (object->GetType() == Type::Private)
	{
		lastAccessibility = Accessibility::Private;
	}
	else if (object->GetType() == Type::Protected)
	{
		lastAccessibility = Accessibility::Protected;
	}
	else if (object->GetType() == Type::Public)
	{
		lastAccessibility = Accessibility::Public;
	}
	else
	{
		Add(std::move(object), lastAccessibility);
	}
}

void Celeste::ir::inputreconstruction::MonomorphizedClass::Add(
	std::unique_ptr<InputReconstructionObject> object, Accessibility accessibility)
{
	block.emplace_back(
		std::pair<Accessibility, InputReconstructionObject*>(accessibility, object.get()));
	ownedBlock.push_back(std::move(object));
}

void Celeste::ir::inputreconstruction::MonomorphizedClass::AddCompoundBase(
	std::unique_ptr<CompoundBase> compoundBase)
{
	compoundBases.push_back(std::move(compoundBase));
}

void Celeste::ir::inputreconstruction::MonomorphizedClass::AddInheritedBase(
	std::unique_ptr<InheritBase> inheritBase)
{
	inheritedBases.push_back(std::move(inheritBase));
}

void Celeste::ir::inputreconstruction::MonomorphizedClass::AddTemplateArgument(
	std::unique_ptr<TemplateArgument> templateArgument)
{
	templateArgument->SetParent(this);
	templateArguments.push_back(std::move(templateArgument));
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::TemplateArgument>>&
Celeste::ir::inputreconstruction::MonomorphizedClass::GetTemplateArguments()
{
	return templateArguments;
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::CompoundBase>>&
Celeste::ir::inputreconstruction::MonomorphizedClass::GetCompoundBases()
{
	return compoundBases;
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InheritBase>>&
Celeste::ir::inputreconstruction::MonomorphizedClass::GetInheritedBases()
{
	return inheritedBases;
}

std::vector<std::pair<Celeste::ir::inputreconstruction::Accessibility,
					  Celeste::ir::inputreconstruction::InputReconstructionObject*>>&
Celeste::ir::inputreconstruction::MonomorphizedClass::GetMembers()
{
	return block;
}

Celeste::ir::inputreconstruction::InputReconstructionObject*
Celeste::ir::inputreconstruction::MonomorphizedClass::GetMember(NameReference* nameReference,
																Accessibility accessibility)
{
	for (auto& compoundBase : GetCompoundBases())
	{
		// Verify CompoundBases alias possibility
		if (!compoundBase->HasAlias(nameReference->GetSymbolName()))
		{
			continue;
		}

		// Alias is correct
		auto result = compoundBase->GetCompoundedBase()->GetResolvedLinkedIr();
		if (!result.has_value())
		{
			return nullptr;
		}

		return result.value();
	}

	for (auto& [access, member] : block)
	{
		if (access < accessibility)
		{
			continue;
		}

		// We have access to the type
		// Verify if the resolved name is the symbol name we require for propagation
		switch (member->GetType())
		{
		case Type::Function: {
			auto function = static_cast<Function*>(member);
			// Check if the function is accepting
			if (function->GetFunctionName()->GetResolvedName() == nameReference->GetSymbolName() &&
				function->Accepts(nameReference))
			{
				return function;
			}

			// It is not the reference, thus continue
			break;
		}
		case Type::Constructor: {
			auto constructor = static_cast<Constructor*>(member);

			// Check if the function is accepting
			if (constructor->GetFunctionName()->GetResolvedName() ==
					nameReference->GetSymbolName() &&
				constructor->Accepts(nameReference))
			{
				return constructor;
			}

			// It is not the reference, thus continue
			break;
		}
		case Type::VariableDeclaration: {
			auto variable = static_cast<VariableDeclaration*>(member);
			if (variable->GetName()->GetResolvedName() == nameReference->GetSymbolName())
			{
				return variable;
			}
			break;
		}
		}
	}

	// Then we may only have Protected level access
	if (accessibility <= Accessibility::Private && accessibility != Accessibility::UniversalPrivate)
	{
		accessibility = Accessibility::Protected;
	}

	for (auto& base : GetInheritedBases())
	{
		auto type = base->GetLinkedType();

		auto resolvedIr = type->GetResolvedLinkedIr();
		if (!resolvedIr.has_value())
		{
			// Invalid
			continue;
		}

		if (resolvedIr.value()->GetType() == Type::Class)
		{
			auto result =
				static_cast<Class*>(resolvedIr.value())->GetMember(nameReference, accessibility);
			if (result == nullptr)
			{
				continue;
			}

			return result;
		}
		else if (resolvedIr.value()->GetType() == Type::MonomorphizedClass)
		{
			auto result = static_cast<MonomorphizedClass*>(resolvedIr.value())
							  ->GetMember(nameReference, accessibility);
			if (result == nullptr)
			{
				continue;
			}

			return result;
		}
		else
		{
			// invalid resolve
		}
	}

	return nullptr;
}

Celeste::ir::inputreconstruction::InputReconstructionObject*
Celeste::ir::inputreconstruction::MonomorphizedClass::GetMember(
	std::string memberName_,
	std::optional<std::vector<InputReconstructionObject*>> functionArguments,
	Accessibility accessibility)
{
	for (auto& compoundBase : GetCompoundBases())
	{
		// Verify CompoundBases alias possibility
		if (!compoundBase->HasAlias(memberName_))
		{
			continue;
		}

		// Alias is correct
		auto result = compoundBase->GetCompoundedBase()->GetResolvedLinkedIr();
		if (!result.has_value())
		{
			return nullptr;
		}

		return result.value();
	}

	for (auto& [access, member] : block)
	{
		if (access < accessibility)
		{
			continue;
		}

		// We have access to the type
		// Verify if the resolved name is the symbol name we require for propagation
		switch (member->GetType())
		{
		case Type::Function: {
			auto function = static_cast<Function*>(member);
			// Check if the function is accepting
			if (function->Accepts(memberName_, functionArguments))
			{
				return function;
			}

			// It is not the reference, thus continue
			break;
		}
		case Type::Constructor: {
			auto constructor = static_cast<Constructor*>(member);

			// Check if the function is accepting
			if (constructor->Accepts(memberName_, functionArguments))
			{
				return constructor;
			}

			// It is not the reference, thus continue
			break;
		}
		case Type::VariableDeclaration: {
			auto variable = static_cast<VariableDeclaration*>(member);
			if (variable->GetName()->GetResolvedName() == memberName_)
			{
				return variable;
			}
			break;
		}
		}
	}

	// Then we may only have Protected level access
	if (accessibility <= Accessibility::Private)
	{
		accessibility = Accessibility::Protected;
	}

	for (auto& base : GetInheritedBases())
	{
		auto type = base->GetLinkedType();

		auto resolvedIr = type->GetResolvedLinkedIr();
		if (!resolvedIr.has_value())
		{
			// Invalid
			continue;
		}

		if (resolvedIr.value()->GetType() != Type::Class &&
			resolvedIr.value()->GetType() != Type::MonomorphizedClass)
		{
			// invalid resolve
			continue;
		}

		auto result = static_cast<Class*>(resolvedIr.value())
						  ->GetMember(memberName_, functionArguments, accessibility);
		if (result == nullptr)
		{
			continue;
		}

		return result;
	}

	return nullptr;
}

Celeste::ir::inputreconstruction::InputReconstructionObject*
Celeste::ir::inputreconstruction::MonomorphizedClass::GetMember(
	const std::string& memberName_,
	std::variant<std::monostate, std::unique_ptr<Expression>, std::unique_ptr<Value>>&
		functionArgument,
	Accessibility accessibility)
{
	std::optional<std::vector<InputReconstructionObject*>> functionArgument_;
	if (std::holds_alternative<std::unique_ptr<Expression>>(functionArgument))
	{
		functionArgument_ = std::vector<InputReconstructionObject*>{
			std::get<std::unique_ptr<Expression>>(functionArgument).get()};
	}
	else if (std::holds_alternative<std::unique_ptr<Value>>(functionArgument))
	{
		functionArgument_ = std::vector<InputReconstructionObject*>{
			std::get<std::unique_ptr<Value>>(functionArgument).get()};
	}

	for (auto& compoundBase : GetCompoundBases())
	{
		// Verify CompoundBases alias possibility
		if (!compoundBase->HasAlias(memberName_))
		{
			continue;
		}

		// Alias is correct
		auto result = compoundBase->GetCompoundedBase()->GetResolvedLinkedIr();
		if (!result.has_value())
		{
			return nullptr;
		}

		return result.value();
	}

	for (auto& [access, member] : block)
	{
		if (access < accessibility)
		{
			continue;
		}

		// We have access to the type
		// Verify if the resolved name is the symbol name we require for propagation
		switch (member->GetType())
		{
		case Type::Function: {
			auto function = static_cast<Function*>(member);
			// Check if the function is accepting
			if (function->Accepts(memberName_, functionArgument_))
			{
				return function;
			}

			// It is not the reference, thus continue
			break;
		}
		case Type::Constructor: {
			auto constructor = static_cast<Constructor*>(member);

			// Check if the function is accepting
			if (constructor->Accepts(memberName_, functionArgument_))
			{
				return constructor;
			}

			// It is not the reference, thus continue
			break;
		}
		}
	}

	// Then we may only have Protected level access
	if (accessibility <= Accessibility::Private)
	{
		accessibility = Accessibility::Protected;
	}

	for (auto& base : GetInheritedBases())
	{
		auto type = base->GetLinkedType();

		auto resolvedIr = type->GetResolvedLinkedIr();
		if (!resolvedIr.has_value())
		{
			// Invalid
			continue;
		}

		if (resolvedIr.value()->GetType() != Type::Class &&
			resolvedIr.value()->GetType() != Type::MonomorphizedClass)
		{
			// invalid resolve
			continue;
		}

		auto result = static_cast<Class*>(resolvedIr.value())
						  ->GetMember(memberName_, functionArgument_, accessibility);
		if (result == nullptr)
		{
			continue;
		}

		return result;
	}

	return nullptr;
}

Celeste::ir::inputreconstruction::NameReference*
Celeste::ir::inputreconstruction::MonomorphizedClass::GetClassName()
{
	return className.get();
}

std::optional<Celeste::ir::inputreconstruction::InputReconstructionObject*>
Celeste::ir::inputreconstruction::MonomorphizedClass::GetConstructor(NameReference* nameReference,
																	 Accessibility accessibility)
{
	for (auto& [access, member] : block)
	{
		if (access < accessibility)
		{
			continue;
		}

		// We have access to the type
		// Verify if the resolved name is the symbol name we require for propagation
		switch (member->GetType())
		{
		case Type::Constructor: {
			auto constructor = static_cast<Constructor*>(member);

			// Check if the function is accepting
			if (constructor->Accepts(nameReference))
			{
				return constructor;
			}

			// It is not the reference, thus continue
			break;
		}
		case Type::VariableDeclaration: {
			auto variable = static_cast<VariableDeclaration*>(member);
			if (variable->GetName()->GetResolvedName() == nameReference->GetSymbolName())
			{
				return variable;
			}
			break;
		}
		}
	}

	return std::nullopt;
}

std::vector<Celeste::ir::inputreconstruction::Constructor*>
Celeste::ir::inputreconstruction::MonomorphizedClass::GetConstructors(Accessibility accessibility)
{
	std::vector<Celeste::ir::inputreconstruction::Constructor*> constructors;
	for (auto& [access, member] : block)
	{
		if (access < accessibility)
		{
			continue;
		}

		// We have access to the type
		// Verify if the resolved name is the symbol name we require for propagation
		switch (member->GetType())
		{
		case Type::Constructor: {
			auto constructor = static_cast<Constructor*>(member);
			constructors.push_back(constructor);
		}
		}
	}

	return constructors;
}

Celeste::ir::inputreconstruction::Function*
Celeste::ir::inputreconstruction::MonomorphizedClass::CreateMemberFunction(
	const std::string& functionName, const std::string& returnType)
{
	std::unique_ptr<SymbolReferenceCall> symbolReference;
	if (returnType.empty())
	{
		symbolReference = std::make_unique<SymbolReferenceCall>("void");
	}
	else
	{
		symbolReference = std::make_unique<SymbolReferenceCall>(returnType);
	}
	symbolReference->SetFile(GetFile());

	auto nameReference = std::make_unique<NameReference>(functionName);
	nameReference->SetFile(GetFile());

	auto typeConstruct = std::make_unique<TypeConstruct>(std::move(symbolReference));
	typeConstruct->SetFile(GetFile());

	auto newFunction =
		std::make_unique<Function>(std::move(nameReference), std::move(typeConstruct));
	newFunction->SetFile(GetFile());
	newFunction->SetParent(this);
	newFunction->Complete();

	auto newFunctionPtr = newFunction.get();
	this->block.push_back(std::pair<Accessibility, InputReconstructionObject*>{
		Accessibility::Public, newFunction.get()});
	this->ownedBlock.push_back(std::move(newFunction));
	return newFunctionPtr;
}

void Celeste::ir::inputreconstruction::MonomorphizedClass::CreateDefaultConstructor()
{
	auto nameReference = std::make_unique<NameReference>(GetClassName()->GetResolvedName());
	nameReference->SetFile(GetFile());

	auto newFunction = std::make_unique<Constructor>(std::move(nameReference));
	newFunction->SetFile(GetFile());
	newFunction->SetParent(this);
	newFunction->Complete();

	auto newFunctionPtr = newFunction.get();
	this->block.push_back(std::pair<Accessibility, InputReconstructionObject*>{
		Accessibility::Public, newFunction.get()});
	this->ownedBlock.push_back(std::move(newFunction));
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::MonomorphizedClass::begin()
{
	return std::begin(ownedBlock);
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::MonomorphizedClass::end()
{
	return std::end(ownedBlock);
}

std::vector<
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::reverse_iterator
Celeste::ir ::inputreconstruction::MonomorphizedClass::rbegin()
{
	return std::rbegin(ownedBlock);
}

std::vector<
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::reverse_iterator
Celeste::ir ::inputreconstruction::MonomorphizedClass::rend()
{
	return std::rend(ownedBlock);
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::iterator
Celeste::ir::inputreconstruction::MonomorphizedClass::GetIterator(
	InputReconstructionObject* irComponent)
{
	for (auto iter = begin(); iter != end(); ++iter)
	{
		if ((*iter).get() == irComponent)
		{
			return iter;
		}
	}

	return end();
}

std::vector<
	std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>>::reverse_iterator
Celeste::ir ::inputreconstruction::MonomorphizedClass::GetReverseIterator(
	InputReconstructionObject* irComponent)
{
	for (auto iter = rbegin(); iter != rend(); ++iter)
	{
		if ((*iter).get() == irComponent)
		{
			return iter;
		}
	}

	return rend();
}

std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*>
Celeste::ir::inputreconstruction::MonomorphizedClass::GetScope()
{
	std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*> scope;
	for (auto& _ : ownedBlock)
	{
		scope.push_back(_.get());
	}
	return scope;
}

std::unique_ptr<Celeste::ir::inputreconstruction::InputReconstructionObject>
Celeste::ir::inputreconstruction::MonomorphizedClass::DeepCopy()
{
	return std::make_unique<MonomorphizedClass>(*this);
}

Celeste::ir::inputreconstruction::MonomorphizedClass::MonomorphizedClass(
	const MonomorphizedClass& rhs)
	: InputReconstructionObject(rhs)
{
	throw std::logic_error("Unimplemented");
}
