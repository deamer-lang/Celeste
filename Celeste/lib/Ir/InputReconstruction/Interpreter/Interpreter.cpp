#include "Celeste/Ir/InputReconstruction/Interpreter/Interpreter.h"
#include "Celeste/Ir/InputReconstruction/Computation/Value.h"
#include "Celeste/Ir/InputReconstruction/Computation/VariableDeclaration.h"
#include "Celeste/Ir/InputReconstruction/Import.h"
#include "Celeste/Ir/InputReconstruction/Meta/File.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include "Celeste/Ir/InputReconstruction/Meta/Project.h"
#include "Celeste/Ir/InputReconstruction/Standard/Decimal.h"
#include "Celeste/Ir/InputReconstruction/Standard/Integer.h"
#include "Celeste/Ir/InputReconstruction/Standard/Text.h"
#include "Celeste/Ir/InputReconstruction/Structure/Enumeration.h"
#include "Celeste/Ir/InputReconstruction/Structure/Function.h"

Celeste::ir::inputreconstruction::Interpreter::TypeId::TypeId(std::size_t id_) : id(id_)
{
}

Celeste::ir::inputreconstruction::Interpreter::Name::Name(NameReference* name_)
{
	names.insert(name_->GetResolvedName());
}

void Celeste::ir::inputreconstruction::Interpreter::Name::AddName(NameReference* name_)
{
	names.insert(name_->GetResolvedName());
}

Celeste::ir::inputreconstruction::Interpreter::SymbolTable::SymbolTable(Interpreter* interpreter_)
	: interpreter(interpreter_)
{
}

Celeste::ir::inputreconstruction::Interpreter::SymbolTable*
Celeste::ir::inputreconstruction::Interpreter::SymbolTable::OpenScope()
{
	nextDepthScope = SymbolTable(interpreter);
	currentScope = &nextDepthScope.value();
	currentScope->parent = this;

	return currentScope;
}

void Celeste::ir::inputreconstruction::Interpreter::SymbolTable::CloseScope()
{
	nextDepthScope = std::nullopt;
	currentScope = this;
}

void Celeste::ir::inputreconstruction::Interpreter::SymbolTable::AddVariable(
	VariableDeclaration* object)
{
	auto name = Name(object->GetName());
	auto type = GetType(object->GetVariableType());
	auto value = Evaluate(object, object->GetExpressions());
	auto newSymbolMember = SymbolMember(name, type, value);
}

Celeste::ir::inputreconstruction::Interpreter::TypeId
Celeste::ir::inputreconstruction::Interpreter::SymbolTable::GetType(TypeConstruct* typeConstruct)
{
	auto coreType = typeConstruct->GetCoreType();
	if (!coreType.has_value())
	{
		// We got an issue
		return {std::numeric_limits<std::size_t>::max()};
	}

	if (coreType.value()->GetType() == inputreconstruction::Type::Class)
	{
		auto classObject = static_cast<Class*>(coreType.value());

		auto iter = interpreter->typeTable.typePointerMap.find(classObject);
		if (iter == interpreter->typeTable.typePointerMap.end())
		{
			interpreter->typeTable.AddClass(classObject);
		}

		return interpreter->typeTable.typePointerMap.find(classObject)->second.type;
	}
	else if (coreType.value()->GetType() == inputreconstruction::Type::Enumeration)
	{
		auto enumerationObject = static_cast<Enumeration*>(coreType.value());

		auto iter = interpreter->typeTable.typePointerMap.find(enumerationObject);
		if (iter == interpreter->typeTable.typePointerMap.end())
		{
			interpreter->typeTable.AddEnumeration(enumerationObject);
		}

		return interpreter->typeTable.typePointerMap.find(enumerationObject)->second.type;
	}
	else
	{
		// Not yet supported
		return {std::numeric_limits<std::size_t>::max()};
	}
}

bool Celeste::ir::inputreconstruction::Interpreter::SymbolTable::PolymorphismEquality(
	InputReconstructionObject* lhsType, InputReconstructionObject* rhsType)
{
}

std::variant<int, double, std::string,
			 Celeste::ir::inputreconstruction::Interpreter::AlgebraicValue>
Celeste::ir::inputreconstruction::Interpreter::SymbolTable::ZeroValue(
	InputReconstructionObject* type)
{
	if (type->GetType() == inputreconstruction::Type::Integer)
	{
		return int(0);
	}
	if (type->GetType() == inputreconstruction::Type::Decimal)
	{
		return double(0);
	}
	if (type->GetType() == inputreconstruction::Type::Text)
	{
		return std::string("");
	}

	auto iter = interpreter->typeTable.typePointerMap.find(type);
	if (iter == interpreter->typeTable.typePointerMap.end())
	{
		// Critical Error
	}

	if (type->GetType() == inputreconstruction::Type::Enumeration)
	{
	}
	if (type->GetType() == inputreconstruction::Type::Class)
	{
		auto classObject = static_cast<Class*>(type);

		auto typeId = iter->second.type;
		AlgebraicValue result(typeId);

		for (auto& inheritBase : classObject->GetInheritedBases())
		{
		}

		for (auto& compoundBase : classObject->GetCompoundBases())
		{
			Name compoundName;
			for (auto& alias : compoundBase->GetScope())
			{
				if (alias->GetType() != inputreconstruction::Type::NameReference)
				{
					continue;
				}

				auto aliasDecasted = static_cast<NameReference*>(alias);
				compoundName.AddName(aliasDecasted);
			}

			auto compoundTypeId =
				interpreter->typeTable.typePointerMap.find(compoundBase->GetCompoundedBase())
					->second.type;

			auto newSymbolMember = SymbolMember(
				compoundName, compoundTypeId, Value(ZeroValue(compoundBase->GetCompoundedBase())));

			result.AddSymbolMember(newSymbolMember);
		}

		for (auto& [accessibility, member] : classObject->GetMembers())
		{
			if (member->GetType() == inputreconstruction::Type::VariableDeclaration)
			{
				auto memberDecasted = static_cast<VariableDeclaration*>(member);
				auto memberName = Name(memberDecasted->GetName());
				auto memberTypeId =
					interpreter->typeTable.typePointerMap.find(memberDecasted->GetVariableType())
						->second.type;
				auto newSymbolMember = SymbolMember(
					memberName, memberTypeId, Value(ZeroValue(memberDecasted->GetVariableType())));
			}
			else if (member->GetType() == inputreconstruction::Type::Function)
			{
				auto memberDecasted = static_cast<Function*>(member);
			}
		}

		return {result};
	}

	// Critical Error
	throw std::logic_error("Critical Error");
}

bool Celeste::ir::inputreconstruction::Interpreter::SymbolTable::CopyByValue(
	InputReconstructionObject* object)
{
	// Copy by reference is not yet supported
	return true;
}

bool Celeste::ir::inputreconstruction::Interpreter::SymbolTable::MatchingConstructor(
	InputReconstructionObject* lhs, const std::vector<std::unique_ptr<Expression>>& expressions)
{
	return false;
}

bool Celeste::ir::inputreconstruction::Interpreter::SymbolTable::MatchingImplicitlyConstructor(
	InputReconstructionObject* lhs, const std::vector<std::unique_ptr<Expression>>& expressions)
{
	return false;
}

std::optional<Celeste::ir::inputreconstruction::Interpreter::Symbol*>
Celeste::ir::inputreconstruction::Interpreter::SymbolTable::GetSymbolMember(Name name)
{
	for (auto symbol : symbols)
	{
		if (symbol.name == name)
		{
			return &symbol;
		}
	}

	if (parent.has_value())
	{
		return parent.value()->GetSymbolMember(name);
	}

	return std::nullopt;
}

Celeste::ir::inputreconstruction::Interpreter::Type::Type(TypeId type_, Name name_,
														  InputReconstructionObject* irType_)
	: type(type_),
	  name(name_),
	  irType(irType_)
{
}

Celeste::ir::inputreconstruction::Interpreter::Value
Celeste::ir::inputreconstruction::Interpreter::SymbolTable::Evaluate(
	VariableDeclaration* object, const std::vector<std::unique_ptr<Expression>>& expressions)
{
	auto lhsType = object->GetVariableType()->GetCoreType();
	if (!lhsType.has_value())
	{
		// Critical Error
	}

	// If it is empty, the variable must get a Value that is default initialized as "zero"
	if (expressions.empty())
	{
		return Value(ZeroValue(lhsType.value()));
	}

	if (expressions.size() == 1)
	{
		const auto& rhs = expressions[0];
		auto rhsType = rhs->DeduceType();

		if (rhs->DeduceType() == lhsType.value())
		{
			if (CopyByValue(lhsType.value()))
			{
				return Evaluate(rhs);
			}
		}

		if (PolymorphismEquality(lhsType.value(), rhsType))
		{
			// Check if there is an accepting Constructor
			if (MatchingConstructor(lhsType.value(), expressions))
			{
			}
			else
			{
				// No matching constructor, i.e. no override of default behavior
				if (CopyByValue(lhsType.value()))
				{
					return Evaluate(rhs);
				}
			}
		}
	}

	if (MatchingConstructor(lhsType.value(), expressions))
	{
	}
	else if (MatchingImplicitlyConstructor(lhsType.value(), expressions))
	{
	}
	else
	{
		// We got issue
	}
}

Celeste::ir::inputreconstruction::Interpreter::Value
Celeste::ir::inputreconstruction::Interpreter::SymbolTable::Evaluate(
	const std::unique_ptr<Expression>& rhs)
{
	auto extractValue = [&](std::variant<std::monostate, std::unique_ptr<Expression>,
										 std::unique_ptr<inputreconstruction::Value>>& someValue) {
		if (std::holds_alternative<std::unique_ptr<inputreconstruction::Value>>(someValue))
		{
			auto& lhs = std::get<std::unique_ptr<inputreconstruction::Value>>(someValue);
			auto& lhsValue = lhs->GetValue();
			if (std::holds_alternative<std::monostate>(lhsValue))
			{
				// Error
			}
			else if (std::holds_alternative<std::unique_ptr<CodeBlock>>(lhsValue))
			{
				// Unsupported
			}
			else if (std::holds_alternative<std::unique_ptr<SymbolReferenceCall>>(lhsValue))
			{
				// Get the value from the referenced variable
				auto nameNotFinalized =
					std::get<std::unique_ptr<SymbolReferenceCall>>(lhsValue)->GetResolvedLinkedIr();
				if (!nameNotFinalized.has_value())
				{
					// Error
				}

				if (nameNotFinalized.value()->GetType() ==
					inputreconstruction::Type::VariableDeclaration)
				{
					auto linkedVariable =
						static_cast<VariableDeclaration*>(nameNotFinalized.value());
					auto variableName = linkedVariable->GetName();
					auto variable = GetSymbolMember(Name{variableName});
					if (!variable.has_value())
					{
						// Error
					}

					return variable.value()->symbolValue.value();
				}
				else if (nameNotFinalized.value()->GetType() == inputreconstruction::Type::Function)

				{
				}
				else if (nameNotFinalized.value()->GetType() ==
						 inputreconstruction::Type::Constructor)

				{
				}
				else
				{
					// Error
				}
			}
			else if (std::holds_alternative<std::unique_ptr<Tuple>>(lhsValue))
			{
				// Unsupported
			}
			else if (std::holds_alternative<std::unique_ptr<Integer>>(lhsValue))
			{
				return Value(std::get<std::unique_ptr<Integer>>(lhsValue)->GetEvaluation());
			}
			else if (std::holds_alternative<std::unique_ptr<Decimal>>(lhsValue))
			{
				return Value(std::get<std::unique_ptr<Decimal>>(lhsValue)->GetEvaluation());
			}
			else if (std::holds_alternative<std::unique_ptr<Text>>(lhsValue))
			{
				return Value(std::get<std::unique_ptr<Text>>(lhsValue)->GetEvaluation());
			}
		}
		else if (std::holds_alternative<std::unique_ptr<Expression>>(someValue))
		{
			return Evaluate(std::get<std::unique_ptr<Expression>>(someValue));
		}

		// Error
		return Value(0);
	};

	if (std::holds_alternative<std::monostate>(rhs->GetRhs()))
	{
		return extractValue(rhs->GetLhs());
	}
	else
	{
		// Otherwise, we deal with 2 items (lhs operator rhs)
		auto getValue = [&](std::variant<std::monostate, std::unique_ptr<Expression>,
										 std::unique_ptr<inputreconstruction::Value>>& someValue) {
			if (std::holds_alternative<std::monostate>(someValue))
			{
				// Error
				return Value(0);
			}
			else if (std::holds_alternative<std::unique_ptr<Expression>>(someValue))
			{
				return Evaluate(std::get<std::unique_ptr<Expression>>(someValue));
			}
			else if (std::holds_alternative<std::unique_ptr<inputreconstruction::Value>>(someValue))
			{
				return extractValue(someValue);
			}
		};

		Value lhsValue = getValue(rhs->GetLhs());
		Value rhsValue = getValue(rhs->GetRhs());

		// Not yet completed
	}
}

void Celeste::ir::inputreconstruction::Interpreter::TypeTable::AddClass(Class* class_)
{
	auto iter = typePointerMap.find(class_);
	if (iter != typePointerMap.end())
	{
		// It is already known, thus skip it.
		return;
	}

	auto newTypeId = TypeId(typePointerMap.size());
	auto newTypeName = Name(class_->GetClassName());
	auto newType = Type(newTypeId, newTypeName, class_);

	auto idIter = typeIdMap.find(newTypeId);
	auto nameIter = typeNameMap.find(newTypeName);
	if (idIter != typeIdMap.end() || nameIter != typeNameMap.end())
	{
		// We got an issue.
		return;
	}

	typePointerMap.insert({class_, newType});
	typeIdMap.insert({newTypeId, newType});
	typeNameMap.insert({newTypeName, newType});
}

void Celeste::ir::inputreconstruction::Interpreter::TypeTable::AddEnumeration(
	Enumeration* enumeration)
{
	auto iter = typePointerMap.find(enumeration);
	if (iter != typePointerMap.end())
	{
		// It is already known, thus skip it.
		return;
	}

	auto newTypeId = TypeId(typePointerMap.size());
	auto newTypeName = Name(enumeration->GetName());
	auto newType = Type(newTypeId, newTypeName, enumeration);

	auto idIter = typeIdMap.find(newTypeId);
	auto nameIter = typeNameMap.find(newTypeName);
	if (idIter != typeIdMap.end() || nameIter != typeNameMap.end())
	{
		// We got an issue.
		return;
	}

	typePointerMap.insert({enumeration, newType});
	typeIdMap.insert({newTypeId, newType});
	typeNameMap.insert({newTypeName, newType});
}

Celeste::ir::inputreconstruction::Interpreter::Interpreter(GroupType groupType_)
	: groupType(groupType_),
	  symbolTable(this)
{
}

Celeste::ir::inputreconstruction::Interpreter::~Interpreter()
{
}

void Celeste::ir::inputreconstruction::Interpreter::Interpret(InputReconstructionObject* entryPoint)
{
	// Set up Global Variables and Class Table
	SetUpGlobalInformation(entryPoint);

	// Reset Processed Files
	processedFiles.clear();
}

void Celeste::ir::inputreconstruction::Interpreter::SetUpGlobalInformation(
	InputReconstructionObject* entryPoint)
{
	auto file = entryPoint->GetFile();
	if (std::find(std::begin(processedFiles), std::end(processedFiles), file) !=
		std::end(processedFiles))
	{
		return;
	}
	processedFiles.push_back(file);
	auto root = file->GetRoot();

	for (auto object : root->GetScope())
	{
		auto objectType = object->GetType();
		switch (objectType)
		{
		case inputreconstruction::Type::Import: {
			// We must first complete Imports before continuing.
			auto importObject = static_cast<Import*>(object);
			auto targetFile = importObject->GetTarget();
			SetUpGlobalInformation(targetFile->GetRoot());
			break;
		}
		case inputreconstruction::Type::Class: {
			auto classObject = static_cast<Class*>(object);
			typeTable.AddClass(classObject);
			break;
		}
		case inputreconstruction::Type::Enumeration: {
			auto enumerationObject = static_cast<Enumeration*>(object);
			typeTable.AddEnumeration(enumerationObject);
			break;
		}
		case inputreconstruction::Type::VariableDeclaration: {
			auto variable = static_cast<VariableDeclaration*>(object);
			symbolTable.AddVariable(variable);
			break;
		}
		case inputreconstruction::Type::Function: {
			break;
		}
		case inputreconstruction::Type::CodeFunction: {
			break;
		}
		case inputreconstruction::Type::NameFunction: {
			break;
		}
		default: {
			// We have no use for this type
			break;
		}
		}
	}
}
