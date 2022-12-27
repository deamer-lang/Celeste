#ifndef CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_BYTECODE_CONSTRUCTOR_H
#define CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_BYTECODE_CONSTRUCTOR_H

#include "Celeste/Ir/InputReconstruction/Interpreter/Bytecode/BytecodeRepresentation.h"
#include "Celeste/Ir/InputReconstruction/Interpreter/Bytecode/Instruction.h"
#include "Celeste/Ir/InputReconstruction/Standard/Decimal.h"
#include "Celeste/Ir/InputReconstruction/Standard/Integer.h"
#include "Celeste/Ir/InputReconstruction/Standard/Text.h"
#include <map>
#include <memory>
#include <vector>

namespace Celeste::ir::inputreconstruction
{
	class Return;
	class MutationGroup;
	class MonomorphizedFunction;
	class Constructor;
	class Function;
	class SymbolReferenceCall;
	class VariableDeclaration;
	class Value;
	class Expression;
	class Assignment;
	class ForEach;
	class ForIteration;
	class If;
	class ElseIf;
	class Else;
}

namespace Celeste::ir::inputreconstruction::bytecode
{
	/* Bytecode Set Constructor
	 * Given a set of IR Elements, this would construct appropiate Bytecode.
	 *
	 * Performance: Currently it is recursive thus it can result in stack errors.
	 * However, generally code is not nested enough to create issues.
	 */
	class Constructor
	{
		// Output data
	private:
		std::size_t level;
		std::vector<Instruction> functionRepresentation = {
			Instruction{BytecodeType::Noop}}; // First instruction is noop, to allow jumping to
											  // start of bytecode
		std::size_t idCounter = 0;
		std::map<InputReconstructionObject*, std::size_t> mapVariableWithSize;
		std::vector<std::size_t> labelInstructionJumpLocations;

		std::vector<std::unique_ptr<Integer>> integers;
		std::vector<std::unique_ptr<Decimal>> decimals;
		std::vector<std::unique_ptr<Text>> texts;

		// Output Construction Cache
	private:
		// When there is an embedded ir object, i.e. it has a scope.
		// This stack is used to convert the recursive structure in iterative processing
		std::vector<std::vector<InputReconstructionObject*>> inputReconstructionEvaluationStack;
		std::vector<std::size_t> continuationLabels;
		std::vector<std::size_t> exitLabels;

		std::map<int, std::size_t> mapIntegerWithVariable;

	public:
		Constructor(std::size_t level_ = 1);
		~Constructor() = default;

	public:
		void AddObject(
			std::vector<Celeste::ir::inputreconstruction::InputReconstructionObject*> objects);
		void AddObject(InputReconstructionObject* irObject);

		void AddObject(inputreconstruction::Function* irObject);
		void AddObject(inputreconstruction::MonomorphizedFunction* irObject);
		void AddObject(inputreconstruction::MutationGroup* irObject);
		void AddObject(inputreconstruction::Constructor* irObject);
		void AddObject(inputreconstruction::VariableDeclaration* irObject);
		void AddObject(inputreconstruction::SymbolReferenceCall* irObject,
					   std::optional<std::size_t> variableIdOpt = std::nullopt);
		void AddObject(inputreconstruction::Expression* irObject,
					   std::optional<std::size_t> directAssignVariable = std::nullopt);
		void AddObject(inputreconstruction::Value* irObject,
					   std::optional<std::size_t> variableIdOpt = std::nullopt);
		void AddObject(inputreconstruction::Assignment* irObject);
		void AddObject(inputreconstruction::ForEach* irObject);
		void AddObject(inputreconstruction::ForIteration* irObject);
		void AddObject(inputreconstruction::If* irObject);
		void AddObject(inputreconstruction::ElseIf* irObject);
		void AddObject(inputreconstruction::Else* irObject);
		void AddObject(inputreconstruction::Return* irObject);

	public:
		BytecodeRepresentation GetRepresentation();

	public:
		void RemoveRedundantZeroInitialization();
		void InlineAliasVariables();
		void InlineLabels();

	private:
		bool DoesInstructionReference(std::size_t instruction, std::size_t variable);
		bool DoesInstructionInitialize(std::size_t instruction, std::size_t variable);
		void RemoveInstruction(std::size_t index);

	private:
		std::size_t AddVariable(InputReconstructionObject* value, bool initialize = true);
		std::size_t AddVariable(SymbolReferenceCall* value);
		std::size_t AddVariable(VariableDeclaration* variable, bool initialize = true);
		std::size_t AddVariable(inputreconstruction::Constructor* expression);
		std::size_t AddVariable(Function* expression);
		std::size_t AddVariable(Expression* expression);
		std::size_t AddVariable(Value* value);
		std::size_t AddVariable();
		// Exclusively use this for after variable introductions, any other usage is prohibited.
		void IncrementIdCounter();

		bool VariableIsUseless(VariableDeclaration* variable);

	private:
		std::size_t ReserveLabel();
		std::size_t AddLabel(std::size_t specificLabel);
		std::size_t AddLabel();
		void Noop();
		void ConditionalJumpOnStateOfVariable(std::size_t variableId, std::size_t trueLabel,
											  std::size_t falseLabel);
		void ConditionalTrueJumpOnStateOfVariable(std::size_t variableId, std::size_t label);
		void ConditionalFalseJumpOnStateOfVariable(std::size_t variableId, std::size_t label);
		void Goto(std::size_t labelId);

	private:
		std::size_t AddLocalVariable();

		std::size_t CreateInteger(int default_value = 0);
		std::size_t CreateText(std::string default_value = 0);
		std::size_t CreateDecimal(double default_value = 0);

		void AddIntegerToVariable(std::size_t assigned_value_id, int i);

		std::size_t AddLessThan(std::size_t lhs, std::size_t rhs);
		std::size_t AddLessThanOrEqual(std::size_t lhs, std::size_t rhs);
		std::size_t AddGreaterThan(std::size_t lhs, std::size_t rhs);
		std::size_t AddGreaterThanOrEqual(std::size_t lhs, std::size_t rhs);

		std::size_t AddEqual(std::size_t lhs, std::size_t rhs);
		std::size_t AddNotEqual(std::size_t lhs, std::size_t rhs);

		std::size_t AddBinaryOperation(BytecodeType bytecode, std::size_t lhs, std::size_t rhs,
									   inputreconstruction::Function* op = nullptr);

	private:
		void ReserveConditionalContinuationLabel();
		void ReserveConditionalExitLabel();
		std::size_t GetReservedConditionalContinuationLabel();
		std::size_t GetReservedConditionalExitLabel();

		void ConditionalLabelPush();
		void ConditionalLabelPop();
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_BYTECODE_CONSTRUCTOR_H
