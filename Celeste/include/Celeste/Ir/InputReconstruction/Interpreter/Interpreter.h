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
			TypeId displayedType;
			TypeId coreType;

			std::vector<SymbolMember> symbolMembers;

			// This is only possible for Core Types.
			std::optional<Value> symbolValue;
		};

		struct SymbolTable
		{
			Interpreter* interpreter = nullptr;

			std::vector<Symbol> symbols;

			std::optional<SymbolTable*> parent;
			std::optional<SymbolTable> nextDepthScope;
			SymbolTable* currentScope = this;

			SymbolTable(Interpreter* interpreter_);
			~SymbolTable() = default;

			SymbolTable* OpenScope();

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

		std::vector<File*> processedFiles;

	private:
		GroupType groupType;
		// Contains The Stack of Variables
		SymbolTable symbolTable;

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
