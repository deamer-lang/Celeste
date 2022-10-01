#include "Celeste/Ir/InputReconstruction/Interpreter/Interpreter.h"
#include "Celeste/Ir/InputReconstruction/CodeGeneration/CodeFunction.h"
#include "Celeste/Ir/InputReconstruction/CodeGeneration/NameFunction.h"
#include "Celeste/Ir/InputReconstruction/Computation/Assignment.h"
#include "Celeste/Ir/InputReconstruction/Computation/NameReference.h"
#include "Celeste/Ir/InputReconstruction/Computation/Return.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolAccess.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolDecrease.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolIncrease.h"
#include "Celeste/Ir/InputReconstruction/Computation/SymbolReferenceCall.h"
#include "Celeste/Ir/InputReconstruction/Computation/Value.h"
#include "Celeste/Ir/InputReconstruction/Computation/VariableDeclaration.h"
#include "Celeste/Ir/InputReconstruction/Conditional/ConditionalFunction.h"
#include "Celeste/Ir/InputReconstruction/Conditional/Else.h"
#include "Celeste/Ir/InputReconstruction/Conditional/ElseIf.h"
#include "Celeste/Ir/InputReconstruction/Conditional/If.h"
#include "Celeste/Ir/InputReconstruction/Import.h"
#include "Celeste/Ir/InputReconstruction/Iterative/ForEach.h"
#include "Celeste/Ir/InputReconstruction/Iterative/ForIteration.h"
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

struct Celeste::ir::inputreconstruction::Interpreter::StackLifetime
{
	Interpreter* interpreter;
	StackLifetime(Interpreter* interpreter_) : interpreter(interpreter_)
	{
		interpreter->stackOfOperationStacks.emplace_back(interpreter);
	}

	~StackLifetime()
	{
		interpreter->stackOfOperationStacks.pop_back();
	}

	Stack& Stack() const
	{
		return *std::rbegin(interpreter->stackOfOperationStacks);
	}
};
Celeste::ir::inputreconstruction::Interpreter::TypeId::TypeId(std::size_t id_) : id(id_)
{
}

std::optional<Celeste::ir::inputreconstruction::Interpreter::SymbolMember*>
Celeste::ir::inputreconstruction::Interpreter::AlgebraicValue::GetSymbol(
	const std::string& nameReference)
{
	for (auto& symbol : symbolMembers)
	{
		if (symbol.name == nameReference)
		{
			return &symbol;
		}
	}

	return std::nullopt;
}

void Celeste::ir::inputreconstruction::Interpreter::AlgebraicValue::Print(std::size_t depth)
{
	if (symbolMembers.empty())
	{
		for (auto i = 0; i <= depth; i++)
		{
			std::cout << "\t";
		}
		std::cout << "EMPTY\n";
	}

	for (auto& symbolMember : symbolMembers)
	{
		for (auto i = 0; i <= depth; i++)
		{
			std::cout << "\t";
		}

		std::cout << "Symbol: [";
		for (auto name : symbolMember.name.names)
		{
			std::cout << name << ",";
		}
		std::cout << "] ";
		if (std::holds_alternative<int>(symbolMember.value.value))
		{
			std::cout << std::get<int>(symbolMember.value.value) << "\n";
		}
		else if (std::holds_alternative<double>(symbolMember.value.value))
		{
			std::cout << std::get<double>(symbolMember.value.value) << "\n";
		}
		else if (std::holds_alternative<std::string>(symbolMember.value.value))
		{
			std::cout << std::get<std::string>(symbolMember.value.value) << "\n";
		}
		else if (std::holds_alternative<AlgebraicValue>(symbolMember.value.value))
		{
			std::cout << "\n";
			std::get<AlgebraicValue>(symbolMember.value.value).Print(depth + 1);
		}
		else if (std::holds_alternative<Value*>(symbolMember.value.value))
		{
			std::cout << std::get<Value*>(symbolMember.value.value) << "\n";
		}
		else
		{
			// Error
			std::cout << "ERROR UNINITIALIZED\n";
		}
	}
}

std::optional<Celeste::ir::inputreconstruction::Interpreter::TypeId>
Celeste::ir::inputreconstruction::Interpreter::Value::GetType()
{
	if (std::holds_alternative<AlgebraicValue>(value))
	{
		return std::get<AlgebraicValue>(value).linkedType;
	}

	// Not yet supported
	return std::nullopt;
}

Celeste::ir::inputreconstruction::Interpreter::Name::Name(std::string name_)
{
	names.insert(name_);
}

Celeste::ir::inputreconstruction::Interpreter::Name::Name(NameReference* name_)
{
	names.insert(name_->GetResolvedName());
}

void Celeste::ir::inputreconstruction::Interpreter::Name::AddName(std::string name_)
{
	names.insert(name_);
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

		if (std::holds_alternative<AlgebraicValue>(currentElement->value.value().value))
		{
			std::cout << "Some algebraic value found\n";
			std::get<AlgebraicValue>(currentElement->value.value().value).Print();
		}
	}
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

Celeste::ir::inputreconstruction::Interpreter::Stack::~Stack()
{
}

Celeste::ir::inputreconstruction::Interpreter::Stack::Stack(Stack&& rhs) noexcept
	: interpreter(rhs.interpreter),
	  symbols(std::move(rhs.symbols)),
	  parent(rhs.parent),
	  nextDepthScope(std::move(rhs.nextDepthScope)),
	  currentScope(rhs.currentScope)
{
}

Celeste::ir::inputreconstruction::Interpreter::Stack*
Celeste::ir::inputreconstruction::Interpreter::Stack::OpenScope()
{
	nextDepthScope = std::make_unique<Stack>(interpreter);
	currentScope = nextDepthScope.value().get();
	currentScope->parent = this;
	(*std::rbegin(interpreter->stackOfOperationStacks)).currentScope = currentScope;

	return currentScope;
}

void Celeste::ir::inputreconstruction::Interpreter::Stack::CloseScope()
{
	// If we are the bottom scope that closes
	if (nextDepthScope == std::nullopt)
	{
		if (parent.has_value())
		{
			parent.value()->currentScope = parent.value()->currentScope;
			(*std::rbegin(interpreter->stackOfOperationStacks)).currentScope = parent.value();
			parent.value()->nextDepthScope = std::nullopt;
		}
	}
	else
	{
		nextDepthScope = std::nullopt;
		currentScope = this;
		(*std::rbegin(interpreter->stackOfOperationStacks)).currentScope = this;
	}
}

void Celeste::ir::inputreconstruction::Interpreter::Stack::AddVariable(VariableDeclaration* object)
{
	auto name = Name(object->GetName());
	auto type = interpreter->GetType(object->GetVariableType());
	auto value = interpreter->Evaluate(object, object->GetExpressions());
	auto newSymbol = std::make_unique<Symbol>(name, type, value);
	symbols.push_back(std::move(newSymbol));
}

void Celeste::ir::inputreconstruction::Interpreter::Stack::AddVariable(
	std::unique_ptr<Symbol> symbol)
{
	symbols.push_back(std::move(symbol));
}

void Celeste::ir::inputreconstruction::Interpreter::Stack::AddVariable(const SymbolMember& value)
{
	symbols.push_back(std::make_unique<Symbol>(value.name, value.type, value.value));
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
			 Celeste::ir::inputreconstruction::Interpreter::AlgebraicValue,
			 Celeste::ir::inputreconstruction::Interpreter::Value*>
Celeste::ir::inputreconstruction::Interpreter::ZeroValue(InputReconstructionObject* type)
{
	auto typeLookup = typeTable.typePointerMap.find(type);

	if (type == nullptr)
	{
		return int(0);
	}
	if (type->GetType() == inputreconstruction::Type::Integer ||
		typeLookup != typeTable.typePointerMap.end() && typeLookup->second.name == Name("int"))
	{
		return int(0);
	}
	if (type->GetType() == inputreconstruction::Type::Decimal ||
		typeLookup != typeTable.typePointerMap.end() && typeLookup->second.name == Name("double"))
	{
		return double(0);
	}
	if (type->GetType() == inputreconstruction::Type::Text ||
		typeLookup != typeTable.typePointerMap.end() && typeLookup->second.name == Name("text"))
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
	else if (type->GetType() == inputreconstruction::Type::Class)
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
				auto variableTypeConstruct = memberDecasted->GetVariableType();
				auto variableType = variableTypeConstruct->GetCoreType();
				if (!variableType.has_value())
				{
					throw std::logic_error("Could not lookup type in interpreter phase.");
				}

				auto memberName = Name(memberDecasted->GetName());
				auto typeIdLookup = typeTable.typePointerMap.find(variableType.value());
				if (typeIdLookup == typeTable.typePointerMap.end())
				{
					throw std::logic_error("Could not lookup type in interpreter phase.");
				}

				auto memberTypeId = typeIdLookup->second.type;
				auto newSymbolMember =
					SymbolMember(memberName, memberTypeId, Value(ZeroValue(variableType.value())));
				result.AddSymbolMember(newSymbolMember);
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

std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
Celeste::ir::inputreconstruction::Interpreter::EvaluateMemberFunctionOnValue(
	Value& value, inputreconstruction::Function* function, std::vector<Value*> functionArguments)
{
	auto stackLifetime = StackLifetime{this};

	// This implementation depends on Value list as function arguments
	// This assumption holds that the function arguments are fully resolved
	if (std::holds_alternative<int>(value.value))
	{
		if (function->GetFunctionName()->GetResolvedName() == "operator+")
		{
			if (functionArguments.size() == 1)
			{
				return std::get<int>(value.value) + std::get<int>(functionArguments[0]->value);
			}
			else
			{
				// Unsupported
				throw std::logic_error(
					"Tried utilizing non-existing Compiler Provided Member Function(operator+) for "
					"'int'");
			}
		}
		else if (function->GetFunctionName()->GetResolvedName() == "operator-")
		{
			if (functionArguments.size() == 1)
			{
				return std::get<int>(value.value) - std::get<int>(functionArguments[0]->value);
			}
			else
			{
				// Unsupported
				throw std::logic_error(
					"Tried utilizing non-existing Compiler Provided Member Function(operator-) for "
					"'int'");
			}
		}
		else if (function->GetFunctionName()->GetResolvedName() == "operator==")
		{
			if (functionArguments.size() == 1)
			{
				return std::get<int>(value.value) == std::get<int>(functionArguments[0]->value);
			}
			else
			{
				// Unsupported
				throw std::logic_error(
					"Tried utilizing non-existing Compiler Provided Member Function(operator==) "
					"for "
					"'int'");
			}
		}
		else if (function->GetFunctionName()->GetResolvedName() == "operator>=")
		{
			if (functionArguments.size() == 1)
			{
				return std::get<int>(value.value) >= std::get<int>(functionArguments[0]->value);
			}
			else
			{
				// Unsupported
				throw std::logic_error(
					"Tried utilizing non-existing Compiler Provided Member Function(operator>=) "
					"for "
					"'int'");
			}
		}
		else if (function->GetFunctionName()->GetResolvedName() == "operator<=")
		{
			if (functionArguments.size() == 1)
			{
				return std::get<int>(value.value) <= std::get<int>(functionArguments[0]->value);
			}
			else
			{
				// Unsupported
				throw std::logic_error(
					"Tried utilizing non-existing Compiler Provided Member Function(operator<=) "
					"for "
					"'int'");
			}
		}
		else if (function->GetFunctionName()->GetResolvedName() == "operator>")
		{
			if (functionArguments.size() == 1)
			{
				return std::get<int>(value.value) > std::get<int>(functionArguments[0]->value);
			}
			else
			{
				// Unsupported
				throw std::logic_error(
					"Tried utilizing non-existing Compiler Provided Member Function(operator>) "
					"for "
					"'int'");
			}
		}
		else if (function->GetFunctionName()->GetResolvedName() == "operator<")
		{
			if (functionArguments.size() == 1)
			{
				return std::get<int>(value.value) < std::get<int>(functionArguments[0]->value);
			}
			else
			{
				// Unsupported
				throw std::logic_error(
					"Tried utilizing non-existing Compiler Provided Member Function(operator<) "
					"for "
					"'int'");
			}
		}
		else if (function->GetFunctionName()->GetResolvedName() == "operator!=")
		{
			if (functionArguments.size() == 1)
			{
				std::get<int>(value.value) =
					std::get<int>(value.value) != std::get<int>(functionArguments[0]->value);
			}
			else
			{
				// Unsupported
				throw std::logic_error(
					"Tried utilizing non-existing Compiler Provided Member Function(operator!=) "
					"for "
					"'int'");
			}
		}
		else if (function->GetFunctionName()->GetResolvedName() == "operator*")
		{
			if (functionArguments.size() == 1)
			{
				return std::get<int>(value.value) * std::get<int>(functionArguments[0]->value);
			}
			else
			{
				// Unsupported
				throw std::logic_error(
					"Tried utilizing non-existing Compiler Provided Member Function(operator*) for "
					"'int'");
			}
		}
		else if (function->GetFunctionName()->GetResolvedName() == "operator\\")
		{
			if (functionArguments.size() == 1)
			{
				return std::get<int>(value.value) / std::get<int>(functionArguments[0]->value);
			}
			else
			{
				// Unsupported
				throw std::logic_error(
					"Tried utilizing non-existing Compiler Provided Member Function(operator\\) "
					"for "
					"'int'");
			}
		}
		else
		{
			// Unsupported
			throw std::logic_error(
				"Tried utilizing non-existing Compiler Provided Member Function for "
				"'int'");
		}

		return std::get<int>(value.value);
	}
	else if (std::holds_alternative<double>(value.value))
	{
		if (function->GetFunctionName()->GetResolvedName() == "operator+")
		{
			if (functionArguments.size() == 1)
			{
				std::get<double>(value.value) += std::get<double>(functionArguments[0]->value);
			}
			else
			{
				// Unsupported
				throw std::logic_error(
					"Tried utilizing non-existing Compiler Provided Member Function(operator+) for "
					"'double'");
			}
		}
		else if (function->GetFunctionName()->GetResolvedName() == "operator-")
		{
			if (functionArguments.size() == 1)
			{
				std::get<double>(value.value) -= std::get<double>(functionArguments[0]->value);
			}
			else
			{
				// Unsupported
				throw std::logic_error(
					"Tried utilizing non-existing Compiler Provided Member Function(operator-) for "
					"'double'");
			}
		}
		else if (function->GetFunctionName()->GetResolvedName() == "operator==")
		{
			if (functionArguments.size() == 1)
			{
				std::get<double>(value.value) =
					std::get<double>(value.value) == std::get<double>(functionArguments[0]->value);
			}
			else
			{
				// Unsupported
				throw std::logic_error(
					"Tried utilizing non-existing Compiler Provided Member Function(operator==) "
					"for "
					"'double'");
			}
		}
		else if (function->GetFunctionName()->GetResolvedName() == "operator!=")
		{
			if (functionArguments.size() == 1)
			{
				std::get<double>(value.value) =
					std::get<double>(value.value) != std::get<double>(functionArguments[0]->value);
			}
			else
			{
				// Unsupported
				throw std::logic_error(
					"Tried utilizing non-existing Compiler Provided Member Function(operator!=) "
					"for "
					"'double'");
			}
		}
		else if (function->GetFunctionName()->GetResolvedName() == "operator*")
		{
			if (functionArguments.size() == 1)
			{
				std::get<double>(value.value) *= std::get<double>(functionArguments[0]->value);
			}
			else
			{
				// Unsupported
				throw std::logic_error(
					"Tried utilizing non-existing Compiler Provided Member Function(operator*) for "
					"'double'");
			}
		}
		else if (function->GetFunctionName()->GetResolvedName() == "operator\\")
		{
			if (functionArguments.size() == 1)
			{
				std::get<double>(value.value) /= std::get<double>(functionArguments[0]->value);
			}
			else
			{
				// Unsupported
				throw std::logic_error(
					"Tried utilizing non-existing Compiler Provided Member Function(operator\\) "
					"for "
					"'double'");
			}
		}
		else
		{
			// Unsupported
			throw std::logic_error(
				"Tried utilizing non-existing Compiler Provided Member Function for "
				"'double'");
		}

		return std::get<double>(value.value);
	}
	else if (std::holds_alternative<std::string>(value.value))
	{
		if (function->GetFunctionName()->GetResolvedName() == "operator+")
		{
			if (functionArguments.size() == 1)
			{
				return std::get<std::string>(value.value) +
					   std::get<std::string>(functionArguments[0]->value);
			}
			else
			{
				// Unsupported
				throw std::logic_error(
					"Tried utilizing non-existing Compiler Provided Member Function(operator+) for "
					"'text'");
			}
		}
		else if (function->GetFunctionName()->GetResolvedName() == "operator==")
		{
			if (functionArguments.size() == 1)
			{
				return std::get<std::string>(value.value) ==
					   std::get<std::string>(functionArguments[0]->value);
			}
			else
			{
				// Unsupported
				throw std::logic_error(
					"Tried utilizing non-existing Compiler Provided Member Function(operator==) "
					"for "
					"'string'");
			}
		}
		else if (function->GetFunctionName()->GetResolvedName() == "operator!=")
		{
			if (functionArguments.size() == 1)
			{
				return std::get<std::string>(value.value) !=
					   std::get<std::string>(functionArguments[0]->value);
			}
			else
			{
				// Unsupported
				throw std::logic_error(
					"Tried utilizing non-existing Compiler Provided Member Function(operator!=) "
					"for "
					"'string'");
			}
		}
		else if (function->GetFunctionName()->GetResolvedName() == "pop")
		{
			if (functionArguments.empty())
			{
				std::get<std::string>(value.value).pop_back();
			}
			else if (functionArguments.size() == 1 &&
					 std::holds_alternative<int>(functionArguments[0]->value))
			{
				for (auto i = 0; i < std::get<int>(functionArguments[0]->value); i++)
				{
					std::get<std::string>(value.value).pop_back();
				}
			}
			else
			{
				// Unsupported
				throw std::logic_error(
					"Tried utilizing non-existing Compiler Provided Member Function(operator+) for "
					"'text'");
			}
		}
		else
		{
			// Unsupported
			throw std::logic_error(
				"Tried utilizing non-existing Compiler Provided Member Function for "
				"'text'");
		}

		return std::get<std::string>(value.value);
	}
	else if (std::holds_alternative<AlgebraicValue>(value.value))
	{
		auto resultingValue =
			EvaluateSomeFunction(function, functionArguments, stackLifetime, &value);
		return resultingValue;
	}
	return std::nullopt;
}

std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
Celeste::ir::inputreconstruction::Interpreter::EvaluateConstructor(
	inputreconstruction::Constructor* function, std::vector<Value*> functionArguments)
{
	auto stackLifetime = StackLifetime{this};

	auto value = Value(ZeroValue(
		typeTable.typeIdMap.find(typeTable.GetTypeFromConstructor(function))->second.irType));
	EvaluateSomeFunction(function, functionArguments, stackLifetime, &value);

	return value;
}

std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
Celeste::ir::inputreconstruction::Interpreter::EvaluateFunction(
	inputreconstruction::Function* function, std::vector<Value*> functionArguments)
{
	auto stackLifetime = StackLifetime{this};

	return EvaluateSomeFunction(function, functionArguments, stackLifetime);
}

std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
Celeste::ir::inputreconstruction::Interpreter::EvaluateSomeFunction(
	inputreconstruction::Function* function, std::vector<Value*> functionArguments,
	StackLifetime& stackLifetime, std::optional<Value*> valueReference)
{
	auto InitializeStackTop = [&]() {
		auto& functionArgumentsBase = function->GetFunctionArguments();
		for (auto i = 0; i < functionArgumentsBase.size(); i++)
		{
			auto& currentFunctionArgumentBase = functionArgumentsBase[i];
			auto currentFunctionArgumentValue = functionArguments[i];

			auto newSymbol =
				std::make_unique<Symbol>(currentFunctionArgumentBase->GetName(),
										 GetType(currentFunctionArgumentBase->GetArgumentType()));
			newSymbol->value = *currentFunctionArgumentValue;
			stackLifetime.Stack().AddVariable(std::move(newSymbol));
		}
	};

	InitializeStackTop();

	auto block = function->GetBlock();
	if (block.empty())
	{
		// Return default value for return type
		return std::nullopt;
	}

	struct Block
	{
		enum class BlockType
		{
			FunctionBlock,
			ForBlock,
			ForEachBlock,
			WhileBlock,
			ConditionalBlock,
			ScopeBlock, // Essentially a block with specialized depth
		};

		BlockType type;
		std::size_t index = 0;
		InputReconstructionObject* objectThatIntroducedThisBlock = nullptr;
		std::vector<InputReconstructionObject*> statements;

		std::size_t iterationCounter = 0;

		Block(BlockType type_, InputReconstructionObject* blockCreatingObject_) : type(type_)
		{
			switch (blockCreatingObject_->GetType())
			{
			case inputreconstruction::Type::Function: {
				auto function = static_cast<inputreconstruction::Function*>(blockCreatingObject_);
				statements = function->GetBlock();
				break;
			}
			case inputreconstruction::Type::Constructor: {
				auto constructor =
					static_cast<inputreconstruction::Constructor*>(blockCreatingObject_);
				statements = constructor->GetScope();
				break;
			}
			case inputreconstruction::Type::ConditionalFunction: {
				auto conditionalFunction =
					static_cast<inputreconstruction::ConditionalFunction*>(blockCreatingObject_);
				statements = conditionalFunction->GetScope();
				break;
			}
			case inputreconstruction::Type::NameFunction: {
				auto nameFunction =
					static_cast<inputreconstruction::NameFunction*>(blockCreatingObject_);
				statements = nameFunction->GetScope();
				break;
			}
			case inputreconstruction::Type::CodeFunction: {
				auto codeFunction =
					static_cast<inputreconstruction::CodeFunction*>(blockCreatingObject_);
				statements = codeFunction->GetScope();
				break;
			}
			case inputreconstruction::Type::ForEach: {
				auto forEach = static_cast<inputreconstruction::ForEach*>(blockCreatingObject_);
				statements = forEach->GetScope();
				break;
			}
			case inputreconstruction::Type::ForIteration: {
				auto forIteration =
					static_cast<inputreconstruction::ForIteration*>(blockCreatingObject_);
				statements = forIteration->GetScope();
				break;
			}
			case inputreconstruction::Type::WhileIteration: {
				break;
			}
			case inputreconstruction::Type::If: {
				auto ifObject = static_cast<inputreconstruction::If*>(blockCreatingObject_);
				statements = ifObject->GetScope();
				break;
			}
			case inputreconstruction::Type::ElseIf: {
				auto elseIfObject = static_cast<inputreconstruction::ElseIf*>(blockCreatingObject_);
				statements = elseIfObject->GetScope();
				break;
			}
			case inputreconstruction::Type::Else: {
				auto elseObject = static_cast<inputreconstruction::Else*>(blockCreatingObject_);
				statements = elseObject->GetScope();
				break;
			}
			}
		}

		bool StartConditionSatisfied(Interpreter* interpreter)
		{
			switch (type)
			{
			case BlockType::ForBlock: {
				auto forIteration =
					static_cast<inputreconstruction::ForIteration*>(objectThatIntroducedThisBlock);
				auto value = interpreter->Evaluate(forIteration->GetExpression());
				auto integerValue = std::get<int>(value.value);
				if (iterationCounter < integerValue)
				{
					return true;
				}

				return false;
			}
			case BlockType::ForEachBlock: {
				break;
			}
			case BlockType::WhileBlock: {
				// auto whileBlock = ;
				// return Evaluate();
				return false;
			}
			case BlockType::ConditionalBlock:
			case BlockType::ScopeBlock:
			case BlockType::FunctionBlock: {
				return true;
			}
			}

			return false;
		}

		bool EndConditionSatisfied(Interpreter* interpreter)
		{
		}

		void StartAction(Interpreter* interpreter)
		{
		}

		void EndAction(Interpreter* interpreter)
		{
		}

		InputReconstructionObject* GetCurrentStatement()
		{
			return statements[index];
		}

		bool IsDone()
		{
			// If the index is >= to the statements
			// We have processed each statement
			//
			// Note: There are more conditions that apply to derive
			// If a block process is done
			//
			// If there are no statements, the block is seemed to be unevaluatable or useless
			return AllStatementsProcessed() || statements.empty();
		}

		void CurrentStatementIsProcessed()
		{
			index += 1;
		}

		bool AllStatementsProcessed()
		{
			return index >= statements.size();
		}
	};

	std::vector<Block> blocks;
	blocks.emplace_back(Block::BlockType::FunctionBlock, function);

	auto currentBlock = [&]() { return std::rbegin(blocks); };
	auto currentStatement = [&]() { return currentBlock()->GetCurrentStatement(); };
	while (!blocks.empty())
	{
		auto current = currentStatement();
		currentBlock()->CurrentStatementIsProcessed();
		auto assignToSymbol =
			[&](std::optional<
					std::variant<Celeste::ir::inputreconstruction::Interpreter::Symbol*,
								 Celeste::ir::inputreconstruction::Interpreter::SymbolMember*,
								 Celeste::ir::inputreconstruction::Interpreter::SymbolMember,
								 Celeste::ir::inputreconstruction::Interpreter::Value>>
					symbol,
				Value rhs) {
				if (!symbol.has_value())
				{
					return;
				}

				auto symbolValue = symbol.value();
				if (std::holds_alternative<Symbol*>(symbolValue))
				{
					auto symbolDeref = std::get<Symbol*>(symbolValue);
					symbolDeref->value = rhs;
				}
				else if (std::holds_alternative<SymbolMember*>(symbolValue))
				{
					auto symbolDeref = std::get<SymbolMember*>(symbolValue);
					symbolDeref->value = rhs;
				}
				else
				{
					// Assignment is useless, so skipping it is okay
				}
			};
		switch (current->GetType())
		{
		case inputreconstruction::Type::Return: {
			auto returnObject = static_cast<inputreconstruction::Return*>(current);
			return Evaluate(returnObject->GetExpression(), valueReference);
		}
		case inputreconstruction::Type::VariableDeclaration: {
			auto variableDeclaration =
				static_cast<inputreconstruction::VariableDeclaration*>(current);
			stackLifetime.Stack().currentScope->AddVariable(variableDeclaration);
			break;
		}
		case inputreconstruction::Type::Assignment: {
			auto assignment = static_cast<inputreconstruction::Assignment*>(current);
			auto& lhs = assignment->GetLhs();
			auto symbol = GetSymbolMember(lhs.get(), valueReference);
			if (!symbol.has_value())
			{
				// Error
				std::cout << "While interpreting, could not resolve variable\n";
				break;
			}
			auto symbolValue = symbol.value();
			auto rhsValue = Evaluate(assignment->GetRhs(), valueReference);

			// We assume that right hand side is assignable to the left hand side
			assignToSymbol(symbol, rhsValue);
			break;
		}
		case inputreconstruction::Type::SymbolIncrease: {
			auto symbolIncrease = static_cast<inputreconstruction::SymbolIncrease*>(current);
			break;
		}
		case inputreconstruction::Type::SymbolDecrease: {
			auto symbolDecrease = static_cast<inputreconstruction::SymbolDecrease*>(current);
			break;
		}
		case inputreconstruction::Type::ForEach: {
			auto forEach = static_cast<inputreconstruction::ForEach*>(current);
			stackLifetime.Stack().currentScope->OpenScope();
			blocks.emplace_back(Block::BlockType::ForEachBlock, forEach);
			break;
		}
		case inputreconstruction::Type::ForIteration: {
			auto forIteration = static_cast<inputreconstruction::ForIteration*>(current);
			stackLifetime.Stack().currentScope->OpenScope();
			blocks.emplace_back(Block::BlockType::ForBlock, forIteration);
			break;
		}
		case inputreconstruction::Type::WhileIteration: {
			break;
		}
		case inputreconstruction::Type::If: {
			auto ifObject = static_cast<inputreconstruction::If*>(current);
			if (Evaluate(ifObject->GetCondition(), valueReference) == true)
			{
				stackLifetime.Stack().currentScope->OpenScope();

				// As we need to skip all other branches
				while (currentStatement() != nullptr &&
					   (currentStatement()->GetType() == inputreconstruction::Type::If ||
						currentStatement()->GetType() == inputreconstruction::Type::ElseIf ||
						currentStatement()->GetType() == inputreconstruction::Type::Else))
				{
					currentBlock()->CurrentStatementIsProcessed();
				}
				blocks.emplace_back(Block::BlockType::ConditionalBlock, ifObject);
			}
			break;
		}
		case inputreconstruction::Type::ElseIf: {
			auto elseIfObject = static_cast<inputreconstruction::ElseIf*>(current);
			if (Evaluate(elseIfObject->GetCondition(), valueReference) == true)
			{
				stackLifetime.Stack().currentScope->OpenScope();
				// As we need to skip all other branches
				while (currentStatement() != nullptr &&
					   (currentStatement()->GetType() == inputreconstruction::Type::If ||
						currentStatement()->GetType() == inputreconstruction::Type::ElseIf ||
						currentStatement()->GetType() == inputreconstruction::Type::Else))
				{
					currentBlock()->CurrentStatementIsProcessed();
				}
				blocks.emplace_back(Block::BlockType::ConditionalBlock, elseIfObject);
			}
			break;
		}
		case inputreconstruction::Type::Else: {
			auto elseObject = static_cast<inputreconstruction::Else*>(current);
			stackLifetime.Stack().currentScope->OpenScope();
			blocks.emplace_back(Block::BlockType::ConditionalBlock, elseObject);
			break;
		}
		default: {
			std::cout << "Not implemented or unknown statement, skipping for now\n";
			break;
		}
		}

		if (!currentBlock()->AllStatementsProcessed())
		{
			// If not all statements are processed, continue
			continue;
		}

		// When this block exits, and the blocks above it were dependent on the fact this block
		// exits, then exit all dependent blocks
		while (!blocks.empty())
		{
			if (currentBlock()->IsDone())
			{
				// Initiate ending logic
				// Prepare starting logic
				// If it does not need to restart, it exits definitely.
				// Otherwise, we stop the procession.

				bool exit = true;

				if (exit)
				{
					blocks.pop_back();
					stackLifetime.Stack().currentScope->CloseScope();
				}
				else
				{
					break;
				}
			}
			else
			{
				break;
			}
		}
	}

	return std::nullopt;
}

std::vector<Celeste::ir::inputreconstruction::Interpreter::Value>
Celeste::ir::inputreconstruction::Interpreter::GetValueListFromExpressionList(
	std::vector<std::unique_ptr<Expression>>& expressionList, std::optional<Value*> valueReference)
{
	std::vector<Value> functionArguments;
	for (auto& symbolAccessArg : expressionList)
	{
		auto newValue = Evaluate(symbolAccessArg, valueReference);
		functionArguments.push_back(newValue);
	}
	return functionArguments;
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
		if (rhsType == lhsType.value() ||
			(rhsType->GetType() == inputreconstruction::Type::TypeConstruct &&
			 static_cast<TypeConstruct*>(rhsType)->Equal(lhsType.value())))
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

		throw std::logic_error("Could not resolve single expression, critical error.");
	}

	if (MatchingConstructor(lhsType.value(), expressions))
	{
	}
	else if (MatchingImplicitlyConstructor(lhsType.value(), expressions))
	{
	}

	// We got issue
	std::cout << "Something went wrong\n";
	throw std::logic_error("Kill this thing");
}

std::optional<Celeste::ir::inputreconstruction::Interpreter::Symbol*>
Celeste::ir::inputreconstruction::Interpreter::GetGlobal(
	Celeste::ir::inputreconstruction::VariableDeclaration* variableDeclaration)
{
	auto foundGlobal = globalTable.GetGlobal(variableDeclaration->GetFile(), variableDeclaration);
	if (foundGlobal.has_value())
	{
		return foundGlobal.value();
	}
	return std::nullopt;
}

std::optional<std::variant<Celeste::ir::inputreconstruction::Interpreter::Symbol*,
						   Celeste::ir::inputreconstruction::Interpreter::SymbolMember*,
						   Celeste::ir::inputreconstruction::Interpreter::SymbolMember,
						   Celeste::ir::inputreconstruction::Interpreter::Value>>
Celeste::ir::inputreconstruction::Interpreter::GetSymbolMember(
	VariableDeclaration* variableDeclaration, std::optional<Value*> valueReference)
{
	auto getVariableIfPartOfThis = [&]() {
		std::optional<std::variant<Symbol*, SymbolMember*, SymbolMember, Value>> result;
		auto startVariableName = variableDeclaration->GetName()->GetSymbolName();
		if (valueReference.has_value())
		{
			if (std::holds_alternative<AlgebraicValue>(valueReference.value()->value))
			{
				auto& algebraicValue = std::get<AlgebraicValue>(valueReference.value()->value);
				for (auto& symbolMember : algebraicValue.symbolMembers)
				{
					if (symbolMember.name == startVariableName)
					{
						result = &symbolMember;
						return result;
					}
				}
			}
		}

		return result;
	};

	auto thisAnalysisResult = getVariableIfPartOfThis();
	if (thisAnalysisResult.has_value())
	{
		return thisAnalysisResult.value();
	}

	if (!stackOfOperationStacks.empty())
	{
		auto& currentStack = *std::rbegin(stackOfOperationStacks);
		auto result = currentStack.currentScope->GetSymbolMember(variableDeclaration->GetName());

		if (result.has_value())
		{
			return result.value();
		}
	}

	return GetGlobal(variableDeclaration);
}

std::optional<std::variant<Celeste::ir::inputreconstruction::Interpreter::Symbol*,
						   Celeste::ir::inputreconstruction::Interpreter::SymbolMember*,
						   Celeste::ir::inputreconstruction::Interpreter::SymbolMember,
						   Celeste::ir::inputreconstruction::Interpreter::Value>>
Celeste::ir::inputreconstruction::Interpreter::GetSymbolMember(
	inputreconstruction::FunctionArgument* functionArgument, std::optional<Value*> valueReference)
{
	auto getVariableIfPartOfThis = [&]() {
		std::optional<std::variant<Symbol*, SymbolMember*, SymbolMember, Value>> result;
		auto startVariableName = functionArgument->GetName();
		if (valueReference.has_value())
		{
			if (std::holds_alternative<AlgebraicValue>(valueReference.value()->value))
			{
				auto& algebraicValue = std::get<AlgebraicValue>(valueReference.value()->value);
				for (auto& symbolMember : algebraicValue.symbolMembers)
				{
					if (symbolMember.name == startVariableName)
					{
						result = &symbolMember;
						return result;
					}
				}
			}
		}

		return result;
	};

	if (!stackOfOperationStacks.empty())
	{
		auto& currentStack = *std::rbegin(stackOfOperationStacks);
		auto result = currentStack.currentScope->GetSymbolMember(functionArgument->GetName());

		if (result.has_value())
		{
			return result.value();
		}
	}
}

std::optional<Celeste::ir::inputreconstruction::Interpreter::Symbol*>
Celeste::ir::inputreconstruction::Interpreter::GetSymbolMember(const std::string& symbolName,
															   std::optional<Value*> valueReference)
{
	if (!stackOfOperationStacks.empty())
	{
		auto& currentStack = *std::rbegin(stackOfOperationStacks);
		auto result = currentStack.currentScope->GetSymbolMember(symbolName);

		if (result.has_value())
		{
			return result.value();
		}
	}

	// Note with only a symbol name we can only search the stack
	return std::nullopt;
}

std::optional<std::variant<Celeste::ir::inputreconstruction::Interpreter::Symbol*,
						   Celeste::ir::inputreconstruction::Interpreter::SymbolMember*,
						   Celeste::ir::inputreconstruction::Interpreter::SymbolMember,
						   Celeste::ir::inputreconstruction::Interpreter::Value>>
Celeste::ir::inputreconstruction::Interpreter::GetSymbolMember(NameReference* lhs,
															   std::optional<Value*> valueReference)
{
	auto getFunctionArguments = [&](std::vector<std::unique_ptr<Expression>>& expressionList) {
		std::vector<Value> functionArguments = GetValueListFromExpressionList(expressionList);
		std::vector<Value*> functionArgumentsPtr;

		for (auto& functionArgument : functionArguments)
		{
			functionArgumentsPtr.push_back(&functionArgument);
		}

		return std::move(std::pair<std::vector<Value>, std::vector<Value*>>(
			std::move(functionArguments), std::move(functionArgumentsPtr)));
	};

	auto getVariableIfPartOfThis = [&]() {
		std::optional<std::variant<Symbol*, SymbolMember*, SymbolMember, Value>> result;
		auto startVariableName = lhs->GetSymbolName();
		if (valueReference.has_value())
		{
			if (std::holds_alternative<AlgebraicValue>(valueReference.value()->value))
			{
				auto& algebraicValue = std::get<AlgebraicValue>(valueReference.value()->value);
				for (auto& symbolMember : algebraicValue.symbolMembers)
				{
					if (symbolMember.name == startVariableName)
					{
						result = &symbolMember;
						return result;
					}
				}
			}
		}

		return result;
	};

	auto resolvedIr = lhs->GetFinalLinkedIr();
	std::optional<std::variant<Symbol*, SymbolMember*, SymbolMember, Value>> valInitial;
	std::variant<Symbol*, SymbolMember*, SymbolMember, Value> val;
	InputReconstructionObject* resolvedIrValue;
	if (!resolvedIr.has_value())
	{
		auto tmp = getVariableIfPartOfThis();
		if (!tmp.has_value())
		{
			return std::nullopt;
		}

		valInitial = tmp;
	}
	else
	{
		resolvedIrValue = resolvedIr.value();
	}

	if (valInitial.has_value())
	{
		// Skip first entry check
		val = valInitial.value();
	}
	else if (resolvedIrValue->GetType() == inputreconstruction::Type::Function)
	{
		auto resolvedIrValueFunction = static_cast<inputreconstruction::Function*>(resolvedIrValue);
		auto globalFunction = functionTable.GetFunction(resolvedIrValueFunction);
		if (!globalFunction.has_value())
		{
			// Error
			std::cout << "Could not find global function\n";
			return std::nullopt;
		}

		auto [functionArguments, functionArgumentsPtr] = getFunctionArguments(
			lhs->GetSymbolAccessesIncludingHidden()[0]->GetFunctionArguments());

		std::optional<Celeste::ir::inputreconstruction::Interpreter::Value> newValue;
		if (valueReference.has_value())
		{
			newValue = EvaluateMemberFunctionOnValue(
				*valueReference.value(),
				static_cast<inputreconstruction::Function*>(globalFunction.value()->irObject),
				functionArgumentsPtr);
		}
		else
		{
			newValue = EvaluateFunction(
				static_cast<inputreconstruction::Function*>(globalFunction.value()->irObject),
				functionArgumentsPtr);
		}
		if (!newValue.has_value())
		{
			return std::nullopt;
		}

		val = newValue.value();
	}
	else if (resolvedIrValue->GetType() == inputreconstruction::Type::Constructor)
	{
		auto resolvedIrValueFunction =
			static_cast<inputreconstruction::Constructor*>(resolvedIrValue);

		auto [functionArguments, functionArgumentsPtr] = getFunctionArguments(
			lhs->GetSymbolAccessesIncludingHidden()[0]->GetFunctionArguments());
		auto newValue = EvaluateConstructor(resolvedIrValueFunction, functionArgumentsPtr);
		if (!newValue.has_value())
		{
			return std::nullopt;
		}

		val = newValue.value();
	}
	else if (resolvedIrValue->GetType() == inputreconstruction::Type::FunctionArgument)
	{
		auto startFunctionArgument =
			static_cast<inputreconstruction::FunctionArgument*>(resolvedIrValue);
		auto tmp = GetSymbolMember(startFunctionArgument);
		if (!tmp.has_value())
		{
			return std::nullopt;
		}

		val = tmp.value();
	}
	else if (resolvedIrValue->GetType() == inputreconstruction::Type::VariableDeclaration)
	{
		auto getStartVariable = [&]() {
			std::optional<std::variant<Symbol*, SymbolMember*, SymbolMember, Value>> result;
			auto startVariableDeclaration =
				static_cast<inputreconstruction::VariableDeclaration*>(resolvedIrValue);
			if (valueReference.has_value())
			{
				if (std::holds_alternative<AlgebraicValue>(valueReference.value()->value))
				{
					auto& algebraicValue = std::get<AlgebraicValue>(valueReference.value()->value);
					for (auto& symbolMember : algebraicValue.symbolMembers)
					{
						if (symbolMember.name == startVariableDeclaration->GetName())
						{
							result = &symbolMember;
							return result;
						}
					}
				}
			}

			auto symbol = GetSymbolMember(startVariableDeclaration);
			if (!symbol.has_value())
			{
				result = std::nullopt;
				return result;
			}

			auto symbolValue = symbol.value();
			if (lhs->GetSymbolAccesses().empty())
			{
				result = symbolValue;
				return result;
			}

			result = symbolValue;
			return result;
		};
		auto result = getStartVariable();
		if (!result.has_value())
		{
			return std::nullopt;
		}

		if (std::holds_alternative<Symbol*>(result.value()))
		{
			val = std::get<Symbol*>(result.value());
		}
		else if (std::holds_alternative<SymbolMember*>(result.value()))
		{
			val = std::get<SymbolMember*>(result.value());
		}
		else
		{
			return std::nullopt;
		}
	}
	else if (resolvedIrValue->GetType() == inputreconstruction::Type::CodeFunction)
	{
		return std::nullopt;
	}
	else if (resolvedIrValue->GetType() == inputreconstruction::Type::NameFunction)
	{
		return std::nullopt;
	}

	auto processSymbolAccess = [&](SymbolAccess* symbolAccess) {
		switch (symbolAccess->GetSymbolAccessType())
		{
		case inputreconstruction::SymbolAccessType::IndexAccess: {
			// Unsupported
			std::cout << "Tried index accessing which is unsupported\n";
			return std::nullopt;
			break;
		}
		case inputreconstruction::SymbolAccessType::FunctionAccess: {
			// std::cout << "Tried function accessing, not supported in this context\n";
			return std::nullopt;
			break;
		}
		case inputreconstruction::SymbolAccessType::AutoDeduceArray: {
			std::cout << "Auto deduce array not supported in this context\n";
			return std::nullopt;
			break;
		}
		case inputreconstruction::SymbolAccessType::AnonymousAccess: {
			// Anonymous Access can either be done on arrays or algebraic types.

			if (std::holds_alternative<Symbol*>(val))
			{
				auto symbolDeref = std::get<Symbol*>(val);
				if (std::holds_alternative<AlgebraicValue>(symbolDeref->value.value().value))
				{
					auto& algebraicValue =
						std::get<AlgebraicValue>(symbolDeref->value.value().value);
					if (symbolAccess->GetAnonymousIndex() < algebraicValue.symbolMembers.size())
					{
						val = &algebraicValue.symbolMembers[symbolAccess->GetAnonymousIndex()];
					}
					else
					{
						return std::nullopt;
					}
				}
				else
				{
					// Unsupported, as it is not valid in this context
					return std::nullopt;
				}
			}
			else if (std::holds_alternative<SymbolMember*>(val))
			{
				auto symbolDeref = std::get<SymbolMember*>(val);
				if (std::holds_alternative<AlgebraicValue>(symbolDeref->value.value))
				{
					auto& algebraicValue = std::get<AlgebraicValue>(symbolDeref->value.value);
					if (symbolAccess->GetAnonymousIndex() < algebraicValue.symbolMembers.size())
					{
						val = &algebraicValue.symbolMembers[symbolAccess->GetAnonymousIndex()];
					}
					else
					{
						return std::nullopt;
					}
				}
				else
				{
					// Unsupported, as it is not valid in this context
					return std::nullopt;
				}
			}
			else if (std::holds_alternative<SymbolMember>(val))
			{
				auto symbolDeref = std::get<SymbolMember>(val);
				if (std::holds_alternative<AlgebraicValue>(symbolDeref.value.value))
				{
					auto& algebraicValue = std::get<AlgebraicValue>(symbolDeref.value.value);
					if (symbolAccess->GetAnonymousIndex() < algebraicValue.symbolMembers.size())
					{
						val = algebraicValue.symbolMembers[symbolAccess->GetAnonymousIndex()];
					}
					else
					{
						return std::nullopt;
					}
				}
				else
				{
					// Unsupported, as it is not valid in this context
					return std::nullopt;
				}
			}
			else if (std::holds_alternative<Value>(val))
			{
				auto symbolDeref = std::get<Value>(val);

				if (std::holds_alternative<AlgebraicValue>(symbolDeref.value))
				{
					if (symbolAccess->GetAnonymousIndex() <
						std::get<AlgebraicValue>(symbolDeref.value).symbolMembers.size())
					{
						val = std::get<AlgebraicValue>(symbolDeref.value)
								  .symbolMembers[symbolAccess->GetAnonymousIndex()];
					}
					else
					{
						return std::nullopt;
					}
				}
				else
				{
					// Unsupported as other types do not support anonymous accessing.
					return std::nullopt;
				}
			}
			else
			{
				// Unsupported, Error
				return std::nullopt;
			}
			break;
		}
		}
	};
	auto processSymbolAccesses = [&](std::vector<SymbolAccess*> symbolAccesses) {
		for (auto symbolAccess : symbolAccesses)
		{
			processSymbolAccess(symbolAccess);
		}
	};

	processSymbolAccesses(lhs->GetSymbolAccesses());

	auto currentNextNameResolve = lhs->GetNameSecondaryReference();
	while (currentNextNameResolve.has_value())
	{
		// Continue Resolve
		auto resolvedIr = currentNextNameResolve.value()->GetFinalLinkedIr();
		if (!resolvedIr.has_value())
		{
			// We can stop as we got an error
			return std::nullopt;
		}
		auto resolvedIrValue = resolvedIr.value();

		if (resolvedIrValue->GetType() == inputreconstruction::Type::VariableDeclaration)
		{
			auto resolvedIrValueName =
				static_cast<inputreconstruction::VariableDeclaration*>(resolvedIrValue)
					->GetName()
					->GetResolvedName();
			if (std::holds_alternative<Symbol*>(val))
			{
				auto symbolDeref = std::get<Symbol*>(val);
				auto& valVariant = symbolDeref->value.value().value;
				if (std::holds_alternative<AlgebraicValue>(valVariant))
				{
					auto& valDeref = std::get<AlgebraicValue>(valVariant);
					auto tmp = valDeref.GetSymbol(resolvedIrValueName);
					if (!tmp.has_value())
					{
						return std::nullopt;
					}
					else
					{
						val = tmp.value();
					}
				}
				else
				{
					// Error, Unsupported
					return std::nullopt;
				}
			}
			else if (std::holds_alternative<SymbolMember*>(val))
			{
				auto symbolDeref = std::get<SymbolMember*>(val);
				auto& valVariant = symbolDeref->value.value;
				if (std::holds_alternative<AlgebraicValue>(valVariant))
				{
					auto& valDeref = std::get<AlgebraicValue>(valVariant);
					val = valDeref.GetSymbol(resolvedIrValueName).value();
				}
				else
				{
					// Error, Unsupported
					return std::nullopt;
				}
			}
			else if (std::holds_alternative<SymbolMember>(val))
			{
				auto symbolDeref = std::get<SymbolMember>(val);
				auto& valVariant = symbolDeref.value.value;
				if (std::holds_alternative<AlgebraicValue>(valVariant))
				{
					auto& valDeref = std::get<AlgebraicValue>(valVariant);
					val = *valDeref.GetSymbol(resolvedIrValueName).value();
				}
				else
				{
					// Error, Unsupported
					return std::nullopt;
				}
			}
			else if (std::holds_alternative<Value>(val))
			{
				auto symbolDeref = std::get<Value>(val);
				if (std::holds_alternative<AlgebraicValue>(symbolDeref.value))
				{
					val = *std::get<AlgebraicValue>(symbolDeref.value)
							   .GetSymbol(resolvedIrValueName)
							   .value();
				}
				else
				{
					// Member Field accessing is only supported for algebraic types.
					return std::nullopt;
				}
			}
			else
			{
				// Error
				return std::nullopt;
			}
		}
		else if (resolvedIrValue->GetType() == inputreconstruction::Type::Function)
		{
			auto resolvedIrValueFunction =
				static_cast<inputreconstruction::Function*>(resolvedIrValue);
			if (std::holds_alternative<Symbol*>(val))
			{
				auto valDeref = std::get<Symbol*>(val);
				auto [functionArguments, functionArgumentsPtr] =
					getFunctionArguments(currentNextNameResolve.value()
											 ->GetSymbolAccessesIncludingHidden()[0]
											 ->GetFunctionArguments());

				if (!valDeref->value.has_value())
				{
					// Error
					throw std::logic_error(
						"Variable was not initialized while this was a requirement at the given "
						"context.");
				}
				auto valDerefValue = valDeref->value.value();
				auto memberFunction =
					functionTable.GetFunction(resolvedIrValueFunction, valDeref->type);
				if (!memberFunction.has_value())
				{
					throw std::logic_error("Referenced Function does not exists.");
				}
				auto memberFunctionValue = memberFunction.value();
				auto memberFunctionDeref =
					static_cast<inputreconstruction::Function*>(memberFunctionValue->irObject);
				auto newValue = EvaluateMemberFunctionOnValue(valDerefValue, memberFunctionDeref,
															  functionArgumentsPtr);
				if (!newValue.has_value())
				{
					return std::nullopt;
				}

				val = newValue.value();
			}
			else if (std::holds_alternative<SymbolMember*>(val))
			{
				auto valDeref = std::get<SymbolMember*>(val);
				auto [functionArguments, functionArgumentsPtr] =
					getFunctionArguments(currentNextNameResolve.value()
											 ->GetSymbolAccessesIncludingHidden()[0]
											 ->GetFunctionArguments());

				auto newValue = EvaluateMemberFunctionOnValue(
					valDeref->value,
					static_cast<inputreconstruction::Function*>(
						functionTable.GetFunction(resolvedIrValueFunction, valDeref->type)
							.value()
							->irObject),
					functionArgumentsPtr);
				if (!newValue.has_value())
				{
					return std::nullopt;
				}

				val = newValue.value();
			}
			else if (std::holds_alternative<SymbolMember>(val))
			{
				auto valDeref = std::get<SymbolMember>(val);
				auto [functionArguments, functionArgumentsPtr] =
					getFunctionArguments(currentNextNameResolve.value()
											 ->GetSymbolAccessesIncludingHidden()[0]
											 ->GetFunctionArguments());

				auto newValue = EvaluateMemberFunctionOnValue(
					valDeref.value,
					static_cast<inputreconstruction::Function*>(
						functionTable.GetFunction(resolvedIrValueFunction, valDeref.type)
							.value()
							->irObject),
					functionArgumentsPtr);
				if (!newValue.has_value())
				{
					return std::nullopt;
				}

				val = newValue.value();
			}
			else if (std::holds_alternative<Value>(val))
			{
				auto valDeref = std::get<Value>(val);

				auto [functionArguments, functionArgumentsPtr] =
					getFunctionArguments(currentNextNameResolve.value()
											 ->GetSymbolAccessesIncludingHidden()[0]
											 ->GetFunctionArguments());

				auto newValue = EvaluateMemberFunctionOnValue(
					valDeref,
					static_cast<inputreconstruction::Function*>(
						functionTable.GetFunction(resolvedIrValueFunction, valDeref.GetType())
							.value()
							->irObject),
					functionArgumentsPtr);
				if (!newValue.has_value())
				{
					return std::nullopt;
				}

				val = newValue.value();
			}
		}
		else if (resolvedIrValue->GetType() == inputreconstruction::Type::Constructor)
		{
			// Constructors cannot be evaluated at this stage.
			return std::nullopt;
		}
		else if (resolvedIrValue->GetType() == inputreconstruction::Type::CodeFunction)
		{
			return std::nullopt;
		}
		else if (resolvedIrValue->GetType() == inputreconstruction::Type::NameFunction)
		{
			return std::nullopt;
		}
		else if (resolvedIrValue->GetType() == inputreconstruction::Type::ConditionalFunction)
		{
			return std::nullopt;
		}

		processSymbolAccesses(currentNextNameResolve.value()->GetSymbolAccesses());

		currentNextNameResolve = currentNextNameResolve.value()->GetNameSecondaryReference();
	}

	return val;
}

Celeste::ir::inputreconstruction::Interpreter::Value
Celeste::ir::inputreconstruction::Interpreter::Evaluate(const std::unique_ptr<Expression>& rhs,
														std::optional<Value*> valueReference)
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
				auto& lhsValueDeref = std::get<std::unique_ptr<SymbolReferenceCall>>(lhsValue);
				lhsValueDeref->GetResolvedLinkedIr();
				if ((lhsValueDeref->GetSymbolAccesses().empty() ||
					 (lhsValueDeref->GetSymbolAccesses().size() == 1 &&
					  lhsValueDeref->GetSymbolAccesses()[0]->GetSymbolAccessType() ==
						  SymbolAccessType::FunctionAccess)) &&
					!lhsValueDeref->GetNameSecondaryReference().has_value())
				{
					auto nameNotFinalized = lhsValueDeref->GetResolvedLinkedIr();
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
						auto variable = GetSymbolMember(linkedVariable, valueReference);
						if (!variable.has_value())
						{
							// Error
							return Value(0);
						}

						auto& variableValue = variable.value();
						if (std::holds_alternative<Symbol*>(variableValue))
						{
							auto symbol = std::get<Symbol*>(variableValue);
							auto variableValueDeref = symbol->value;
							if (variableValueDeref.has_value())
							{
								return variableValueDeref.value();
							}
							else if (symbol->isGlobal)
							{
								// We must first initialize this variable in case it is a global
								auto global = static_cast<GlobalVariableMember*>(symbol);
								auto globalIrObject =
									static_cast<VariableDeclaration*>(global->irObject);
								auto globalEvaluation =
									Evaluate(globalIrObject, globalIrObject->GetExpressions());
								global->value = globalEvaluation;
								return globalEvaluation;
							}
							else
							{
								// It is not a global, so something went wrong in the type checker.
							}
						}
						else if (std::holds_alternative<SymbolMember*>(variableValue))
						{
							auto symbol = std::get<SymbolMember*>(variableValue);
							return symbol->value;
						}
						else if (std::holds_alternative<SymbolMember>(variableValue))
						{
							auto symbol = std::get<SymbolMember>(variableValue);
							return symbol.value;
						}
						else if (std::holds_alternative<Value>(variableValue))
						{
							auto symbol = std::get<Value>(variableValue);
							return symbol;
						}
					}
					else if (nameNotFinalized.value()->GetType() ==
							 inputreconstruction::Type::Function)

					{
						auto& lhsDeref = std::get<std::unique_ptr<SymbolReferenceCall>>(lhsValue);
						auto hiddenAccess = lhsDeref->GetSymbolAccessesIncludingHidden();
						auto valueList = GetValueListFromExpressionList(
							hiddenAccess[0]->GetExpressions(), valueReference);
						std::vector<Value*> valueListPtr;
						for (auto& value : valueList)
						{
							valueListPtr.emplace_back(&value);
						}

						std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
							newValue;

						if (valueReference.has_value())
						{
							newValue = EvaluateMemberFunctionOnValue(
								*valueReference.value(),
								static_cast<inputreconstruction::Function*>(
									nameNotFinalized.value()),
								valueListPtr);
						}
						else
						{
							newValue = EvaluateFunction(static_cast<inputreconstruction::Function*>(
															nameNotFinalized.value()),
														valueListPtr);
						}
						if (newValue.has_value())
						{
							return newValue.value();
						}
					}
					else if (nameNotFinalized.value()->GetType() ==
							 inputreconstruction::Type::Constructor)

					{
						auto& lhsDeref = std::get<std::unique_ptr<SymbolReferenceCall>>(lhsValue);
						auto hiddenAccess = lhsDeref->GetSymbolAccessesIncludingHidden();
						auto valueList = GetValueListFromExpressionList(
							hiddenAccess[0]->GetExpressions(), valueReference);
						std::vector<Value*> valueListPtr;
						for (auto& value : valueList)
						{
							valueListPtr.emplace_back(&value);
						}

						auto newValue =
							EvaluateConstructor(static_cast<inputreconstruction::Constructor*>(
													nameNotFinalized.value()),
												valueListPtr);
						if (newValue.has_value())
						{
							return newValue.value();
						}
					}
					else if (nameNotFinalized.value()->GetType() ==
							 inputreconstruction::Type::FunctionArgument)
					{
						auto linkedFunctionArgument =
							static_cast<inputreconstruction::FunctionArgument*>(
								nameNotFinalized.value());
						auto symbol =
							GetSymbolMember(linkedFunctionArgument->GetName(), valueReference);
						if (!symbol.has_value())
						{
							// Error
							throw std::logic_error(
								"Could not resolve function argument!, Interpreter phase");
						}

						auto symbolValue = symbol.value();
						if (symbolValue->value.has_value())
						{
							return symbolValue->value.value();
						}
						else
						{
							// Error
							throw std::logic_error(
								"Could not resolve function argument!, Interpreter phase");
						}
					}
					else if (nameNotFinalized.value()->GetType() ==
							 inputreconstruction::Type::Class)
					{
						throw std::logic_error("Reference logic is flawed");
					}
					else
					{
						throw std::logic_error("Reference logic is flawed");
					}
				}
				else
				{
					auto symbol = GetSymbolMember(lhsValueDeref.get(), valueReference);
					if (!symbol.has_value())
					{
						// Error
						throw std::logic_error("Evaluated Symbol is invalid.");
					}
					auto symbolValue = symbol.value();
					if (std::holds_alternative<Symbol*>(symbolValue))
					{
						auto symbol = std::get<Symbol*>(symbolValue);
						auto variableValueDeref = symbol->value;
						if (variableValueDeref.has_value())
						{
							return variableValueDeref.value();
						}
						else if (symbol->isGlobal)
						{
							// We must first initialize this variable in case it is a global
							auto global = static_cast<GlobalVariableMember*>(symbol);
							auto globalIrObject =
								static_cast<VariableDeclaration*>(global->irObject);
							auto globalEvaluation =
								Evaluate(globalIrObject, globalIrObject->GetExpressions());
							global->value = globalEvaluation;
							return globalEvaluation;
						}
						else
						{
							// It is not a global, so something went wrong in the type checker.
						}
					}
					else if (std::holds_alternative<SymbolMember*>(symbolValue))
					{
						return std::get<SymbolMember*>(symbolValue)->value;
					}
					else if (std::holds_alternative<SymbolMember>(symbolValue))
					{
						return std::get<SymbolMember>(symbolValue).value;
					}
					else if (std::holds_alternative<Value>(symbolValue))
					{
						return std::get<Value>(symbolValue);
					}

					throw std::logic_error("Evaluated Symbol is invalid.");
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
			return Evaluate(std::get<std::unique_ptr<Expression>>(someValue), valueReference);
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
				return Evaluate(std::get<std::unique_ptr<Expression>>(someValue), valueReference);
			}
			else if (std::holds_alternative<std::unique_ptr<inputreconstruction::Value>>(someValue))
			{
				return extractValue(someValue);
			}
		};

		Value lhsValue = getValue(rhs->GetLhs());
		Value rhsValue = getValue(rhs->GetRhs());

		auto type = rhs->DeduceType();
		Class* classObject = nullptr;
		if (type->GetType() == inputreconstruction::Type::Class)
		{
			classObject = static_cast<Class*>(type);
		}
		else if (type->GetType() == inputreconstruction::Type::TypeConstruct)
		{
			auto typeConstruct = static_cast<TypeConstruct*>(type);
			if (typeConstruct->Trivial())
			{
				classObject = static_cast<Class*>(typeConstruct->GetCoreType().value());
			}
			else
			{
				throw std::logic_error("Unimplemented feature, critical error");
			}
		}
		if (classObject != nullptr)
		{
			auto function =
				classObject->GetMember(rhs->GetOperatorFunctionName().value(), rhs->GetRhs());
			if (function->GetType() == inputreconstruction::Type::Function)
			{
				auto returnValue = EvaluateMemberFunctionOnValue(
					lhsValue, static_cast<inputreconstruction::Function*>(function), {&rhsValue});
				if (returnValue.has_value())
				{
					return returnValue.value();
				}

				// If it does not return anything (the operator overload), return a zero value
				return ZeroValue(rhs.get());
			}
			else
			{
				// Error
			}
		}
	}

	throw std::logic_error("Could not evaluate value, critical error!");
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

Celeste::ir::inputreconstruction::Interpreter::TypeId
Celeste::ir::inputreconstruction::Interpreter::TypeTable::GetTypeFromConstructor(
	inputreconstruction::Constructor* parent)
{
	auto iter = typePointerMap.find(parent->GetParent());
	if (iter != typePointerMap.end())
	{
		return iter->second.type;
	}

	switch (parent->GetType())
	{
	case inputreconstruction::Type::Class: {
		auto classObject = static_cast<inputreconstruction::Class*>(parent->GetParent());
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
			memberFunctionMapping.insert({{function, typeId}, function});
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
				else
				{
					memberFunctionMapping.insert({{parentVirtualMemberFunction, typeId},
												  newMemberFunctionObjectPtr->irObject});
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

		return memberFunctionTable.find(iter->second)->second.get();
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
