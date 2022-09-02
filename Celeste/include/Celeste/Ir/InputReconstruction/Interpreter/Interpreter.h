#ifndef CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_INTERPRETER_H
#define CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_INTERPRETER_H

#include "Celeste/Ir/InputReconstruction/Computation/VariableDeclaration.h"
#include "Celeste/Ir/InputReconstruction/Meta/GroupType.h"
#include "Celeste/Ir/InputReconstruction/Structure/Class.h"
#include "Celeste/Ir/InputReconstruction/Structure/Enumeration.h"
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
		struct Symbol;
		struct SymbolMember;
		struct Name;
		struct Value;

		struct TypeId
		{
			std::size_t id;

			TypeId(std::size_t id_);
			~TypeId() = default;
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
		};

		struct Value
		{
			std::variant<int, double, std::string, AlgebraicValue> value;

			Value(std::variant<int, double, std::string, AlgebraicValue> value_) : value(value_)
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
		};

		struct Name
		{
			Name() = default;

			Name(NameReference* name_);

			void AddName(NameReference* name_);

			std::set<std::string> names;

			bool operator==(const Name& rhs)
			{
				if (this == &rhs)
				{
					return true;
				}

				return names == rhs.names;
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
			Name name;
			TypeId type;

			std::optional<Value> value;

			Symbol(Name name_, TypeId type_) : name(name_), type(type_)
			{
			}

			Symbol(Name name_, TypeId type_, Value value_) : name(name_), type(type_), value(value_)
			{
			}
		};

		struct GlobalVariableMember
		{
			InputReconstructionObject* irObject;
			Name name;
			TypeId type;

			std::optional<Value> symbolValue;
		};

		// Important Note:
		// First add globals
		// Then set the File inheritance relations as encountered
		struct GlobalVariableTable
		{
			// Contains a mapping between referenced Object and Global Variable
			std::map<InputReconstructionObject*, std::unique_ptr<GlobalVariableMember>>
				globalVariableTable;

			// Contains a mapping between File and Accessible Global Variables
			std::map<File*, std::set<InputReconstructionObject*>> globalFileAccessibilityTable;

			// Due to a Circular Global Scope Policy, it can occur that global variables
			// Are not evaluated as they depend on not yet declared variables.
			// Thus all Globals are first declared and then evaluated.
			std::vector<GlobalVariableMember*> unEvaluatedGlobalVariables;

			std::optional<GlobalVariableMember*>
			GetGlobal(File* file, InputReconstructionObject* requestedGlobal);

			// Note File is deduced from the given Object
			void AddVariable(VariableDeclaration* variableDeclaration);

			// If File A imports File B
			// Then File A has access to all Globals in File B
			void FileInheritsFile(File* sub, File* base);

			// As File Inheritance is non trivial
			// This function is used to evaluate the inheritance relations
			void EvaluateFileInheritance();

			void EvaluateUnEvaluatedGlobals();

			GlobalVariableTable() = default;
			~GlobalVariableTable() = default;
		};

		struct Stack
		{
			Interpreter* interpreter = nullptr;

			std::vector<std::unique_ptr<Symbol>> symbols;

			std::optional<Stack*> parent;
			std::optional<Stack> nextDepthScope;
			Stack* currentScope = this;

			Stack(Interpreter* interpreter_);
			~Stack() = default;

			Stack* OpenScope();

			void CloseScope();

			void AddVariable(VariableDeclaration* object);

			Celeste::ir::inputreconstruction::Interpreter::TypeId
			GetType(TypeConstruct* typeConstruct);

			bool PolymorphismEquality(InputReconstructionObject* lhsType,
									  InputReconstructionObject* rhsType);
			std::variant<int, double, std::string,
						 Celeste::ir::inputreconstruction::Interpreter::AlgebraicValue>
			ZeroValue(InputReconstructionObject* type);

			bool CopyByValue(InputReconstructionObject* object);
			bool MatchingConstructor(InputReconstructionObject* lhs,
									 const std::vector<std::unique_ptr<Expression>>& expressions);
			bool MatchingImplicitlyConstructor(
				InputReconstructionObject* lhs,
				const std::vector<std::unique_ptr<Expression>>& expressions);

			Value Evaluate(VariableDeclaration* object,
						   const std::vector<std::unique_ptr<Expression>>& expressions);
			Value Evaluate(const std::unique_ptr<Expression>& rhs);

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

			std::optional<Function*> GetFunction(InputReconstructionObject* functionObject);
		};

		std::vector<File*> processedFiles;

	private:
		GroupType groupType;
		// Contains The Stack of Variables
		Stack symbolTable;

		// Contains A List of Reachable Types.
		TypeTable typeTable;

	public:
		Interpreter(GroupType groupType_);
		~Interpreter();

	public:
		void Interpret(InputReconstructionObject* entryPoint);
		void SetUpGlobalInformation(InputReconstructionObject* entryPoint);
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_INTERPRETER_H
