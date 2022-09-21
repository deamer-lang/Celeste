#include "Celeste/Ir/InputReconstruction/Structure/Class.h"
#include "Celeste/Ir/InputReconstruction/Computation/Expression.h"
#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Computation/Value.h"
#include "Celeste/Ir/InputReconstruction/Computation/VariableDeclaration.h"
#include "Celeste/Ir/InputReconstruction/Structure/Constructor.h"
#include "Celeste/Ir/InputReconstruction/Structure/Function.h"

Celeste::ir::inputreconstruction::Class::Class(std::unique_ptr<NameReference> className_)
	: InputReconstructionObject(Type::Class),
	  className(std::move(className_))
{
}

void Celeste::ir::inputreconstruction::Class::Complete()
{
	className->SetParent(this);
	className->SetFile(GetFile());
}

void Celeste::ir::inputreconstruction::Class::Add(InputReconstructionObject* object)
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
		Add(object, lastAccessibility);
	}
}

void Celeste::ir::inputreconstruction::Class::Add(InputReconstructionObject* object,
												  Accessibility accessibility)
{
	block.emplace_back(std::pair<Accessibility, InputReconstructionObject*>{accessibility, object});
}

void Celeste::ir::inputreconstruction::Class::AddCompoundBase(
	std::unique_ptr<CompoundBase> compoundBase)
{
	compoundBases.push_back(std::move(compoundBase));
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::CompoundBase>>&
Celeste::ir::inputreconstruction::Class::GetCompoundBases()
{
	return compoundBases;
}

void Celeste::ir::inputreconstruction::Class::AddInheritedBase(
	std::unique_ptr<InheritBase> inheritBase)
{
	inheritedBases.push_back(std::move(inheritBase));
}

std::vector<std::unique_ptr<Celeste::ir::inputreconstruction::InheritBase>>&
Celeste::ir::inputreconstruction::Class::GetInheritedBases()
{
	return inheritedBases;
}

std::vector<std::pair<Celeste::ir::inputreconstruction::Accessibility,
					  Celeste::ir::inputreconstruction::InputReconstructionObject*>>&
Celeste::ir::inputreconstruction::Class::GetMembers()
{
	return block;
}

Celeste::ir::inputreconstruction::InputReconstructionObject*
Celeste::ir::inputreconstruction::Class::GetMember(NameReference* nameReference,
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
		else
		{
			// invalid resolve
		}
	}

	return nullptr;
}

Celeste::ir::inputreconstruction::InputReconstructionObject*
Celeste::ir::inputreconstruction::Class::GetMember(
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

		if (resolvedIr.value()->GetType() != Type::Class)
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
Celeste::ir::inputreconstruction::Class::GetMember(
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

		if (resolvedIr.value()->GetType() != Type::Class)
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
Celeste::ir::inputreconstruction::Class::GetClassName()
{
	return className.get();
}

std::optional<Celeste::ir::inputreconstruction::InputReconstructionObject*>
Celeste::ir::inputreconstruction::Class::GetConstructor(NameReference* nameReference,
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

	return std::nullopt;
}

std::vector<Celeste::ir::inputreconstruction::Constructor*>
Celeste::ir::inputreconstruction::Class::GetConstructors(Accessibility accessibility)
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

void Celeste::ir::inputreconstruction::Class::AddTemplateParameter(
	std::unique_ptr<TemplateParameter> templateParameter)
{
	templateParameter->SetParent(this);
	templateParameters.push_back(std::move(templateParameter));
}
