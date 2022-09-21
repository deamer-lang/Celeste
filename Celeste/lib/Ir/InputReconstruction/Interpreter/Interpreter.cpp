#include "Celeste/Ir/InputReconstruction/Interpreter/Interpreter.h"
#include "Celeste/Ir/InputReconstruction/CodeGeneration/CodeFunction.h"
#include "Celeste/Ir/InputReconstruction/Computation/Value.h"
#include "Celeste/Ir/InputReconstruction/Computation/VariableDeclaration.h"
#include "Celeste/Ir/InputReconstruction/Import.h"
#include "Celeste/Ir/InputReconstruction/Meta/File.h"
#include "Celeste/Ir/InputReconstruction/Meta/InputReconstructionObject.h"
#include "Celeste/Ir/InputReconstruction/Meta/Project.h"
#include "Celeste/Ir/InputReconstruction/Standard/Decimal.h"
#include "Celeste/Ir/InputReconstruction/Standard/Integer.h"
#include "Celeste/Ir/InputReconstruction/Standard/Text.h"
#include "Celeste/Ir/InputReconstruction/Structure/Constructor.h"
#include "Celeste/Ir/InputReconstruction/Structure/Enumeration.h"
#include "Celeste/Ir/InputReconstruction/Structure/Function.h"
#include <limits>

namespace Celeste
{
	namespace ir
	{
		namespace inputreconstruction
		{
			class NameFunction;
		}
	}
}

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

std::optional<Celeste::ir::inputreconstruction::Interpreter::GlobalVariableMember*>
Celeste::ir::inputreconstruction::Interpreter::GlobalVariableTable::GetGlobal(
	File* file, InputReconstructionObject* requestedGlobal)
{
	// We first validate if the file has access to the global
	// Then we return the global variable member.
	// If some pass shows we may not access it, we return nothing.

	auto iter = mapFileWithInitialVertex.find(file);
	if (iter == mapFileWithInitialVertex.end())
	{
		return std::nullopt;
	}

	auto globalIter = iter->second->accessibleObjects.find(requestedGlobal);
	if (globalIter == iter->second->accessibleObjects.end())
	{
		return std::nullopt;
	}

	auto globalSymbolIter = globalVariableTable.find(requestedGlobal);
	if (globalSymbolIter == globalVariableTable.end())
	{
		return std::nullopt;
	}

	return globalSymbolIter->second.get();
}

void Celeste::ir::inputreconstruction::Interpreter::GlobalVariableTable::AddVariable(
	VariableDeclaration* variableDeclaration)
{
	// Construction of Global Symbol
	auto name = Name(variableDeclaration->GetName());
	auto type = interpreter->GetType(variableDeclaration->GetVariableType());
	auto newSymbol = std::make_unique<GlobalVariableMember>(name, type);
	newSymbol->irObject = variableDeclaration;

	unEvaluatedGlobalVariables.push_back(newSymbol.get());
	globalVariableTable.insert({variableDeclaration, std::move(newSymbol)});

	auto file = variableDeclaration->GetFile();
	auto pool = GetFilePool(file);
	pool->fileLocalSymbols.insert(variableDeclaration);
}

Celeste::ir::inputreconstruction::Interpreter::GlobalVariableTable::FileVertex*
Celeste::ir::inputreconstruction::Interpreter::GlobalVariableTable::GetFileVertex(File* sub)
{
	auto iter = mapFileWithInitialVertex.find(sub);
	if (iter == mapFileWithInitialVertex.end())
	{
		auto newFileVertex = std::make_unique<FileVertex>();
		auto newFileVertexPtr = newFileVertex.get();
		newFileVertex->file = sub;
		mapFileWithInitialVertex.insert({sub, newFileVertex.get()});
		vertices.push_back(std::move(newFileVertex));

		return newFileVertexPtr;
	}

	return iter->second;
}

Celeste::ir::inputreconstruction::Interpreter::GlobalVariableTable::FileSymbolPool*
Celeste::ir::inputreconstruction::Interpreter::GlobalVariableTable::GetFilePool(File* file)
{
	auto vertex = GetFileVertex(file);
	if (vertex->internalPools.empty())
	{
		auto newPool = std::make_unique<FileSymbolPool>();
		auto newPoolPtr = newPool.get();

		mapFileWithPool.insert({file, newPoolPtr});
		vertex->internalPools.insert(newPoolPtr);
		pools.push_back(std::move(newPool));

		return newPoolPtr;
	}

	return mapFileWithPool.find(file)->second;
}

void Celeste::ir::inputreconstruction::Interpreter::GlobalVariableTable::FileInheritsFile(
	File* sub, File* base)
{
	auto iterLhs = GetFileVertex(sub);
	auto iterRhs = GetFileVertex(base);

	edges.insert({iterLhs, iterRhs});
	iterLhs->linkedPools.insert(iterRhs);
}

void Celeste::ir::inputreconstruction::Interpreter::GlobalVariableTable::EvaluateFileInheritance()
{
	index = 0;
	vertexStack.clear();
	for (auto& vertex : vertices)
	{
		if (vertex->index.has_value())
		{
			continue;
		}

		strongconnect(vertex.get());
	}

	OptimizeFilePoolsUsingStrongConnectedSets();
}

void Celeste::ir::inputreconstruction::Interpreter::GlobalVariableTable::strongconnect(
	FileVertex* value)
{
	value->index = index;
	value->lowLink = index;
	index += 1;
	vertexStack.push_back(value);
	value->onStack = true;

	auto& lhs = value;
	for (auto rhs : lhs->linkedPools)
	{
		if (!rhs->index.has_value())
		{
			strongconnect(rhs);
			lhs->lowLink = std::min(lhs->lowLink, rhs->lowLink);
		}
		else if (rhs->onStack)
		{
			lhs->lowLink = std::min(lhs->lowLink, rhs->index);
		}
	}

	if (value->lowLink == value->index)
	{
		std::set<FileVertex*> newStrongConnectedSet;
		FileVertex* current = nullptr;
		std::size_t skipIndex = 0;
		do
		{
			current = *std::crbegin(vertexStack);
			vertexStack.erase(std::end(vertexStack) - skipIndex - 1);
			current->onStack = false;
			newStrongConnectedSet.insert(current);

		} while (current != value);

		if (!newStrongConnectedSet.empty())
		{
			strongConnectedSets.push_back(newStrongConnectedSet);
		}
	}
}

void Celeste::ir::inputreconstruction::Interpreter::GlobalVariableTable::
	OptimizeFilePoolsUsingStrongConnectedSets()
{
	std::vector<std::unique_ptr<FileVertex>> singleFileVertices;
	std::map<FileVertex*, FileVertex*> mapOldVertexWithUnionizedVertex;
	for (auto& set : strongConnectedSets)
	{
		auto newVertex = std::make_unique<FileVertex>();
		for (auto& vertex : set)
		{
			newVertex->internalPools.insert(vertex->internalPools.begin(),
											vertex->internalPools.end());

			mapFileWithInitialVertex[vertex->file] = newVertex.get();
			mapOldVertexWithUnionizedVertex.insert({vertex, newVertex.get()});
		}
		singleFileVertices.push_back(std::move(newVertex));
	}

	for (auto i = 0; i < strongConnectedSets.size(); i++)
	{
		auto& currentVertex = singleFileVertices[i];
		auto& currentSet = strongConnectedSets[i];

		for (auto& vertex : currentSet)
		{
			for (auto linkedPool : vertex->linkedPools)
			{
				currentVertex->linkedPools.insert(
					mapOldVertexWithUnionizedVertex.find(linkedPool)->second);
			}
		}
	}

	// Update the vertices with the new unionized vertices
	for (auto& vertex : singleFileVertices)
	{
		if (vertex->index.has_value())
		{
			continue;
		}

		ProcessVertex(vertex.get());
	}

	vertices = std::move(singleFileVertices);
}

void Celeste::ir::inputreconstruction::Interpreter::GlobalVariableTable::ProcessVertex(
	FileVertex* value)
{
	// Process direct members;
	for (auto internalPool : value->internalPools)
	{
		value->accessibleObjects.insert(internalPool->fileLocalSymbols.begin(),
										internalPool->fileLocalSymbols.end());
	}

	// Indicate that the vertex is processed;
	value->index = 0;

	for (auto linkedPool : value->linkedPools)
	{
		if (!linkedPool->index.has_value())
		{
			ProcessVertex(linkedPool);
		}

		value->accessibleObjects.insert(linkedPool->accessibleObjects.begin(),
										linkedPool->accessibleObjects.end());
	}
}

void Celeste::ir::inputreconstruction::Interpreter::GlobalVariableTable::
	EvaluateUnEvaluatedGlobals()
{
	while (!unEvaluatedGlobalVariables.empty())
	{
		auto currentElement = unEvaluatedGlobalVariables[0];
		unEvaluatedGlobalVariables.erase(std::cbegin(unEvaluatedGlobalVariables));

		if (currentElement->value.has_value())
		{
			// Already resolved
			continue;
		}

		auto variable = static_cast<VariableDeclaration*>(currentElement->irObject);

		auto newValue = interpreter->Evaluate(variable, variable->GetExpressions());
		currentElement->value = newValue;
	}

	// not yet completed
}

Celeste::ir::inputreconstruction::Interpreter::GlobalVariableTable::GlobalVariableTable(
	Interpreter* interpreter_)
	: interpreter(interpreter_)
{
}

Celeste::ir::inputreconstruction::Interpreter::Stack::Stack(Interpreter* interpreter_)
	: interpreter(interpreter_)
{
}

Celeste::ir::inputreconstruction::Interpreter::Stack*
Celeste::ir::inputreconstruction::Interpreter::Stack::OpenScope()
{
	nextDepthScope = std::make_unique<Stack>(interpreter);
	currentScope = nextDepthScope->get();
	currentScope->parent = this;

	return currentScope;
}

void Celeste::ir::inputreconstruction::Interpreter::Stack::CloseScope()
{
	nextDepthScope = std::nullopt;
	currentScope = this;
}

void Celeste::ir::inputreconstruction::Interpreter::Stack::AddVariable(VariableDeclaration* object)
{
	auto name = Name(object->GetName());
	auto type = interpreter->GetType(object->GetVariableType());
	auto value = interpreter->Evaluate(object, object->GetExpressions());
	auto newSymbol = std::make_unique<Symbol>(name, type, value);
	symbols.push_back(std::move(newSymbol));
}

Celeste::ir::inputreconstruction::Interpreter::TypeId
Celeste::ir::inputreconstruction::Interpreter::GetType(TypeConstruct* typeConstruct)
{
	auto coreType = typeConstruct->GetCoreType();
	if (!coreType.has_value())
	{
		// We got an issue
		return {std::numeric_limits<std::size_t>::max()};
	}

	if (coreType.value() == nullptr)
	{
		// Critical error
		return {std::numeric_limits<std::size_t>::max()};
	}

	if (coreType.value()->GetType() == inputreconstruction::Type::Class)
	{
		auto classObject = static_cast<Class*>(coreType.value());

		auto iter = typeTable.typePointerMap.find(classObject);
		if (iter == typeTable.typePointerMap.end())
		{
			typeTable.AddClass(classObject);
		}

		return typeTable.typePointerMap.find(classObject)->second.type;
	}
	else if (coreType.value()->GetType() == inputreconstruction::Type::Enumeration)
	{
		auto enumerationObject = static_cast<Enumeration*>(coreType.value());

		auto iter = typeTable.typePointerMap.find(enumerationObject);
		if (iter == typeTable.typePointerMap.end())
		{
			typeTable.AddEnumeration(enumerationObject);
		}

		return typeTable.typePointerMap.find(enumerationObject)->second.type;
	}
	else
	{
		// Not yet supported
		return {std::numeric_limits<std::size_t>::max()};
	}
}

bool Celeste::ir::inputreconstruction::Interpreter::PolymorphismEquality(
	InputReconstructionObject* lhsType, InputReconstructionObject* rhsType)
{
	return false;
}

std::variant<int, double, std::string,
			 Celeste::ir::inputreconstruction::Interpreter::AlgebraicValue>
Celeste::ir::inputreconstruction::Interpreter::ZeroValue(InputReconstructionObject* type)
{
	if (type == nullptr)
	{
		return int(0);
	}
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

	auto iter = typeTable.typePointerMap.find(type);
	if (iter == typeTable.typePointerMap.end())
	{
		// Critical Error
	}

	if (type->GetType() == inputreconstruction::Type::Enumeration)
	{
		auto enumerationObject = static_cast<Enumeration*>(type);

		// Not yet implemented
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
				typeTable.typePointerMap.find(compoundBase->GetCompoundedBase())->second.type;

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
					typeTable.typePointerMap.find(memberDecasted->GetVariableType())->second.type;
				auto newSymbolMember = SymbolMember(
					memberName, memberTypeId, Value(ZeroValue(memberDecasted->GetVariableType())));
			}
			else if (member->GetType() == inputreconstruction::Type::Function)
			{
				auto memberDecasted = static_cast<inputreconstruction::Function*>(member);
			}
		}

		return {result};
	}

	// Critical Error
	throw std::logic_error("Critical Error");
}

bool Celeste::ir::inputreconstruction::Interpreter::CopyByValue(InputReconstructionObject* object)
{
	// Copy by reference is not yet supported
	return true;
}

bool Celeste::ir::inputreconstruction::Interpreter::MatchingConstructor(
	InputReconstructionObject* lhs, const std::vector<std::unique_ptr<Expression>>& expressions)
{
	if (lhs == nullptr)
	{
		throw std::logic_error(
			"Type evaluation was incomplete, or malformed input was given by accident by some "
			"logic error.");
	}

	if (lhs->GetType() == inputreconstruction::Type::Class)
	{
		auto classObject = static_cast<inputreconstruction::Class*>(lhs);
		for (auto constructor : classObject->GetConstructors())
		{
			if (constructor->Accepts(expressions))
			{
				return true;
			}
		}
	}
	else if (lhs->GetType() == inputreconstruction::Type::Enumeration)
	{
		auto enumerationObject = static_cast<inputreconstruction::Enumeration*>(lhs);
		if (expressions.size() == 1)
		{
			if (expressions[0]->DeduceType() == enumerationObject)
			{
				// We can just assign the value
				return true;
			}
		}
		else
		{
			// Special case, as this is not formally defined.
			return false;
		}
	}
	else if (lhs->GetType() == inputreconstruction::Type::InlineClass)
	{
		// Not yet implemented
		std::cout
			<< "Tried matching the constructor of an inlined class, this is not yet supported.\n";
	}

	return false;
}

bool Celeste::ir::inputreconstruction::Interpreter::MatchingImplicitlyConstructor(
	InputReconstructionObject* lhs, const std::vector<std::unique_ptr<Expression>>& expressions)
{
	return false;
}

std::optional<Celeste::ir::inputreconstruction::Interpreter::Symbol*>
Celeste::ir::inputreconstruction::Interpreter::Stack::GetSymbolMember(Name name)
{
	for (auto& symbol : symbols)
	{
		if (symbol->name == name)
		{
			return symbol.get();
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
Celeste::ir::inputreconstruction::Interpreter::Evaluate(
	VariableDeclaration* object, const std::vector<std::unique_ptr<Expression>>& expressions)
{
	auto lhsType = object->GetVariableType()->GetCoreType();
	if (!lhsType.has_value())
	{
		// Critical Error
		std::cout << "Critical Internal Error, could not deduce core type of given variable\n";
		return ZeroValue(nullptr);
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

	// We got issue
	std::cout << "Wtf went wrong\n";
	throw std::logic_error("Kill this beast");
}

std::optional<Celeste::ir::inputreconstruction::Interpreter::Symbol*>
Celeste::ir::inputreconstruction::Interpreter::GetSymbolMember(
	const Celeste::ir::inputreconstruction::Interpreter::Name& name)
{
	// Not implemented
	return std::nullopt;
}

Celeste::ir::inputreconstruction::Interpreter::Value
Celeste::ir::inputreconstruction::Interpreter::Evaluate(const std::unique_ptr<Expression>& rhs)
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

					return variable.value()->value.value();
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

	for (auto& inheritBase : class_->GetInheritedBases())
	{
		AddClass(static_cast<inputreconstruction::Class*>(
			inheritBase->GetLinkedType()->GetResolvedLinkedIr().value()));
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

	for (auto [accessibility, member] : class_->GetMembers())
	{
		if (member->GetType() == inputreconstruction::Type::Constructor ||
			member->GetType() == inputreconstruction::Type::Function ||
			member->GetType() == inputreconstruction::Type::CodeFunction ||
			member->GetType() == inputreconstruction::Type::NameFunction)
		{
			interpreter->functionTable.AddFunction(member);
		}
	}
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

Celeste::ir::inputreconstruction::Interpreter::TypeId
Celeste::ir::inputreconstruction::Interpreter::TypeTable::GetType(InputReconstructionObject* parent)
{
	auto iter = typePointerMap.find(parent);
	if (iter != typePointerMap.end())
	{
		return iter->second.type;
	}

	switch (parent->GetType())
	{
	case inputreconstruction::Type::Class: {
		auto classObject = static_cast<inputreconstruction::Class*>(parent);
		AddClass(classObject);
		break;
	}
	}

	throw std::runtime_error("Some error occured that failed the type recognition system.");
}

Celeste::ir::inputreconstruction::Interpreter::TypeTable::TypeTable(Interpreter* interpreter_)
	: interpreter(interpreter_)
{
}

Celeste::ir::inputreconstruction::Interpreter::Function::Function(
	InputReconstructionObject* irObject_, FunctionType functionType_)
	: irObject(irObject_),
	  functionType(functionType_)
{
}

void Celeste::ir::inputreconstruction::Interpreter::FunctionTable::AddFunction(
	InputReconstructionObject* functionObject)
{
	auto parent = functionObject->GetParent();
	if (parent->GetType() == inputreconstruction::Type::Class)
	{
		auto classObject = static_cast<inputreconstruction::Class*>(parent);
		RegisterType(classObject);
	}

	switch (functionObject->GetType())
	{
	case inputreconstruction::Type::Function: {
		auto function = static_cast<inputreconstruction::Function*>(functionObject);
		if (parent->GetType() == inputreconstruction::Type::Class)
		{
			auto newMemberFunctionObject =
				std::make_unique<MemberFunction>(function, FunctionType::MemberFunction);
			auto newMemberFunctionObjectPtr = newMemberFunctionObject.get();
			memberFunctionTable.insert({function, std::move(newMemberFunctionObject)});
			auto typeId = interpreter->typeTable.GetType(parent);
			auto iter = mappingTypeWithMemberFunctions.find(typeId);
			iter->second.insert(functionObject);

			// Virtual logic
			auto parentVirtualMemberFunction = function->GetVirtualFunctionParent();
			while (parentVirtualMemberFunction != nullptr)
			{
				// Update Member Function Access
				auto iter = memberFunctionMapping.find({parentVirtualMemberFunction, typeId});
				if (iter != memberFunctionMapping.end())
				{
					iter->second = newMemberFunctionObjectPtr->irObject;
				}

				parentVirtualMemberFunction =
					parentVirtualMemberFunction->GetVirtualFunctionParent();
			}
		}
		else
		{
			auto newFunctionObject = std::make_unique<Function>(function, FunctionType::Function);
			globalFunctionTable.insert({function, std::move(newFunctionObject)});
		}
		break;
	}
	case inputreconstruction::Type::Constructor: {
		auto constructor = static_cast<inputreconstruction::Constructor*>(functionObject);
		auto newConstructorObject =
			std::make_unique<Constructor>(constructor, FunctionType::Constructor);
		constructorTable.insert({functionObject, std::move(newConstructorObject)});
		auto typeId = interpreter->typeTable.GetType(parent);
		auto iter = mappingTypeWithMemberFunctions.find(typeId);
		iter->second.insert(functionObject);
		break;
	}
	}
}

void Celeste::ir::inputreconstruction::Interpreter::FunctionTable::RegisterType(
	inputreconstruction::Class* classObject)
{
	auto typeId = interpreter->typeTable.GetType(classObject);
	auto iterTestAlreadyRegister = mappingTypeWithMemberFunctions.find(typeId);
	if (iterTestAlreadyRegister != mappingTypeWithMemberFunctions.end())
	{
		return;
	}

	auto UnionizeMemberFunctionsFromBases = [&](inputreconstruction::Class* type_) {
		std::set<InputReconstructionObject*> result;

		for (auto& inheritBase : type_->GetInheritedBases())
		{
			auto base = static_cast<inputreconstruction::Class*>(
				inheritBase->GetLinkedType()->GetResolvedLinkedIr().value());
			auto iter = mappingTypeWithMemberFunctions.find(interpreter->typeTable.GetType(base));

			for (auto _ : iter->second)
			{
				if (_->GetType() == inputreconstruction::Type::Constructor)
				{
					continue;
				}
				result.insert(_);
			}
		}

		return result;
	};

	// This takes the virtual override logic
	// And properly orders all calls.
	auto UnionizeMemberFunctionsFromBasesVirtualSetup = [&](inputreconstruction::Class* type_) {
		std::map<std::pair<InputReconstructionObject*, TypeId>, InputReconstructionObject*> result;
		auto typeId = interpreter->typeTable.GetType(type_);

		for (auto& inheritBase : type_->GetInheritedBases())
		{
			auto base = static_cast<inputreconstruction::Class*>(
				inheritBase->GetLinkedType()->GetResolvedLinkedIr().value());
			auto iter = mappingTypeWithMemberFunctions.find(interpreter->typeTable.GetType(base));

			for (auto _ : iter->second)
			{
				if (_->GetType() == inputreconstruction::Type::Constructor)
				{
					continue;
				}
				result.insert({{_, typeId}, _});
			}
		}

		return result;
	};

	for (auto& inheritBase : classObject->GetInheritedBases())
	{
		auto typeOpt = inheritBase->GetLinkedType()->GetResolvedLinkedIr();
		if (!typeOpt.has_value())
		{
			// Critical issue, referenced base is not type resolvable.
			continue;
		}

		auto baseDowncasted = static_cast<inputreconstruction::Class*>(typeOpt.value());
		RegisterType(baseDowncasted);
	}

	auto functionList = UnionizeMemberFunctionsFromBases(classObject);
	mappingTypeWithMemberFunctions[typeId] = functionList;

	UnionizeMemberFunctionsFromBasesVirtualSetup(classObject);
}

std::optional<Celeste::ir::inputreconstruction::Interpreter::Function*>
Celeste::ir::inputreconstruction::Interpreter::FunctionTable::GetFunction(
	InputReconstructionObject* functionObject, std::optional<TypeId> typeId)
{
	if (typeId.has_value())
	{
		auto iter = memberFunctionMapping.find({functionObject, typeId.value()});
		if (iter == memberFunctionMapping.end())
		{
			return std::nullopt;
		}

		return GetFunction(iter->second);
	}
	else
	{
		auto iter = globalFunctionTable.find(functionObject);
		if (iter == globalFunctionTable.end())
		{
			return std::nullopt;
		}

		return iter->second.get();
	}
}

Celeste::ir::inputreconstruction::Interpreter::Interpreter(GroupType groupType_)
	: groupType(groupType_),
	  globalTable(this),
	  functionTable(this),
	  symbolTable(this),
	  typeTable(this)
{
}

Celeste::ir::inputreconstruction::Interpreter::~Interpreter()
{
}

void Celeste::ir::inputreconstruction::Interpreter::Interpret(InputReconstructionObject* entryPoint)
{
	// Set up Global Variables and Class Table
	SetUpGlobalInformation(entryPoint);

	globalTable.EvaluateFileInheritance();
	globalTable.EvaluateUnEvaluatedGlobals();

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
			globalTable.FileInheritsFile(file, targetFile);

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
			globalTable.AddVariable(variable);
			break;
		}
		case inputreconstruction::Type::Function: {
			auto functionObject = static_cast<inputreconstruction::Function*>(object);
			functionTable.AddFunction(functionObject);
			break;
		}
		case inputreconstruction::Type::CodeFunction: {
			auto functionObject = static_cast<inputreconstruction::CodeFunction*>(object);
			functionTable.AddFunction(functionObject);
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

Celeste::ir::inputreconstruction::Interpreter::FunctionTable::FunctionTable(
	Interpreter* interpreter_)
	: interpreter(interpreter_)
{
}
