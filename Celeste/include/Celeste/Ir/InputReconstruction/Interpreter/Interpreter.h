#ifndef CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_INTERPRETER_H
#define CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_INTERPRETER_H

#include "Celeste/Ir/InputReconstruction/Computation/VariableDeclaration.h"
#include "Celeste/Ir/InputReconstruction/Meta/GroupType.h"
#include "Celeste/Ir/InputReconstruction/Structure/Class.h"
#include "Celeste/Ir/InputReconstruction/Structure/Enumeration.h"
#include "Celeste/Ir/InputReconstruction/Structure/MutationGroup.h"
#include <map>
#include <optional>
#include <set>
#include <string>
#include <variant>
#include <vector>

namespace Celeste::ir::inputreconstruction
{
	class InputReconstructionObject;
	class File;

	class Interpreter
	{
	private:
		// Used to manage lifetimes of stacks by bounding them to the evaluation context.
		struct StackLifetime;

	private:
		struct Symbol;
		struct SymbolMember;
		struct Name;
		struct Value;

		struct TypeId
		{
			std::size_t id;

			TypeId(std::size_t id_);
			~TypeId() = default;

			bool operator==(const TypeId& rhs) const
			{
				if (this == &rhs)
				{
					return true;
				}

				return id == rhs.id;
			}

			bool operator!=(const TypeId& rhs) const
			{
				return !operator==(rhs);
			}

			bool operator<(const TypeId& rhs) const
			{
				return id < rhs.id;
			}

			bool operator>(const TypeId& rhs) const
			{
				return id > rhs.id;
			}

			bool operator<=(const TypeId& rhs) const
			{
				return id <= rhs.id;
			}

			bool operator>=(const TypeId& rhs) const
			{
				return id >= rhs.id;
			}
		};

		struct AlgebraicValue
		{
			TypeId linkedType;
			std::vector<AlgebraicValue> bases;
			std::vector<SymbolMember> symbolMembers;

			AlgebraicValue(TypeId linkedType_, std::vector<SymbolMember> symbolMembers_ = {})
				: linkedType(linkedType_),
				  symbolMembers(symbolMembers_)
			{
			}

			void AddBase(AlgebraicValue base_)
			{
				bases.push_back(base_);
			}

			void AddSymbolMember(SymbolMember symbolMember_)
			{
				symbolMembers.push_back(symbolMember_);
			}

			std::optional<SymbolMember*> GetSymbol(const std::string& nameReference);
			void Print(std::size_t depth = 0);
		};

		struct Value
		{
			std::variant<int, double, std::string, AlgebraicValue, Value*,
						 InputReconstructionObject*, std::vector<Value>, File*>
				value;

			Value(const std::variant<int, double, std::string, AlgebraicValue, Value*,
									 InputReconstructionObject*, std::vector<Value>, File*>& value_)
				: value(value_)
			{
			}

			Value(int value_) : value(value_)
			{
			}

			Value(double value_) : value(value_)
			{
			}

			Value(std::string value_) : value(value_)
			{
			}

			Value(AlgebraicValue value_) : value(value_)
			{
			}

			Value(Value* referenceValue_) : value(referenceValue_)
			{
			}

			Value(InputReconstructionObject* irReference) : value(irReference)
			{
			}

			Value(const std::vector<Value>& vector) : value(vector)
			{
			}

			Value(File* file_) : value(file_)
			{
			}

			bool operator==(bool rhs)
			{
				if (std::holds_alternative<int>(value))
				{
					return (std::get<int>(value) >= 1) == rhs;
				}

				return false == rhs;
			}

			std::optional<Celeste::ir::inputreconstruction::Interpreter::TypeId> GetType();
		};

		struct Name
		{
			Name() = default;

			Name(std::string name_);
			Name(NameReference* name_);

			void AddName(std::string name_);
			void AddName(NameReference* name_);

			std::set<std::string> names;

			bool operator==(const Name& rhs) const
			{
				if (this == &rhs)
				{
					return true;
				}

				return names == rhs.names;
			}

			bool operator!=(const Name& rhs) const
			{
				return !operator==(rhs);
			}

			bool operator<(const Name& rhs) const
			{
				return names < rhs.names;
			}

			bool operator>(const Name& rhs) const
			{
				return names > rhs.names;
			}

			bool operator<=(const Name& rhs) const
			{
				return names <= rhs.names;
			}

			bool operator>=(const Name& rhs) const
			{
				return names >= rhs.names;
			}
		};

		struct SymbolMember
		{
			Name name;
			TypeId type;

			Value value;

			SymbolMember(Name name_, TypeId type_, Value value_)
				: name(name_),
				  type(type_),
				  value(value_)
			{
			}

			~SymbolMember() = default;
		};

		struct Symbol
		{
			bool isGlobal = false;
			Name name;
			TypeId type;

			std::optional<Value> value;

			Symbol(Name name_, TypeId type_) : name(name_), type(type_)
			{
			}

			Symbol(Name name_, TypeId type_, Value value_) : name(name_), type(type_), value(value_)
			{
			}

			Symbol(bool isGlobal_, Name name_, TypeId type_)
				: isGlobal(isGlobal_),
				  name(name_),
				  type(type_)
			{
			}

			Symbol(bool isGlobal_, Name name_, TypeId type_, Value value_)
				: isGlobal(isGlobal_),
				  name(name_),
				  type(type_),
				  value(value_)
			{
			}
		};

		struct GlobalVariableMember : public Symbol
		{
			InputReconstructionObject* irObject = nullptr;

			GlobalVariableMember(Name name_, TypeId type_) : Symbol(true, name_, type_)
			{
			}

			GlobalVariableMember(Name name_, TypeId type_, Value value_)
				: Symbol(true, name_, type_, value_)
			{
			}
		};

		// Important Note:
		// First add globals
		// Then set the File inheritance relations as encountered
		struct GlobalVariableTable
		{
		private:
			struct FileVertex;
			struct FileSymbolPool;

		public:
			// Contains a mapping between referenced Object and Global Variable
			std::map<InputReconstructionObject*, std::unique_ptr<GlobalVariableMember>>
				globalVariableTable;

			// Due to a Circular Global Scope Policy, it can occur that global variables
			// Are not evaluated as they depend on not yet declared variables.
			// Thus all Globals are first declared and then evaluated.
			std::vector<GlobalVariableMember*> unEvaluatedGlobalVariables;

			std::optional<GlobalVariableMember*>
			GetGlobal(File* file, InputReconstructionObject* requestedGlobal);

			// Note File is deduced from the given Object
			void AddVariable(VariableDeclaration* variableDeclaration);

			FileVertex* GetFileVertex(File* sub);
			FileSymbolPool* GetFilePool(File* file);

			// If File A imports File B
			// Then File A has access to all Globals in File B
			void FileInheritsFile(File* sub, File* base);

			// As File Inheritance is non trivial
			// This function is used to evaluate the inheritance relations
			void EvaluateFileInheritance();

			void EvaluateUnEvaluatedGlobals();

			Interpreter* interpreter = nullptr;

			GlobalVariableTable(Interpreter* interpreter_);
			~GlobalVariableTable() = default;

		private:
			// These member fields are utilized for controlling file cyclic imports.
			// The logic utilizes graphs for detecting cycles of vertices and combines those
			// vertices into a single vertex
			//
			// This procedure results in a graph with no cycles, meaning that the file structure can
			// be Parsed in linear time.

			struct FileSymbolPool
			{
				std::set<InputReconstructionObject*> fileLocalSymbols;
			};

			struct FileVertex
			{
				File* file;
				std::optional<std::size_t> index;
				std::optional<std::size_t> lowLink;
				bool onStack = false;

				// Data

				std::set<FileSymbolPool*> internalPools;
				std::set<FileVertex*> linkedPools;
				std::set<InputReconstructionObject*> accessibleObjects;
			};

			std::vector<std::unique_ptr<FileVertex>> vertices;
			std::vector<std::unique_ptr<FileSymbolPool>> pools;
			std::map<File*, FileSymbolPool*> mapFileWithPool;

			// Contains a mapping between File and Accessible Global Variables
			std::map<File*, FileVertex*> mapFileWithInitialVertex;

			std::set<std::pair<FileVertex*, FileVertex*>> edges;

			std::size_t index = 0;
			std::vector<FileVertex*> vertexStack;
			std::vector<std::set<FileVertex*>> strongConnectedSets;

			void strongconnect(FileVertex* value);
			void ProcessVertex(FileVertex* value);

			void OptimizeFilePoolsUsingStrongConnectedSets();
		};

		struct Stack
		{
			Interpreter* interpreter = nullptr;

			std::vector<std::unique_ptr<Symbol>> symbols;

			std::optional<Interpreter::Stack*> parent;
			std::optional<std::unique_ptr<Interpreter::Stack>> nextDepthScope;
			Interpreter::Stack* currentScope = this;

			Stack(Interpreter* interpreter_);
			~Stack();

			Stack(Stack&& rhs) noexcept;
			Stack(const Stack&) = delete;

			Stack* OpenScope();

			void CloseScope();

			void AddVariable(VariableDeclaration* object);
			void AddVariable(std::unique_ptr<Symbol> symbol);
			void AddVariable(const SymbolMember& value);

			std::optional<Symbol*> GetSymbolMember(Name name);
		};

		struct Type
		{
			TypeId type;
			Name name;
			InputReconstructionObject* irType;

			Type(TypeId type_, Name name_, InputReconstructionObject* irType_);
			~Type() = default;
		};

		struct TypeTable
		{
			std::map<TypeId, Type> typeIdMap;
			std::map<Name, Type> typeNameMap;
			std::map<InputReconstructionObject*, Type> typePointerMap;

			void AddClass(Class* class_);
			void AddEnumeration(Enumeration* enumeration);
			TypeId GetType(InputReconstructionObject* parent);
			TypeId GetTypeFromConstructor(inputreconstruction::Constructor* parent);

			Interpreter* interpreter;

			TypeTable(Interpreter* interpreter_);
		};

		enum struct FunctionType
		{
			Unknown,

			Function,
			MemberFunction,
			Constructor,
		};

		struct FunctionArgument
		{
			TypeId type;
			Name name;
		};

		struct Function
		{
			InputReconstructionObject* irObject;

			FunctionType functionType = FunctionType::Unknown;

			std::vector<FunctionArgument> functionArguments;

			Function(InputReconstructionObject* irObject_, FunctionType functionType_);
		};
		using Constructor = Function;
		using MemberFunction = Function;

		struct FunctionTable
		{
			std::map<InputReconstructionObject*, std::unique_ptr<Function>> globalFunctionTable;
			std::map<InputReconstructionObject*, std::unique_ptr<Constructor>> constructorTable;
			std::map<InputReconstructionObject*, std::unique_ptr<MemberFunction>>
				memberFunctionTable;

			// For any Function this mapping links the Function in combination with the Value to the
			// appropiate Member Function. E.g. you have two member functions A and B that are part
			// of class 'One' Suppose we have a subtype that overrides function A lets alias it as
			// A', this override is part of class 'Two'.
			// Also suppose we have a subtype for class 'Two' named 'Three'
			// Then the following mapping will be
			// constructed:
			//
			// mapping(A, 'One')   -> A
			// mapping(A, 'Two')   -> A'
			// mapping(A, 'Three') -> A'
			// mapping(B, 'One')   -> B
			// mapping(B, 'Two')   -> B
			// mapping(B, 'Three') -> B
			//
			std::map<std::pair<InputReconstructionObject*, TypeId>, InputReconstructionObject*>
				memberFunctionMapping;

			std::map<TypeId, std::set<InputReconstructionObject*>> mappingTypeWithMemberFunctions;

			void AddFunction(InputReconstructionObject* functionObject);

			void RegisterType(Class* classObject);

			std::optional<Function*> GetFunction(InputReconstructionObject* functionObject,
												 std::optional<TypeId> typeId = std::nullopt);

			Interpreter* interpreter;

			FunctionTable(Interpreter* interpreter_);
		};

		std::vector<File*> processedFiles;

	private:
		GroupType groupType;
		// Global Variables Table
		GlobalVariableTable globalTable;

		// Function Table
		FunctionTable functionTable;

		// Contains a stack of Operation Stacks
		// The latest stack represents the current Operation Stack
		// All other stacks should be seen as not reachable in the current context
		std::vector<std::unique_ptr<Stack>> stackOfOperationStacks;

		// Contains A List of Reachable Types.
		TypeTable typeTable;

		std::optional<File*> evaluatedFile;

	public:
		Interpreter(GroupType groupType_);
		~Interpreter();

	public:
		void Interpret(InputReconstructionObject* entryPoint);
		void SetUpGlobalInformation(InputReconstructionObject* entryPoint);

	public:
		TypeId GetType(TypeConstruct* typeConstruct);
		TypeId GetType(std::optional<InputReconstructionObject*> object);

		std::variant<int, double, std::string,
					 Celeste::ir::inputreconstruction::Interpreter::AlgebraicValue,
					 Celeste::ir::inputreconstruction::Interpreter::Value*,
					 Celeste::ir::inputreconstruction::InputReconstructionObject*,
					 std::vector<Celeste::ir::inputreconstruction::Interpreter::Value>,
					 Celeste::ir::inputreconstruction::File*>
		ZeroValue(InputReconstructionObject* type);

		std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
		Evaluate(VariableDeclaration* object,
				 const std::vector<std::unique_ptr<Expression>>& expressions);
		std::optional<Celeste::ir::inputreconstruction::Interpreter::Symbol*>
		GetGlobal(Celeste::ir::inputreconstruction::VariableDeclaration* variableDeclaration);

		std::optional<std::variant<Celeste::ir::inputreconstruction::Interpreter::Symbol*,
								   Celeste::ir::inputreconstruction::Interpreter::SymbolMember*,
								   Celeste::ir::inputreconstruction::Interpreter::SymbolMember,
								   Celeste::ir::inputreconstruction::Interpreter::Value>>
		GetSymbolMember(VariableDeclaration* variableDeclaration,
						std::optional<Value*> valueReference = std::nullopt);
		std::optional<std::variant<Celeste::ir::inputreconstruction::Interpreter::Symbol*,
								   Celeste::ir::inputreconstruction::Interpreter::SymbolMember*,
								   Celeste::ir::inputreconstruction::Interpreter::SymbolMember,
								   Celeste::ir::inputreconstruction::Interpreter::Value>>
		GetSymbolMember(inputreconstruction::FunctionArgument* functionArgument,
						std::optional<Value*> valueReference = std::nullopt);

		std::optional<Celeste::ir::inputreconstruction::Interpreter::Symbol*>
		GetSymbolMember(const std::string& symbolName,
						std::optional<Value*> valueReference = std::nullopt);

		std::optional<std::variant<Celeste::ir::inputreconstruction::Interpreter::Symbol*,
								   Celeste::ir::inputreconstruction::Interpreter::SymbolMember*,
								   Celeste::ir::inputreconstruction::Interpreter::SymbolMember,
								   Celeste::ir::inputreconstruction::Interpreter::Value>>
		GetSymbolMember(NameReference* lhs, std::optional<Value*> valueReference = std::nullopt);

		std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
		Evaluate(const std::unique_ptr<Expression>& rhs,
				 std::optional<Value*> valueReference = std::nullopt);
		std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
		Evaluate(Expression* rhs, std::optional<Value*> valueReference = std::nullopt);

		bool PolymorphismEquality(InputReconstructionObject* lhsType,
								  InputReconstructionObject* rhsType);

		bool CopyByValue(InputReconstructionObject* object);
		bool MatchingConstructor(InputReconstructionObject* lhs,
								 const std::vector<std::unique_ptr<Expression>>& expressions);
		bool
		MatchingImplicitlyConstructor(InputReconstructionObject* lhs,
									  const std::vector<std::unique_ptr<Expression>>& expressions);

		std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
		EvaluateMemberFunctionOnValue(Value& value, inputreconstruction::Function* function,
									  std::vector<Value*> functionArguments);
		std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
		EvaluateConstructor(inputreconstruction::Constructor* function,
							std::vector<Value*> functionArguments);
		std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
		EvaluateFunction(inputreconstruction::Function* function,
						 std::vector<Value*> functionArguments);

		std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
		EvaluateMonomorphizedMemberFunctionOnValue(
			Value& value, inputreconstruction::MonomorphizedFunction* function,
			std::vector<Value*> functionArguments);
		std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
		EvaluateMonomorphizedFunction(inputreconstruction::MonomorphizedFunction* function,
									  std::vector<Value*> functionArguments);
		std::optional<Value>
		EvaluateSymbolReferenceCall(SymbolReferenceCall* symbolReferenceCall,
									std::optional<Value*> valueReference = std::nullopt);
		std::optional<Celeste::ir::inputreconstruction::Interpreter::Value>
		EvaluateMutationGroup(MutationGroup* mutationGroup);

	private:
		std::optional<Celeste::ir::inputreconstruction::Interpreter::Value> EvaluateSomeFunction(
			std::variant<inputreconstruction::Function*, inputreconstruction::MutationGroup*,
						 inputreconstruction::MonomorphizedFunction*>
				function,
			std::vector<Value*> functionArguments, StackLifetime& stackLifetime,
			std::optional<Value*> valueReference = std::nullopt);

		std::vector<Value>
		GetValueListFromExpressionList(std::vector<std::unique_ptr<Expression>>& expressionList,
									   std::optional<Value*> valueReference = std::nullopt);

	private:
		std::optional<Value>
		EvaluateMemberFunctionCompilerProvided_Mutate(const Value& value,
													  inputreconstruction::Function* function,
													  const std::vector<Value*>& functionArguments);
		std::optional<Value> EvaluateMemberFunctionCompilerProvided_ClassObject(
			const Value& value, inputreconstruction::Function* function,
			const std::vector<Value*>& functionArguments);
		std::optional<Value> EvaluateMemberFunctionCompilerProvided_MemberFunctionObject(
			const Value& value, inputreconstruction::Function* function,
			const std::vector<Value*>& functionArguments);
		std::optional<Value> EvaluateMemberFunctionCompilerProvided_FunctionObject(
			const Value& value, inputreconstruction::Function* function,
			const std::vector<Value*>& functionArguments);
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_INTERPRETER_H
