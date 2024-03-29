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
#include "Celeste/Ir/InputReconstruction/Interpreter/Bytecode/BytecodePrinter.h"
#include "Celeste/Ir/InputReconstruction/Interpreter/Bytecode/BytecodeRepresentation.h"
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
#include "Celeste/Ir/InputReconstruction/Structure/InlineClass.h"
#include "Celeste/Ir/InputReconstruction/Structure/MutationGroup.h"
#include "Celeste/Ir/InputReconstruction/Structure/TypeExplicitAlias.h"
#include <limits>
#include <memory>

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
		else if (std::holds_alternative<std::vector<Value>>(symbolMember.value.value))
		{
			std::cout << "\n";
			for (auto& val : std::get<std::vector<Value>>(symbolMember.value.value))
			{
				if (std::holds_alternative<AlgebraicValue>(val.value))
				{
					std::get<AlgebraicValue>(val.value).Print(depth + 1);
				}
				else
				{
					for (auto i = 0; i <= depth + 1; i++)
					{
						std::cout << "\t";
					}

					if (std::holds_alternative<int>(val.value))
					{
						std::cout << std::get<int>(val.value);
					}
				}

				std::cout << "\n";
			}
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
	}
}

Celeste::ir::inputreconstruction::Interpreter::GlobalVariableTable::GlobalVariableTable(
	Interpreter* interpreter_)
	: interpreter(interpreter_)
{
}

Celeste::ir::inputreconstruction::Interpreter::TypeId
Celeste::ir::inputreconstruction::Interpreter::GetType(TypeConstruct* typeConstruct)
{
	auto coreType = typeConstruct->GetCoreType();
	if (!coreType.has_value())
	{
		// Issue
		return {std::numeric_limits<std::size_t>::max()};
	}

	return GetType(coreType);
}

Celeste::ir::inputreconstruction::Interpreter::TypeId
Celeste::ir::inputreconstruction::Interpreter::GetType(
	std::optional<InputReconstructionObject*> object)
{
	if (!object.has_value())
	{
		// We got an issue
		return {std::numeric_limits<std::size_t>::max()};
	}

	if (object.value() == nullptr)
	{
		// Critical error
		return {std::numeric_limits<std::size_t>::max()};
	}

	if (object.value()->GetType() == inputreconstruction::Type::Class)
	{
		auto classObject = static_cast<Class*>(object.value());

		auto iter = typeTable.typePointerMap.find(classObject);
		if (iter == typeTable.typePointerMap.end())
		{
			typeTable.AddClass(classObject);
		}

		return typeTable.typePointerMap.find(classObject)->second.type;
	}
	else if (object.value()->GetType() == inputreconstruction::Type::MonomorphizedClass)
	{
		auto classObject = static_cast<MonomorphizedClass*>(object.value());

		auto iter = typeTable.typePointerMap.find(classObject);
		if (iter == typeTable.typePointerMap.end())
		{
			typeTable.AddMonomorphizedClass(classObject);
		}

		return typeTable.typePointerMap.find(classObject)->second.type;
	}
	else if (object.value()->GetType() == inputreconstruction::Type::TypeExplicitAlias)
	{
		auto typeExplicitAlias = static_cast<TypeExplicitAlias*>(object.value());
		auto classObject = typeExplicitAlias->GetAliasedType()->GetResolvedLinkedIr();

		return GetType(classObject.value());
	}
	else if (object.value()->GetType() == inputreconstruction::Type::Enumeration)
	{
		auto enumerationObject = static_cast<Enumeration*>(object.value());

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

Celeste::ir::inputreconstruction::Interpreter::TypeId
Celeste::ir::inputreconstruction::Interpreter::GetType(Value& val)
{
	auto result = val.GetType();
	if (result.has_value())
	{
		return result.value();
	}

	if (std::holds_alternative<int>(val.value))
	{
		return typeTable.GetIntegerType();
	}
	else if (std::holds_alternative<std::string>(val.value))
	{
		return typeTable.GetTextType();
	}
	else if (std::holds_alternative<double>(val.value))
	{
		return typeTable.GetDecimalType();
	}

	// Default return type, will result in errors, however, this is okay as the program was
	// ill-formed (only way to get this result)
	return TypeId(0);
}

std::variant<int, double, std::string,
			 Celeste::ir::inputreconstruction::Interpreter::AlgebraicValue,
			 Celeste::ir::inputreconstruction::Interpreter::Value*,
			 Celeste::ir::inputreconstruction::InputReconstructionObject*,
			 std::vector<Celeste::ir::inputreconstruction::Interpreter::Value>,
			 Celeste::ir::inputreconstruction::File*>
Celeste::ir::inputreconstruction::Interpreter::ZeroValueArray(
	MonomorphizedClass* monomorphizedArray)
{
	auto& templateArgument = monomorphizedArray->GetTemplateArguments()[0];
	auto aliasedType = templateArgument->GetAliasedType();
	auto monomorphizedType = GetType(monomorphizedArray);
	auto aliasedTypeId = GetType(aliasedType);

	AlgebraicValue newAlgebraicType(monomorphizedType);
	newAlgebraicType.AddSymbolMember(
		SymbolMember(Name{"list"}, aliasedTypeId, Value{std::vector<Value>{}}));

	return newAlgebraicType;
}

bool Celeste::ir::inputreconstruction::Interpreter::PolymorphismEquality(
	InputReconstructionObject* lhsType, InputReconstructionObject* rhsType)
{
	return false;
}

std::variant<int, double, std::string,
			 Celeste::ir::inputreconstruction::Interpreter::AlgebraicValue,
			 Celeste::ir::inputreconstruction::Interpreter::Value*,
			 Celeste::ir::inputreconstruction::InputReconstructionObject*,
			 std::vector<Celeste::ir::inputreconstruction::Interpreter::Value>,
			 Celeste::ir::inputreconstruction::File*>
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
	else if (type->GetType() == inputreconstruction::Type::MonomorphizedClass)
	{
		auto classObject = static_cast<MonomorphizedClass*>(type);
		if (classObject->GetTemplateParent()->GetClassName()->GetResolvedName() == "Array")
		{
			return ZeroValueArray(classObject);
		}

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
	else if (lhs->GetType() == inputreconstruction::Type::MonomorphizedClass)
	{
		auto classObject = static_cast<inputreconstruction::MonomorphizedClass*>(lhs);
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
	auto stackLifetime = StackLifetime<StackType>{this};

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
		auto res = typeTable.typeIdMap.find(value.GetType().value())->second;
		if (res.name == Name("io"))
		{
			if (function->GetFunctionName()->GetResolvedName() == "Print")
			{
				for (auto functionArgument : functionArguments)
				{
					auto funVal_ = functionArgument->value;
					auto evaluateSimplePrintObject = [&](ValueType funVal) {
						if (std::holds_alternative<int>(funVal))
						{
							auto res = std::get<int>(funVal);
							std::cout << res;
						}
						if (std::holds_alternative<double>(funVal))
						{
							auto res = std::get<double>(funVal);
							std::cout << res;
						}
						if (std::holds_alternative<Value*>(funVal))
						{
							auto res = std::get<Value*>(funVal);
							std::cout << "Ptr: " << (std::size_t)res;
						}
						if (std::holds_alternative<std::string>(funVal))
						{
							auto res = std::get<std::string>(funVal);
							std::size_t slash = 0;
							for (auto character : res)
							{
								switch (character)
								{
								case '\'': {
									if (slash == 1)
									{
										std::cout << '\'';
										slash = 0;
									}
									else
									{
										std::cout << '\'';
									}
									break;
								}
								case '"': {
									if (slash == 1)
									{
										std::cout << '"';
										slash = 0;
									}
									else
									{
										std::cout << '"';
									}
									break;
								}
								case 't': {
									if (slash == 1)
									{
										std::cout << '\t';
										slash = 0;
									}
									else
									{
										std::cout << 't';
									}
									break;
								}
								case 'r': {
									if (slash == 1)
									{
										std::cout << '\r';
										slash = 0;
									}
									else
									{
										std::cout << 'r';
									}
									break;
								}
								case 'n': {
									if (slash == 1)
									{
										std::cout << '\n';
										slash = 0;
									}
									else
									{
										std::cout << 'n';
									}
									break;
								}
								case '\\': {
									if (slash == 1)
									{
										std::cout << '\\';
										slash = 0;
									}
									else
									{
										slash++;
									}
									break;
								}
								default: {
									if (slash == 1)
									{
										slash = 0;
									}
									std::cout << character;
									break;
								}
								}
							}
						}
						if (std::holds_alternative<AlgebraicValue>(funVal))
						{
							auto res = std::get<AlgebraicValue>(funVal);
							res.Print();
						}
					};

					if (std::holds_alternative<std::vector<Value>>(funVal_))
					{
						for (auto& mem : std::get<std::vector<Value>>(funVal_))
						{
							evaluateSimplePrintObject(mem.value);
						}
					}
					else
					{
						evaluateSimplePrintObject(funVal_);
					}
				}

				return value;
			}
		}
		else if (res.name == Name("Mutate"))
		{
			return EvaluateMemberFunctionCompilerProvided_Mutate(value, function,
																 functionArguments);
		}
		else if (res.name == Name("ClassObject"))
		{
			return EvaluateMemberFunctionCompilerProvided_ClassObject(value, function,
																	  functionArguments);
		}
		else if (res.name == Name("MemberFunctionObject"))
		{
			return EvaluateMemberFunctionCompilerProvided_MemberFunctionObject(value, function,
																			   functionArguments);
		}
		else if (res.name == Name("FunctionObject"))
		{
			return EvaluateMemberFunctionCompilerProvided_FunctionObject(value, function,
																		 functionArguments);
		}
		else if (res.irType->GetType() == inputreconstruction::Type::MonomorphizedClass &&
				 Name("Array") == static_cast<MonomorphizedClass*>(res.irType)
									  ->GetTemplateParent()
									  ->GetClassName()
									  ->GetResolvedName())
		{
			return EvaluateMemberFunctionCompilerProvided_Array(value, function, functionArguments);
		}
		else
		{
			auto resultingValue =
				EvaluateSomeFunction(function, functionArguments, stackLifetime, &value);
			return resultingValue;
		}
	}
	return std::nullopt;
}

std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
Celeste::ir::inputreconstruction::Interpreter::EvaluateConstructor(
	inputreconstruction::Constructor* function, std::vector<Value*> functionArguments)
{
	auto stackLifetime = StackLifetime<StackType>{this};

	auto value = Value(ZeroValue(
		typeTable.typeIdMap.find(typeTable.GetTypeFromConstructor(function))->second.irType));
	EvaluateSomeFunction(function, functionArguments, stackLifetime, &value);

	return value;
}

std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
Celeste::ir::inputreconstruction::Interpreter::EvaluateFunction(
	inputreconstruction::Function* function, std::vector<Value*> functionArguments)
{
	auto stackLifetime = StackLifetime<StackType>{this};

	return EvaluateSomeFunction(function, functionArguments, stackLifetime);
}

std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
Celeste::ir::inputreconstruction::Interpreter::EvaluateMonomorphizedMemberFunctionOnValue(
	Value& value, inputreconstruction::MonomorphizedFunction* function,
	std::vector<Value*> functionArguments)
{
	auto stackLifetime = StackLifetime<StackType>{this};

	auto resultingValue = EvaluateSomeFunction(function, functionArguments, stackLifetime, &value);
	return resultingValue;
}

std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
Celeste::ir::inputreconstruction::Interpreter::EvaluateMonomorphizedFunction(
	inputreconstruction::MonomorphizedFunction* function, std::vector<Value*> functionArguments)
{
	auto stackLifetime = StackLifetime<StackType>{this};

	return EvaluateSomeFunction(function, functionArguments, stackLifetime);
}

std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
Celeste::ir::inputreconstruction::Interpreter::EvaluateSymbolReferenceCall(
	SymbolReferenceCall* symbolReferenceCall, std::optional<Value*> valueReference)
{
	auto& lhsValueDeref = symbolReferenceCall;
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
			throw std::logic_error("Critical Internal Error");
		}

		auto nameNotFinalizedType = nameNotFinalized.value()->GetType();
		if (nameNotFinalizedType == inputreconstruction::Type::VariableDeclaration)
		{
			auto linkedVariable = static_cast<VariableDeclaration*>(nameNotFinalized.value());
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
					auto globalIrObject = static_cast<VariableDeclaration*>(global->irObject);
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
		else if (nameNotFinalizedType == inputreconstruction::Type::MonomorphizedFunction)

		{
			auto& lhsDeref = symbolReferenceCall;
			auto hiddenAccess = lhsDeref->GetSymbolAccessesIncludingHidden();
			auto templateValueAndTypeList =
				GetValueListFromExpressionList(hiddenAccess[0]->GetExpressions(), valueReference);
			auto functionValueList =
				GetValueListFromExpressionList(hiddenAccess[1]->GetExpressions(), valueReference);
			std::vector<Value*> valueListPtr;
			for (auto& value : templateValueAndTypeList)
			{
				valueListPtr.emplace_back(&value);
			}

			for (auto& value : functionValueList)
			{
				valueListPtr.emplace_back(&value);
			}

			std::optional<Celeste::ir::inputreconstruction::Interpreter::Value> newValue;

			if (valueReference.has_value())
			{
				newValue = EvaluateMonomorphizedMemberFunctionOnValue(
					*valueReference.value(),
					static_cast<inputreconstruction::MonomorphizedFunction*>(
						nameNotFinalized.value()),
					valueListPtr);
			}
			else
			{
				newValue = EvaluateMonomorphizedFunction(
					static_cast<inputreconstruction::MonomorphizedFunction*>(
						nameNotFinalized.value()),
					valueListPtr);
			}
			if (newValue.has_value())
			{
				return newValue.value();
			}
		}
		else if (nameNotFinalizedType == inputreconstruction::Type::Function)
		{
			auto& lhsDeref = symbolReferenceCall;
			auto hiddenAccess = lhsDeref->GetSymbolAccessesIncludingHidden();
			std::vector<Value*> valueListPtr;
			std::vector<Value> templateValueAndTypeList;
			std::vector<Value> functionValueList;
			if (hiddenAccess.size() == 2)
			{
				templateValueAndTypeList = GetValueListFromExpressionList(
					hiddenAccess[0]->GetExpressions(), valueReference);
				functionValueList = GetValueListFromExpressionList(
					hiddenAccess[1]->GetExpressions(), valueReference);
			}
			else
			{
				functionValueList = GetValueListFromExpressionList(
					hiddenAccess[0]->GetExpressions(), valueReference);
			}

			for (auto& value : templateValueAndTypeList)
			{
				valueListPtr.emplace_back(&value);
			}

			for (auto& value : functionValueList)
			{
				valueListPtr.emplace_back(&value);
			}

			std::optional<Celeste::ir::inputreconstruction::Interpreter::Value> newValue;

			if (valueReference.has_value())
			{
				newValue = EvaluateMemberFunctionOnValue(
					*valueReference.value(),
					static_cast<inputreconstruction::Function*>(nameNotFinalized.value()),
					valueListPtr);
			}
			else
			{
				newValue = EvaluateFunction(
					static_cast<inputreconstruction::Function*>(nameNotFinalized.value()),
					valueListPtr);
			}
			if (newValue.has_value())
			{
				return newValue.value();
			}
		}
		else if (nameNotFinalizedType == inputreconstruction::Type::Constructor)

		{
			auto& lhsDeref = symbolReferenceCall;
			auto hiddenAccess = lhsDeref->GetSymbolAccessesIncludingHidden();
			auto valueList =
				GetValueListFromExpressionList(hiddenAccess[0]->GetExpressions(), valueReference);
			std::vector<Value*> valueListPtr;
			std::vector<Value> templateValueAndTypeList;
			std::vector<Value> functionValueList;
			if (hiddenAccess.size() == 2)
			{
				templateValueAndTypeList = GetValueListFromExpressionList(
					hiddenAccess[0]->GetExpressions(), valueReference);
				functionValueList = GetValueListFromExpressionList(
					hiddenAccess[1]->GetExpressions(), valueReference);
			}
			else
			{
				functionValueList = GetValueListFromExpressionList(
					hiddenAccess[0]->GetExpressions(), valueReference);
			}

			for (auto& value : templateValueAndTypeList)
			{
				valueListPtr.emplace_back(&value);
			}

			for (auto& value : functionValueList)
			{
				valueListPtr.emplace_back(&value);
			}

			auto newValue = EvaluateConstructor(
				static_cast<inputreconstruction::Constructor*>(nameNotFinalized.value()),
				valueListPtr);
			if (newValue.has_value())
			{
				return newValue.value();
			}
		}
		else if (nameNotFinalizedType == inputreconstruction::Type::FunctionArgument)
		{
			auto linkedFunctionArgument =
				static_cast<inputreconstruction::FunctionArgument*>(nameNotFinalized.value());
			auto symbol = GetSymbolMember(linkedFunctionArgument->GetName(), valueReference);
			if (!symbol.has_value())
			{
				// Error
				throw std::logic_error("Could not resolve function argument!, Interpreter phase");
			}

			auto symbolValue = symbol.value();
			if (symbolValue->value.has_value())
			{
				return symbolValue->value.value();
			}
			else
			{
				// Error
				throw std::logic_error("Could not resolve function argument!, Interpreter phase");
			}
		}
		else if (nameNotFinalizedType == inputreconstruction::Type::Class)
		{
			throw std::logic_error("Reference logic is flawed");
		}
		else if (nameNotFinalizedType == inputreconstruction::Type::MonomorphizedClass)
		{
			throw std::logic_error("Reference logic is flawed");
		}
		else if (nameNotFinalizedType == inputreconstruction::Type::ForEach)
		{
			// This means that the variable referenced is created in a for each statement.
			auto varName = lhsValueDeref->GetSymbolName();
			auto symbol = GetSymbolMember(varName);
			if (!symbol.has_value())
			{
				return std::nullopt;
			}

			return symbol.value()->value;
		}
		else
		{
			throw std::logic_error("Reference logic is flawed");
		}
	}
	else
	{
		auto symbol = GetSymbolMember(symbolReferenceCall, valueReference);
		if (!symbol.has_value())
		{
			// If nothing is returned this indicates a void function.
			return std::nullopt;
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
				auto globalIrObject = static_cast<VariableDeclaration*>(global->irObject);
				auto globalEvaluation = Evaluate(globalIrObject, globalIrObject->GetExpressions());
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

	return std::nullopt;
}

std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
Celeste::ir::inputreconstruction::Interpreter::EvaluateMutationGroup(MutationGroup* mutationGroup)
{
	auto stackLifetime = StackLifetime<StackType>{this};

	return EvaluateSomeFunction(mutationGroup, {}, stackLifetime, {});
}

std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
Celeste::ir::inputreconstruction::Interpreter::EvaluateSomeFunction(
	std::variant<inputreconstruction::Function*, inputreconstruction::MutationGroup*,
				 inputreconstruction::MonomorphizedFunction*>
		function,
	std::vector<Value*> functionArguments, StackLifetime<StackType>& stackLifetime,
	std::optional<Value*> valueReference)
{
	if (std::holds_alternative<inputreconstruction::Function*>(function) &&
		std::get<inputreconstruction::Function*>(function)->GetType() !=
			inputreconstruction::Type::Constructor)
	{
		return EvaluateBytecode(GetBytecode(function), functionArguments, stackLifetime,
								valueReference);
	}

	struct Block
	{
		enum class BlockType
		{
			FunctionBlock,
			MutationBlock,
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

		std::optional<Name> iteratingName;
		std::optional<TypeId> iteratingType;
		std::optional<Value> iteratableContainerRhs;

		Block(BlockType type_, InputReconstructionObject* blockCreatingObject_,
			  Interpreter* interpreter)
			: type(type_),
			  objectThatIntroducedThisBlock(blockCreatingObject_)
		{
			switch (blockCreatingObject_->GetType())
			{
			case inputreconstruction::Type::MonomorphizedFunction: {
				auto monomorphizedFunction =
					static_cast<inputreconstruction::MonomorphizedFunction*>(blockCreatingObject_);
				statements = monomorphizedFunction->GetOwnedBlock();
				break;
			}
			case inputreconstruction::Type::Function: {
				auto function = static_cast<inputreconstruction::Function*>(blockCreatingObject_);
				statements = function->GetOwnedBlock();
				break;
			}
			case inputreconstruction::Type::MutationGroup: {
				auto mutation =
					static_cast<inputreconstruction::MutationGroup*>(blockCreatingObject_);
				statements = mutation->GetScope();
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
				// This logic requires more care as this is highly dangerous
				auto forEach = static_cast<inputreconstruction::ForEach*>(blockCreatingObject_);
				statements = forEach->GetScope();
				iteratingName = Name(forEach->GetVariable()->GetResolvedName());
				auto originType = interpreter->GetType(forEach->GetVariableType());
				auto linkedIr = interpreter->typeTable.typeIdMap.find(originType)->second.irType;
				if (linkedIr->GetType() == inputreconstruction::Type::MonomorphizedClass)
				{
					auto monomorphizedClass = static_cast<MonomorphizedClass*>(linkedIr);
					iteratingType = interpreter->GetType(
						monomorphizedClass->GetTemplateArguments()[0]->GetAliasedType());
				}
				else
				{
					iteratingType = originType;
				}
				auto tmp = interpreter->Evaluate(forEach->GetExpression());
				if (std::holds_alternative<AlgebraicValue>(tmp.value().value))
				{
					auto symbolMember =
						std::get<AlgebraicValue>(tmp.value().value).symbolMembers[0];
					auto res = symbolMember.value.value;
					iteratableContainerRhs = res;
				}
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
				auto integerValue = std::get<int>(value.value().value);
				if (iterationCounter < integerValue)
				{
					return true;
				}

				return false;
			}
			case BlockType::ForEachBlock: {
				auto forEach =
					static_cast<inputreconstruction::ForEach*>(objectThatIntroducedThisBlock);
				if (!std::holds_alternative<std::vector<Value>>(
						iteratableContainerRhs.value().value))
				{
					return false;
				}

				if (iterationCounter <
					std::get<std::vector<Value>>(iteratableContainerRhs.value().value).size())
				{
					return true;
				}

				return false;
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
			switch (type)
			{
			case BlockType::ForBlock: {
				return !StartConditionSatisfied(interpreter);
			}
			case BlockType::ForEachBlock: {
				return !StartConditionSatisfied(interpreter);
			}
			default: {
				return true;
			}
			}

			return true;
		}

		void StartAction(Interpreter* interpreter, StackLifetime<StackType>& stackLifetime)
		{
			index = 0;
			stackLifetime.Stack()->GetCurrentScope()->OpenScope();
			switch (type)
			{
			case BlockType::ForEachBlock: {
				// assign nth object
				if (std::holds_alternative<std::vector<Value>>(
						iteratableContainerRhs.value().value))
				{
					auto& valueVector =
						std::get<std::vector<Value>>(iteratableContainerRhs.value().value);
					stackLifetime.Stack()->GetCurrentScope()->AddVariable(
						std::make_unique<Symbol>(iteratingName.value(), iteratingType.value(),
												 valueVector[iterationCounter].value));
				}
				break;
			}
			}
		}

		void EndAction(Interpreter* interpreter, StackLifetime<StackType>& stackLifetime)
		{
			iterationCounter++;
			stackLifetime.Stack()->GetCurrentScope()->CloseScope();
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

	if (std::holds_alternative<inputreconstruction::Function*>(function))
	{
		auto InitializeStackTop = [&]() {
			auto& functionArgumentsBase =
				std::get<inputreconstruction::Function*>(function)->GetFunctionArguments();
			for (auto i = 0; i < functionArgumentsBase.size(); i++)
			{
				auto& currentFunctionArgumentBase = functionArgumentsBase[i];
				auto currentFunctionArgumentValue = functionArguments[i];

				auto newSymbol = std::make_unique<Symbol>(
					currentFunctionArgumentBase->GetName(),
					GetType(currentFunctionArgumentBase->GetArgumentType()));
				newSymbol->value = *currentFunctionArgumentValue;
				stackLifetime.Stack()->AddVariable(std::move(newSymbol));
			}
		};

		InitializeStackTop();

		auto functionObjectTmp = std::get<inputreconstruction::Function*>(function);
		std::vector<InputReconstructionObject*> block;
		if (functionObjectTmp->GetType() == inputreconstruction::Type::Constructor)
		{
			block = static_cast<inputreconstruction::Constructor*>(functionObjectTmp)->GetScope();
		}
		else
		{
			block = functionObjectTmp->GetOwnedBlock();
		}
		if (block.empty())
		{
			// Return default value for return type
			return std::nullopt;
		}

		blocks.emplace_back(Block::BlockType::FunctionBlock,
							std::get<inputreconstruction::Function*>(function), this);
	}
	else if (std::holds_alternative<inputreconstruction::MonomorphizedFunction*>(function))
	{
		auto InitializeStackTop = [&]() {
			auto& functionTemplateArgumentsBase =
				std::get<inputreconstruction::MonomorphizedFunction*>(function)
					->GetTemplateFunctionArguments();

			auto& functionArgumentsBase =
				std::get<inputreconstruction::MonomorphizedFunction*>(function)
					->GetFunctionArguments();
			std::size_t globalCounter = 0;
			for (auto i = 0; i < functionTemplateArgumentsBase.size(); i++)
			{
				auto& currentFunctionTemplateArgumentBase = functionTemplateArgumentsBase[i];
				if (currentFunctionTemplateArgumentBase->GetValues().empty())
				{
					continue;
				}

				globalCounter++;
				auto currentFunctionTemplateArgumentValue = functionArguments[i];

				auto newSymbol = std::make_unique<Symbol>(
					currentFunctionTemplateArgumentBase->GetName(),
					GetType(currentFunctionTemplateArgumentBase->GetArgumentType()));
				newSymbol->value = *currentFunctionTemplateArgumentValue;
				stackLifetime.Stack()->AddVariable(std::move(newSymbol));
			}

			for (auto i = 0; i < functionArgumentsBase.size(); i++)
			{
				auto& currentFunctionArgumentBase = functionArgumentsBase[globalCounter];
				auto currentFunctionArgumentValue = functionArguments[globalCounter + i];

				globalCounter++;
				auto newSymbol = std::make_unique<Symbol>(
					currentFunctionArgumentBase->GetName(),
					GetType(currentFunctionArgumentBase->GetArgumentType()));
				newSymbol->value = *currentFunctionArgumentValue;
				stackLifetime.Stack()->AddVariable(std::move(newSymbol));
			}
		};

		InitializeStackTop();

		auto block =
			std::get<inputreconstruction::MonomorphizedFunction*>(function)->GetOwnedBlock();
		if (block.empty())
		{
			// Return default value for return type
			return std::nullopt;
		}

		blocks.emplace_back(Block::BlockType::FunctionBlock,
							std::get<inputreconstruction::MonomorphizedFunction*>(function), this);
	}
	else if (std::holds_alternative<inputreconstruction::MutationGroup*>(function))
	{
		auto block = std::get<inputreconstruction::MutationGroup*>(function)->GetScope();
		if (block.empty())
		{
			// Return default value for return type
			return std::nullopt;
		}

		blocks.emplace_back(Block::BlockType::MutationBlock,
							std::get<inputreconstruction::MutationGroup*>(function), this);
	}
	else
	{
		// Uninplemented
		return std::nullopt;
	}

	auto currentBlock = [&]() { return std::rbegin(blocks); };
	auto addBlock = [&](Block::BlockType blockType, InputReconstructionObject* object,
						Interpreter* interpreter) {
		auto newBlock = Block(blockType, object, interpreter);
		blocks.push_back(std::move(newBlock));
	};
	auto currentStatement = [&]() { return currentBlock()->GetCurrentStatement(); };
	while (!blocks.empty())
	{
		if (!currentBlock()->statements.empty())
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
				stackLifetime.Stack()->GetCurrentScope()->AddVariable(variableDeclaration);
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
				if (rhsValue.has_value())
				{
					assignToSymbol(symbol, rhsValue.value());
				}
				break;
			}
			case inputreconstruction::Type::SymbolIncrease: {
				auto symbolIncrease = static_cast<inputreconstruction::SymbolIncrease*>(current);
				auto symbolReference = symbolIncrease->GetSymbolReference().get();
				auto symbol = GetSymbolMember(symbolReference, valueReference);
				if (symbol.has_value())
				{
					auto symbolValue = symbol.value();
					if (std::holds_alternative<Symbol*>(symbolValue))
					{
						auto symbolMember = std::get<Symbol*>(symbolValue);
						if (symbolMember->value.has_value() &&
							std::holds_alternative<int>(symbolMember->value.value().value))
						{
							symbolMember->value.value().value =
								std::get<int>(symbolMember->value.value().value) + 1;
						}
					}
					else if (std::holds_alternative<SymbolMember*>(symbolValue))
					{
						auto symbolMember = std::get<SymbolMember*>(symbolValue);
						if (std::holds_alternative<int>(symbolMember->value.value))
						{
							symbolMember->value.value =
								std::get<int>(symbolMember->value.value) + 1;
						}
					}
				}
				break;
			}
			case inputreconstruction::Type::SymbolDecrease: {
				auto symbolDecrease = static_cast<inputreconstruction::SymbolDecrease*>(current);
				auto symbolReference = symbolDecrease->GetSymbolReference().get();
				auto symbol = GetSymbolMember(symbolReference, valueReference);
				if (symbol.has_value())
				{
					auto symbolValue = symbol.value();
					if (std::holds_alternative<Symbol*>(symbolValue))
					{
						auto symbolMember = std::get<Symbol*>(symbolValue);
						if (symbolMember->value.has_value() &&
							std::holds_alternative<int>(symbolMember->value.value().value))
						{
							symbolMember->value.value().value =
								std::get<int>(symbolMember->value.value().value) - 1;
						}
					}
					else if (std::holds_alternative<SymbolMember*>(symbolValue))
					{
						auto symbolMember = std::get<SymbolMember*>(symbolValue);
						if (std::holds_alternative<int>(symbolMember->value.value))
						{
							symbolMember->value.value =
								std::get<int>(symbolMember->value.value) - 1;
						}
					}
				}
				break;
			}
			case inputreconstruction::Type::ForEach: {
				auto forEach = static_cast<inputreconstruction::ForEach*>(current);
				addBlock(Block::BlockType::ForEachBlock, forEach, this);
				currentBlock()->StartAction(this, stackLifetime);
				break;
			}
			case inputreconstruction::Type::ForIteration: {
				auto forIteration = static_cast<inputreconstruction::ForIteration*>(current);
				addBlock(Block::BlockType::ForBlock, forIteration, this);
				currentBlock()->StartAction(this, stackLifetime);
				break;
			}
			case inputreconstruction::Type::WhileIteration: {
				break;
			}
			case inputreconstruction::Type::If: {
				auto ifObject = static_cast<inputreconstruction::If*>(current);
				auto value = Evaluate(ifObject->GetCondition(), valueReference);
				if (value.has_value() && value.value() == true)
				{
					// As we need to skip all other branches
					while (currentStatement() != nullptr &&
						   (currentStatement()->GetType() == inputreconstruction::Type::If ||
							currentStatement()->GetType() == inputreconstruction::Type::ElseIf ||
							currentStatement()->GetType() == inputreconstruction::Type::Else))
					{
						currentBlock()->CurrentStatementIsProcessed();
					}
					addBlock(Block::BlockType::ConditionalBlock, ifObject, this);
					currentBlock()->StartAction(this, stackLifetime);
				}
				break;
			}
			case inputreconstruction::Type::ElseIf: {
				auto elseIfObject = static_cast<inputreconstruction::ElseIf*>(current);
				auto value = Evaluate(elseIfObject->GetCondition(), valueReference);
				if (value.has_value() && value.value() == true)
				{
					// As we need to skip all other branches
					while (currentStatement() != nullptr &&
						   (currentStatement()->GetType() == inputreconstruction::Type::If ||
							currentStatement()->GetType() == inputreconstruction::Type::ElseIf ||
							currentStatement()->GetType() == inputreconstruction::Type::Else))
					{
						currentBlock()->CurrentStatementIsProcessed();
					}
					addBlock(Block::BlockType::ConditionalBlock, elseIfObject, this);
					currentBlock()->StartAction(this, stackLifetime);
				}
				break;
			}
			case inputreconstruction::Type::Else: {
				auto elseObject = static_cast<inputreconstruction::Else*>(current);
				addBlock(Block::BlockType::ConditionalBlock, elseObject, this);
				currentBlock()->StartAction(this, stackLifetime);
				break;
			}
			case inputreconstruction::Type::Expression: {
				auto expression = static_cast<Expression*>(current);
				Evaluate(expression);
				break;
			}
			case inputreconstruction::Type::SymbolReferenceCall: {
				auto symbolReference = static_cast<SymbolReferenceCall*>(current);
				EvaluateSymbolReferenceCall(symbolReference, valueReference);
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
		}

		// When this block exits, and the blocks above it were dependent on the fact this block
		// exits, then exit all dependent blocks
		while (!blocks.empty())
		{
			if (currentBlock()->statements.empty())
			{
				currentBlock()->EndAction(this, stackLifetime);
				blocks.pop_back();
			}
			else if (currentBlock()->IsDone())
			{
				bool exit = currentBlock()->EndConditionSatisfied(this);

				if (exit)
				{
					currentBlock()->EndAction(this, stackLifetime);
					blocks.pop_back();
				}
				else
				{
					// If the ending condition is not satisfied, we must do more work
					currentBlock()->EndAction(this, stackLifetime);

					if (currentBlock()->StartConditionSatisfied(this))
					{
						currentBlock()->StartAction(this, stackLifetime);
						break;
					}
					else
					{
						// As start is not satisfied force continuation
						blocks.pop_back();
					}
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
		if (symbolAccessArg->IsTypeReference())
		{
			// As it is not a value
			continue;
		}

		auto newValue = Evaluate(symbolAccessArg, valueReference);
		if (newValue.has_value())
		{
			functionArguments.push_back(newValue.value());
		}
	}
	return functionArguments;
}

std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
Celeste::ir::inputreconstruction::Interpreter::EvaluateMemberFunctionCompilerProvided_Mutate(
	const Value& value, inputreconstruction::Function* function,
	const std::vector<Value*>& functionArguments)
{
	auto irObjectType = typeTable.GetType(evaluatedFile.value()
											  ->GetProject()
											  ->GetFile("Celeste/Object.ce")
											  ->GetClass("Object")
											  .value());

	auto functionName = function->GetFunctionName()->GetResolvedName();
	if (functionName == "GetClass")
	{
		auto classObject =
			evaluatedFile.value()->GetClass(std::get<std::string>(functionArguments[0]->value));
		if (!classObject.has_value())
		{
			return std::nullopt;
		}
		auto algebriacValue =
			AlgebraicValue(typeTable.GetType(function->GetFile()->GetClass("ClassObject").value()),
						   {SymbolMember({"object"}, irObjectType, Value(classObject.value()))});
		return Value(algebriacValue);
	}
	else if (functionName == "GetEnumeration")
	{
	}
	else if (functionName == "GetFunction")
	{
		auto functionObject =
			evaluatedFile.value()->GetFunction(std::get<std::string>(functionArguments[0]->value));
		if (!functionObject.has_value())
		{
			return std::nullopt;
		}
		auto algebriacValue = AlgebraicValue(
			typeTable.GetType(function->GetFile()->GetClass("FunctionObject").value()),
			{SymbolMember({"object"}, irObjectType, Value(functionObject.value()))});
		return Value(algebriacValue);
	}
	else if (functionName == "GetVariable")
	{
	}
	else if (functionName == "AddClass")
	{
		auto classObject =
			evaluatedFile.value()->CreateClass(std::get<std::string>(functionArguments[0]->value));
		auto algebriacValue =
			AlgebraicValue(typeTable.GetType(function->GetFile()->GetClass("ClassObject").value()),
						   {SymbolMember({"object"}, irObjectType, Value(classObject))});
		return Value(algebriacValue);
	}
	else if (functionName == "AddEnumeration")
	{
	}
	else if (functionName == "AddFunction")
	{
		inputreconstruction::Function* functionObject;
		if (functionArguments.size() == 1)
		{
			functionObject = evaluatedFile.value()->CreateFunction(
				std::get<std::string>(functionArguments[0]->value));
		}
		else
		{
			functionObject = evaluatedFile.value()->CreateFunction(
				std::get<std::string>(functionArguments[0]->value),
				std::get<std::string>(functionArguments[1]->value));
		}
		auto algebriacValue = AlgebraicValue(
			typeTable.GetType(function->GetFile()->GetClass("FunctionObject").value()),
			{SymbolMember({"object"}, irObjectType, Value(functionObject))});
		return Value(algebriacValue);
	}
	else if (functionName == "AddVariable")
	{
	}

	return std::nullopt;
}

std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
Celeste::ir::inputreconstruction::Interpreter::EvaluateMemberFunctionCompilerProvided_ClassObject(
	const Value& value, inputreconstruction::Function* function,
	const std::vector<Value*>& functionArguments)
{
	auto irObjectType = typeTable.GetType(evaluatedFile.value()
											  ->GetProject()
											  ->GetFile("Celeste/Object.ce")
											  ->GetClass("Object")
											  .value());

	auto classObject =
		static_cast<inputreconstruction::Class*>(std::get<InputReconstructionObject*>(
			std::get<AlgebraicValue>(value.value).symbolMembers[0].value.value));
	auto functionName = function->GetFunctionName()->GetResolvedName();
	if (functionName == "GetName")
	{
		return Value(classObject->GetClassName());
	}
	else if (functionName == "AddMemberFunction")
	{
		inputreconstruction::Function* functionObject;
		if (functionArguments.size() == 1)
		{
			functionObject = classObject->CreateMemberFunction(
				std::get<std::string>(functionArguments[0]->value));
		}
		else
		{
			functionObject = classObject->CreateMemberFunction(
				std::get<std::string>(functionArguments[0]->value),
				std::get<std::string>(functionArguments[1]->value));
		}
		auto algebriacValue = AlgebraicValue(
			typeTable.GetType(function->GetFile()->GetClass("MemberFunctionObject").value()),
			{SymbolMember({"object"}, irObjectType, Value(functionObject))});
		return Value(algebriacValue);
	}
	return std::nullopt;
}

std::optional<Celeste::ir::inputreconstruction::Interpreter::Value> Celeste::ir::
	inputreconstruction::Interpreter::EvaluateMemberFunctionCompilerProvided_MemberFunctionObject(
		const Value& value, inputreconstruction::Function* function,
		const std::vector<Value*>& functionArguments)
{
	auto functionObject =
		static_cast<inputreconstruction::Function*>(std::get<InputReconstructionObject*>(
			std::get<AlgebraicValue>(value.value).symbolMembers[0].value.value));
	auto functionName = function->GetFunctionName()->GetResolvedName();
	if (functionName == "GetName")
	{
		return Value(functionObject->GetFunctionName());
	}
	else if (functionName == "AddCodeBlock")
	{
		auto codeBlockObject = static_cast<CodeBlock*>(std::get<InputReconstructionObject*>(
			std::get<AlgebraicValue>(functionArguments[0]->value).symbolMembers[0].value.value));
		functionObject->AddCodeBlock(codeBlockObject);
		return value;
	}

	return std::nullopt;
}

std::optional<Celeste::ir::inputreconstruction::Interpreter::Value> Celeste::ir::
	inputreconstruction::Interpreter::EvaluateMemberFunctionCompilerProvided_FunctionObject(
		const Value& value, inputreconstruction::Function* function,
		const std::vector<Value*>& functionArguments)
{
	auto functionObject =
		static_cast<inputreconstruction::Function*>(std::get<InputReconstructionObject*>(
			std::get<AlgebraicValue>(value.value).symbolMembers[0].value.value));
	auto functionName = function->GetFunctionName()->GetResolvedName();
	if (functionName == "GetName")
	{
		return Value(functionObject->GetFunctionName());
	}
	else if (functionName == "AddCodeBlock")
	{
		auto codeBlockObject = static_cast<CodeBlock*>(std::get<InputReconstructionObject*>(
			std::get<AlgebraicValue>(functionArguments[0]->value).symbolMembers[0].value.value));
		functionObject->AddCodeBlock(codeBlockObject);
		return value;
	}

	return std::nullopt;
}

std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
Celeste::ir::inputreconstruction::Interpreter::EvaluateMemberFunctionCompilerProvided_Array(
	Value& value, inputreconstruction::Function* function,
	const std::vector<Value*>& functionArguments)
{
	auto& valueVector = std::get<std::vector<Value>>(
		std::get<AlgebraicValue>(value.value).symbolMembers[0].value.value);
	auto functionName = function->GetFunctionName()->GetResolvedName();
	if (functionName == "push_back")
	{
		valueVector.emplace_back(functionArguments[0]->value);
	}
	else if (functionName == "emplace_back")
	{
		valueVector.emplace_back(ZeroValue(static_cast<MonomorphizedClass*>(function->GetParent())
											   ->GetTemplateArguments()[0]
											   ->GetAliasedType()));
	}
	else if (functionName == "GetIndex" || functionName == "operator[]")
	{
		if (std::get<int>(functionArguments[0]->value) >= valueVector.size())
		{
			return {};
		}

		return valueVector[std::get<int>(functionArguments[0]->value)];
	}
	else if (functionName == "AssignIndex")
	{
		if (std::get<int>(functionArguments[0]->value) >= valueVector.size())
		{
			return {};
		}

		valueVector[std::get<int>(functionArguments[0]->value)] = functionArguments[1]->value;
	}
	else if (functionName == "pop_back")
	{
		valueVector.pop_back();
	}
	else if (functionName == "size" || functionName == "Size")
	{
		return Value(valueVector.size());
	}

	return std::nullopt;
}

bool Celeste::ir::inputreconstruction::Interpreter::HasOptimizedBytecode(
	const std::variant<inputreconstruction::Function*, MutationGroup*, MonomorphizedFunction*>&
		function)
{
	if (std::holds_alternative<inputreconstruction::Function*>(function))
	{
		return std::get<inputreconstruction::Function*>(function)->HasOptimizedBytecode();
	}
	else if (std::holds_alternative<inputreconstruction::MutationGroup*>(function))
	{
		return std::get<inputreconstruction::MutationGroup*>(function)->HasOptimizedBytecode();
	}
	else if (std::holds_alternative<inputreconstruction::MonomorphizedFunction*>(function))
	{
		return std::get<inputreconstruction::MonomorphizedFunction*>(function)
			->HasOptimizedBytecode();
	}

	return false;
}

Celeste::ir::inputreconstruction::BytecodeRepresentation&
Celeste::ir::inputreconstruction::Interpreter::GetBytecode(
	const std::variant<inputreconstruction::Function*, MutationGroup*, MonomorphizedFunction*>&
		function)
{
	if (std::holds_alternative<inputreconstruction::Function*>(function))
	{
		return std::get<inputreconstruction::Function*>(function)->GetBytecode();
	}
	else if (std::holds_alternative<inputreconstruction::MutationGroup*>(function))
	{
		return std::get<inputreconstruction::MutationGroup*>(function)->GetBytecode();
	}
	else if (std::holds_alternative<inputreconstruction::MonomorphizedFunction*>(function))
	{
		return std::get<inputreconstruction::MonomorphizedFunction*>(function)->GetBytecode();
	}

	throw std::logic_error("Unsupported option");
}

std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
Celeste::ir::inputreconstruction::Interpreter::EvaluateBytecode(
	BytecodeRepresentation& bytecodeRepresentation, const std::vector<Value*>& arguments,
	const StackLifetime<MinimalStack>& stackLifetime, const std::optional<Value*>& value)
{
	// Bytecode evaluation is currently limited:
	// - No Pointers
	// - No Monomorphized Functions
	// - No Globals

	std::vector<BytecodeValue> memory;
	std::vector<std::size_t>& memory_map = bytecodeRepresentation.memory_map;
	for (std::size_t i = 0; i <= bytecodeRepresentation.maximalVariableSize; i++)
	{
		memory.emplace_back();
	}
	bytecode::BytecodePrinter::Print(bytecodeRepresentation);
	std::cout << "\n";

	std::size_t top_index = 0;

	auto getVariable = [&](std::size_t index) { return &memory[memory_map[index]]; };

	for (std::size_t i = 0; i < arguments.size(); i++)
	{
		// Arguments are referenced
		memory[i] = {arguments[i], true};
		top_index++;
	}
	std::size_t total_operations = 0;
	const auto instruction_size = bytecodeRepresentation.instructions.size();
	for (std::size_t instruction_counter = 1; instruction_counter < instruction_size;
		 instruction_counter++)
	{
		total_operations++;
		auto& instruction = bytecodeRepresentation.instructions[instruction_counter];
		switch (instruction.GetBytecodeType())
		{
		case BytecodeType::Noop: {
			// Do nothing
			break;
		}
		case BytecodeType::Alias: {
			auto aliased_variable_index = instruction.GetArgument<std::size_t>(0);
			auto target_index = instruction.GetArgument<std::size_t>(1);
			memory_map[aliased_variable_index] = memory_map[target_index];
			break;
		}
		case BytecodeType::ReferenceReuseAssign: {
			// Initially used as alias function, however, its usage is vastly more utile.
			auto aliased_variable_index = instruction.GetArgument<std::size_t>(0);
			auto target_index = instruction.GetArgument<std::size_t>(1);
			memory_map[aliased_variable_index] = memory_map[target_index];
			break;
		}
		case BytecodeType::Return: {
			auto return_value = getVariable(instruction.GetArgument<std::size_t>(0));
			if (return_value->IsReference())
			{
				return *(std::get<Value*>(return_value->value));
			}
			else if (return_value->IsValue())
			{
				return std::get<Value>(return_value->value);
			}
			else if (return_value->IsPointer())
			{
				return std::get<Value*>(return_value->value);
			}
			break;
		}
		case BytecodeType::ConstructorCall: {
			auto assigned_variable = instruction.GetArgument<std::size_t>(0);
			std::vector<Value*> function_arguments;
			for (std::size_t i = 1; i < instruction.GetArguments().size(); i++)
			{
				function_arguments.push_back(
					(*getVariable(instruction.GetArgument<std::size_t>(i))).GetReferenceToValue());
			}

			auto result = EvaluateConstructor(
				static_cast<inputreconstruction::Constructor*>(instruction.GetType()),
				function_arguments);

			if (result.has_value())
			{
				(*getVariable(assigned_variable)).Assign(result.value());
			}
			break;
		}
		case BytecodeType::MemberFunctionCall: {
			auto assigned_variable = instruction.GetArgument<std::size_t>(0);
			auto self = instruction.GetArgument<std::size_t>(1);
			std::vector<Value*> function_arguments;
			for (std::size_t i = 2; i < instruction.GetArguments().size(); i++)
			{
				function_arguments.push_back(
					(*getVariable(instruction.GetArgument<std::size_t>(i))).GetReferenceToValue());
			}

			auto result = EvaluateMemberFunctionOnValue(
				*getVariable(self)->GetReferenceToValue(),
				static_cast<inputreconstruction::Function*>(instruction.GetType()),
				function_arguments);

			if (result.has_value())
			{
				(*getVariable(assigned_variable)).Assign(result.value());
			}
			break;
		}
		case BytecodeType::FunctionCall: {
			auto assigned_variable = instruction.GetArgument<std::size_t>(0);
			std::vector<Value*> function_arguments;
			for (std::size_t i = 1; i < instruction.GetArguments().size(); i++)
			{
				function_arguments.push_back(
					(*getVariable(instruction.GetArgument<std::size_t>(i))).GetReferenceToValue());
			}

			auto result =
				EvaluateFunction(static_cast<inputreconstruction::Function*>(instruction.GetType()),
								 function_arguments);

			if (result.has_value())
			{
				(*getVariable(assigned_variable)).Assign(result.value());
			}
			break;
		}
		case BytecodeType::Assign: {
			auto lhs = instruction.GetArgument<std::size_t>(0);
			auto rhs = instruction.GetArgument<std::size_t>(1);
			(*getVariable(lhs)).Assign(*(*getVariable(rhs)).GetReferenceToValue());
			break;
		}
		case BytecodeType::Add:
		case BytecodeType::Minus:
		case BytecodeType::Multiply:
		case BytecodeType::Divide:
		case BytecodeType::And:
		case BytecodeType::Or:
		case BytecodeType::Greater:
		case BytecodeType::GreaterOrEqual:
		case BytecodeType::Less:
		case BytecodeType::LessOrEqual:
		case BytecodeType::Equal:
		case BytecodeType::NotEqual:
		case BytecodeType::Power: {
			auto assign = instruction.GetArgument<std::size_t>(0);
			auto lhs = instruction.GetArgument<std::size_t>(1);
			auto rhs = instruction.GetArgument<std::size_t>(2);
			auto function = instruction.GetArgument<inputreconstruction::Function*>(3);
			auto lhsVar = getVariable(lhs);
			auto rhsVar = getVariable(rhs);
			auto lhsVal = lhsVar->GetReferenceToValue();
			auto rhsVal = rhsVar->GetReferenceToValue();

			if (function == nullptr) // Auto deduce operator overload
			{
				auto getOperatorOverload = [&](Value* input, Value* argument,
											   BytecodeType bytecode) {
					inputreconstruction::Function* result = nullptr;
					auto lhsTypeId = GetType(*input);
					auto rhsTypeId = GetType(*argument);
					auto iterLhs = typeTable.typeIdMap.find(lhsTypeId);
					auto iterRhs = typeTable.typeIdMap.find(rhsTypeId);
					// assume it is valid type, otherwise it is ill-formed
					auto typeLhs = iterLhs->second.irType;
					auto typeRhs = iterRhs->second.irType;
					if (typeLhs->GetType() == inputreconstruction::Type::Class)
					{
						auto def = static_cast<Class*>(typeLhs);
						const auto strRepr = ConvertOperatorIntoString(
							ConvertBytecodeInstructionIntoOperator(bytecode));
						const auto args = std::vector<InputReconstructionObject*>{typeRhs};
						result = static_cast<inputreconstruction::Function*>(
							def->GetMember(strRepr, args));
					}
					else if (typeLhs->GetType() == inputreconstruction::Type::MonomorphizedClass)
					{
						auto def = static_cast<MonomorphizedClass*>(typeLhs);
						result = static_cast<inputreconstruction::Function*>(
							def->GetMember(ConvertOperatorIntoString(
											   ConvertBytecodeInstructionIntoOperator(bytecode)),
										   std::vector<InputReconstructionObject*>{typeRhs}));
					}
					else if (typeLhs->GetType() == inputreconstruction::Type::InlineClass)
					{
					}

					return result;
				};
				function = getOperatorOverload(lhsVal, rhsVal, instruction.GetBytecodeType());
				// To avoid re-calculating the function, the instruction is optimized
				instruction.SetArgument(3, function);
			}

			auto result = EvaluateMemberFunctionOnValue(*lhsVal, function, {rhsVal});
			if (result.has_value())
			{
				(*getVariable(assign)).Assign(result.value());
			}
			else
			{
				// Insert logic to reset variable
			}
			break;
		}
		case BytecodeType::Not: {
			break;
		}
		case BytecodeType::Integer: {
			auto assign_variable = instruction.GetArgument<std::size_t>(0);
			auto integer_value = instruction.GetArgument<Integer*>(1);
			(*getVariable(assign_variable)).Assign(integer_value->GetEvaluation());
			break;
		}
		case BytecodeType::Decimal: {
			auto assign_variable = instruction.GetArgument<std::size_t>(0);
			auto integer_value = instruction.GetArgument<Decimal*>(1);
			(*getVariable(assign_variable)).Assign(integer_value->GetEvaluation());
			break;
		}
		case BytecodeType::Text: {
			auto assign_variable = instruction.GetArgument<std::size_t>(0);
			auto integer_value = instruction.GetArgument<Text*>(1);
			(*getVariable(assign_variable)).Assign(integer_value->GetEvaluation());
			break;
		}
		case BytecodeType::InstructionJump: {
			instruction_counter = instruction.GetArgument<std::size_t>(0) - 1;
			break;
		}
		case BytecodeType::InstructionConditionalJump: {
			auto localVariableCheck = instruction.GetArgument<std::size_t>(0);
			auto trueJump = instruction.GetArgument<std::size_t>(1) - 1;
			auto falseJump = instruction.GetArgument<std::size_t>(2) - 1;
			auto var = std::get<Value>(getVariable(localVariableCheck)->value);
			if (var == true)
			{
				instruction_counter = trueJump;
			}
			else
			{
				instruction_counter = falseJump;
			}
			break;
		}
		case BytecodeType::ConditionalJump: {
			std::cout << "Not yet suported\n";
			break;
		}
		}
	}

	std::cout << "Total operations: " << total_operations << "\n";
	return std::nullopt;
}

Celeste::ir::inputreconstruction::Interpreter::MinimalStack::MinimalStack(Interpreter* interpreter_)
	: interpreter(interpreter_)
{
	symbols.reserve(32);	// Should be enough for most situations.
	symbolStack.reserve(6); // More is not often used.
	symbolStack.push_back(0);
}

Celeste::ir::inputreconstruction::Interpreter::MinimalStack::~MinimalStack()
{
}

Celeste::ir::inputreconstruction::Interpreter::MinimalStack::MinimalStack(
	MinimalStack&& rhs) noexcept
	: interpreter(rhs.interpreter),
	  symbols(std::move(rhs.symbols)),
	  symbolStack(std::move(rhs.symbolStack))
{
}

Celeste::ir::inputreconstruction::Interpreter::MinimalStack*
Celeste::ir::inputreconstruction::Interpreter::MinimalStack::OpenScope()
{
	symbolStack.push_back(0);
	return this;
}

void Celeste::ir::inputreconstruction::Interpreter::MinimalStack::CloseScope()
{
	auto iter = std::end(symbols) - GetCurrentStackSize();
	symbols.erase(iter, std::end(symbols));
	symbolStack.pop_back();
}

void Celeste::ir::inputreconstruction::Interpreter::MinimalStack::AddVariable(
	VariableDeclaration* object)
{
	auto name = Name(object->GetName());
	auto type = interpreter->GetType(object->GetVariableType());
	auto value = interpreter->Evaluate(object, object->GetExpressions());
	std::unique_ptr<Symbol> newSymbol;
	if (value.has_value())
	{
		newSymbol = std::make_unique<Symbol>(name, type, value.value());
	}
	else
	{
		newSymbol = std::make_unique<Symbol>(name, type);
	}
	symbols.push_back(std::move(newSymbol));

	GetCurrentStackSize() += 1;
}

void Celeste::ir::inputreconstruction::Interpreter::MinimalStack::AddVariable(
	std::unique_ptr<Symbol> symbol)
{
	symbols.push_back(std::move(symbol));
	GetCurrentStackSize() += 1;
}

void Celeste::ir::inputreconstruction::Interpreter::MinimalStack::AddVariable(
	const SymbolMember& value)
{
	symbols.push_back(std::make_unique<Symbol>(value.name, value.type, value.value));
	GetCurrentStackSize() += 1;
}

std::optional<Celeste::ir::inputreconstruction::Interpreter::Symbol*>
Celeste::ir::inputreconstruction::Interpreter::MinimalStack::GetSymbolMember(Name name)
{
	for (auto& symbol : symbols)
	{
		if (symbol->name == name)
		{
			return symbol.get();
		}
	}

	return std::nullopt;
}

Celeste::ir::inputreconstruction::Interpreter::MinimalStack*
Celeste::ir::inputreconstruction::Interpreter::MinimalStack::GetCurrentScope()
{
	return this;
}

std::size_t& Celeste::ir::inputreconstruction::Interpreter::MinimalStack::GetCurrentStackSize()
{
	return *std::rbegin(symbolStack);
}

Celeste::ir::inputreconstruction::Interpreter::Type::Type(TypeId type_, Name name_,
														  InputReconstructionObject* irType_)
	: type(type_),
	  name(name_),
	  irType(irType_)
{
}

std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
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

		if (lhsType.value()->GetType() == inputreconstruction::Type::TypeExplicitAlias)
		{
			auto forwardedType =
				static_cast<TypeExplicitAlias*>(lhsType.value())->GetAliasedForwardedType();
			if (forwardedType.has_value() &&
				static_cast<TypeConstruct*>(rhsType)->Equal(forwardedType.value()))
			{
				if (CopyByValue(forwardedType.value()))
				{
					return Evaluate(rhs);
				}
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
		auto result =
			currentStack->GetCurrentScope()->GetSymbolMember(variableDeclaration->GetName());

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
		auto result = currentStack->GetCurrentScope()->GetSymbolMember(functionArgument->GetName());

		if (result.has_value())
		{
			return result.value();
		}
	}

	return std::nullopt;
}

std::optional<Celeste::ir::inputreconstruction::Interpreter::Symbol*>
Celeste::ir::inputreconstruction::Interpreter::GetSymbolMember(const std::string& symbolName,
															   std::optional<Value*> valueReference)
{
	if (!stackOfOperationStacks.empty())
	{
		auto& currentStack = *std::rbegin(stackOfOperationStacks);
		auto result = currentStack->GetCurrentScope()->GetSymbolMember(symbolName);

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
	if (!resolvedIr.has_value() || resolvedIr.has_value() && resolvedIr.value() == nullptr)
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
	else
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

		return std::nullopt;
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
						"Variable was not initialized while this was a requirement at the "
						"given "
						"context.");
				}
				auto& valDerefValue = valDeref->value.value();
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

				auto currentNextNameValue = currentNextNameResolve.value();
				auto currentNextNameAccess =
					currentNextNameValue->GetSymbolAccessesIncludingHidden();
				auto currentNextNameAccessFront = currentNextNameAccess[0];
				auto& currentNextNameFunctionArguments =
					currentNextNameAccessFront->GetFunctionArguments();
				auto [functionArguments, functionArgumentsPtr] =
					getFunctionArguments(currentNextNameFunctionArguments);

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

std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
Celeste::ir::inputreconstruction::Interpreter::Evaluate(const std::unique_ptr<Expression>& rhs,
														std::optional<Value*> valueReference)
{
	return Evaluate(rhs.get(), valueReference);
}

std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
Celeste::ir::inputreconstruction::Interpreter::Evaluate(Expression* rhs,
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
				return std::optional<Value>(std::nullopt);
			}
			else if (std::holds_alternative<std::unique_ptr<CodeBlock>>(lhsValue))
			{
				auto& codeBlock = std::get<std::unique_ptr<CodeBlock>>(lhsValue);
				auto codeBlockType = evaluatedFile.value()
										 ->GetProject()
										 ->GetFile("Celeste/CodeBlock.ce")
										 ->GetClass("CodeBlock");
				auto irObjectType = evaluatedFile.value()
										->GetProject()
										->GetFile("Celeste/Object.ce")
										->GetClass("Object");
				auto algebriacValue = AlgebraicValue(
					typeTable.GetType(codeBlockType.value()),
					{SymbolMember({"object"}, typeTable.GetType(irObjectType.value()),
								  Value(codeBlock.get()))});
				return std::optional<Value>(Value(algebriacValue));
			}
			else if (std::holds_alternative<std::unique_ptr<SymbolReferenceCall>>(lhsValue))
			{
				return EvaluateSymbolReferenceCall(
					std::get<std::unique_ptr<SymbolReferenceCall>>(lhsValue).get(), valueReference);
			}
			else if (std::holds_alternative<std::unique_ptr<Tuple>>(lhsValue))
			{
				// Unsupported
				return std::optional<Value>(std::nullopt);
			}
			else if (std::holds_alternative<std::unique_ptr<Integer>>(lhsValue))
			{
				return std::optional<Value>(
					std::get<std::unique_ptr<Integer>>(lhsValue)->GetEvaluation());
			}
			else if (std::holds_alternative<std::unique_ptr<Decimal>>(lhsValue))
			{
				return std::optional<Value>(
					std::get<std::unique_ptr<Decimal>>(lhsValue)->GetEvaluation());
			}
			else if (std::holds_alternative<std::unique_ptr<Text>>(lhsValue))
			{
				return std::optional<Value>(
					std::get<std::unique_ptr<Text>>(lhsValue)->GetEvaluation());
			}
		}
		else if (std::holds_alternative<std::unique_ptr<Expression>>(someValue))
		{
			return std::optional<Value>(
				Evaluate(std::get<std::unique_ptr<Expression>>(someValue), valueReference));
		}

		// Error
		return std::optional<Value>(std::nullopt);
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
				return std::optional<Value>(std::nullopt);
			}
			else if (std::holds_alternative<std::unique_ptr<Expression>>(someValue))
			{
				return Evaluate(std::get<std::unique_ptr<Expression>>(someValue), valueReference);
			}
			else if (std::holds_alternative<std::unique_ptr<inputreconstruction::Value>>(someValue))
			{
				return extractValue(someValue);
			}
			else
			{
				return std::optional<Value>(std::nullopt);
			}
		};

		std::optional<Value> lhsValue = getValue(rhs->GetLhs());
		std::optional<Value> rhsValue = getValue(rhs->GetRhs());

		auto type = rhs->DeduceType();
		std::variant<std::monostate, Class*, MonomorphizedClass*> classObject;
		if (type->GetType() == inputreconstruction::Type::Class)
		{
			classObject = static_cast<Class*>(type);
		}
		else if (type->GetType() == inputreconstruction::Type::MonomorphizedClass)
		{
			classObject = static_cast<MonomorphizedClass*>(type);
		}
		else if (type->GetType() == inputreconstruction::Type::TypeConstruct)
		{
			auto typeConstruct = static_cast<TypeConstruct*>(type);
			if (typeConstruct->Trivial())
			{
				auto res = typeConstruct->GetCoreType().value();
				if (res->GetType() == inputreconstruction::Type::Class)
				{
					classObject = static_cast<Class*>(res);
				}
				else if (res->GetType() == inputreconstruction::Type::MonomorphizedClass)
				{
					classObject = static_cast<MonomorphizedClass*>(res);
				}
			}
			else
			{
				throw std::logic_error("Unimplemented feature, critical error");
			}
		}

		if (!lhsValue.has_value())
		{
			std::cout << "Applying some operation upon void type is invalid\n";
			throw std::logic_error("Invalid operation");
		}

		if (!std::holds_alternative<std::monostate>(classObject))
		{
			InputReconstructionObject* function;
			if (std::holds_alternative<Class*>(classObject))
			{
				function = std::get<Class*>(classObject)
							   ->GetMember(rhs->GetOperatorFunctionName().value(), rhs->GetRhs());
			}
			else
			{
				function = std::get<MonomorphizedClass*>(classObject)
							   ->GetMember(rhs->GetOperatorFunctionName().value(), rhs->GetRhs());
			}
			if (function->GetType() == inputreconstruction::Type::Function)
			{
				if (rhsValue.has_value())
				{
					auto returnValue = EvaluateMemberFunctionOnValue(
						lhsValue.value(), static_cast<inputreconstruction::Function*>(function),
						{&rhsValue.value()});
					if (returnValue.has_value())
					{
						return returnValue.value();
					}
				}
				else
				{
					auto returnValue = EvaluateMemberFunctionOnValue(
						lhsValue.value(), static_cast<inputreconstruction::Function*>(function),
						{});
					if (returnValue.has_value())
					{
						return returnValue.value();
					}
				}

				// If it does not return anything (the operator overload), return a zero value
				return ZeroValue(rhs);
			}
			else
			{
				// Error
				return std::nullopt;
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

	for (auto& [accessibility, member] : class_->GetMembers())
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

void Celeste::ir::inputreconstruction::Interpreter::TypeTable::AddMonomorphizedClass(
	MonomorphizedClass* class_)
{
	auto iter = typePointerMap.find(class_);
	if (iter != typePointerMap.end())
	{
		// It is already known, thus skip it.
		return;
	}

	for (auto& inheritBase : class_->GetInheritedBases())
	{
		auto base = inheritBase->GetLinkedType()->GetResolvedLinkedIr().value();
		if (base->GetType() == inputreconstruction::Type::Class)
		{
			AddClass(static_cast<inputreconstruction::Class*>(base));
		}
		else if (base->GetType() == inputreconstruction::Type::MonomorphizedClass)
		{
			AddMonomorphizedClass(static_cast<inputreconstruction::MonomorphizedClass*>(base));
		}
	}

	auto newTypeId = TypeId(typePointerMap.size());
	auto newTypeName = Name(class_->GetFullyQualifiedName());
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

	for (auto& [accessibility, member] : class_->GetMembers())
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
	case inputreconstruction::Type::MonomorphizedClass: {
		auto classObject = static_cast<inputreconstruction::MonomorphizedClass*>(parent);
		AddMonomorphizedClass(classObject);
		break;
	}
	}

	auto retry = typePointerMap.find(parent);
	if (retry != typePointerMap.end())
	{
		return retry->second.type;
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

	switch (parent->GetParent()->GetType())
	{
	case inputreconstruction::Type::Class: {
		auto classObject = static_cast<inputreconstruction::Class*>(parent->GetParent());
		AddClass(classObject);
		break;
	}
	case inputreconstruction::Type::MonomorphizedClass: {
		auto classObject =
			static_cast<inputreconstruction::MonomorphizedClass*>(parent->GetParent());
		AddMonomorphizedClass(classObject);
		break;
	}
	}

	auto retry = typePointerMap.find(parent->GetParent());
	if (retry != typePointerMap.end())
	{
		return retry->second.type;
	}

	throw std::runtime_error("Some error occured that failed the type recognition system.");
}

Celeste::ir::inputreconstruction::Interpreter::TypeTable::TypeTable(Interpreter* interpreter_)
	: interpreter(interpreter_)
{
}

Celeste::ir::inputreconstruction::Interpreter::TypeId
Celeste::ir::inputreconstruction::Interpreter::TypeTable::GetIntegerType()
{
	if (cacheIntegerType.has_value())
	{
		return cacheIntegerType.value();
	}

	// Integer is always available
	cacheIntegerType = typeNameMap.find(Name{"int"})->second.type;
	return cacheIntegerType.value();
}

Celeste::ir::inputreconstruction::Interpreter::TypeId
Celeste::ir::inputreconstruction::Interpreter::TypeTable::GetTextType()
{
	if (cacheTextType.has_value())
	{
		return cacheTextType.value();
	}

	// Text is always available
	cacheTextType = typeNameMap.find(Name{"text"})->second.type;
	return cacheTextType.value();
}

Celeste::ir::inputreconstruction::Interpreter::TypeId
Celeste::ir::inputreconstruction::Interpreter::TypeTable::GetDecimalType()
{
	if (cacheDecimalType.has_value())
	{
		return cacheDecimalType.value();
	}

	// Decimal is always available
	cacheDecimalType = typeNameMap.find(Name{"decimal"})->second.type;
	return cacheDecimalType.value();
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
	else if (parent->GetType() == inputreconstruction::Type::MonomorphizedClass)
	{
		auto classObject = static_cast<inputreconstruction::MonomorphizedClass*>(parent);
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
		else if (parent->GetType() == inputreconstruction::Type::MonomorphizedClass)
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

void Celeste::ir::inputreconstruction::Interpreter::FunctionTable::RegisterType(
	MonomorphizedClass* classObject)
{
	auto typeId = interpreter->typeTable.GetType(classObject);
	auto iterTestAlreadyRegister = mappingTypeWithMemberFunctions.find(typeId);
	if (iterTestAlreadyRegister != mappingTypeWithMemberFunctions.end())
	{
		return;
	}

	auto UnionizeMemberFunctionsFromBases = [&](inputreconstruction::MonomorphizedClass* type_) {
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
	auto UnionizeMemberFunctionsFromBasesVirtualSetup = [&](inputreconstruction::MonomorphizedClass*
																type_) {
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

std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
Celeste::ir::inputreconstruction::Interpreter::Interpret(InputReconstructionObject* entryPoint)
{
	evaluatedFile = entryPoint->GetFile();

	// Set up Global Variables and Class Table
	SetUpGlobalInformation(entryPoint);

	globalTable.EvaluateFileInheritance();
	globalTable.EvaluateUnEvaluatedGlobals();

	// Reset Processed Files
	processedFiles.clear();
	if (entryPoint->GetType() == inputreconstruction::Type::Root)
	{
		if (groupType == GroupType::CodeBlock)
		{
			// Run Code Mutation Blocks
			for (auto object : entryPoint->GetScope())
			{
				if (object->GetType() != inputreconstruction::Type::MutationGroup)
				{
					continue;
				}

				auto mutationGroup = static_cast<MutationGroup*>(object);
				EvaluateMutationGroup(mutationGroup);
			}
		}
	}
	else if (entryPoint->GetType() == inputreconstruction::Type::Function)
	{
		auto functionObject = static_cast<inputreconstruction::Function*>(entryPoint);
		return EvaluateFunction(functionObject, {});
	}

	return std::nullopt;
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
			if (groupType == GroupType::CodeBlock && importObject->AvailableAtCodeTime())
			{
				globalTable.FileInheritsFile(file, targetFile);

				SetUpGlobalInformation(targetFile->GetRoot());
			}
			else if (groupType == GroupType::Standard && !importObject->AvailableAtCodeTime())
			{
				globalTable.FileInheritsFile(file, targetFile);

				SetUpGlobalInformation(targetFile->GetRoot());
			}
			break;
		}
		case inputreconstruction::Type::Class: {
			auto classObject = static_cast<Class*>(object);
			typeTable.AddClass(classObject);
			break;
		}
		case inputreconstruction::Type::MonomorphizedClass: {
			auto classObject = static_cast<MonomorphizedClass*>(object);
			typeTable.AddMonomorphizedClass(classObject);
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
