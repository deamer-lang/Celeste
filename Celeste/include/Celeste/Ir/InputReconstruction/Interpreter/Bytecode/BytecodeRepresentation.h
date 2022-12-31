#ifndef CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_BYTECODE_BYTECODEREPRESENTATION_H
#define CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_BYTECODE_BYTECODEREPRESENTATION_H

#include "Celeste/Ir/InputReconstruction/Interpreter/Bytecode/Instruction.h"
#include "Celeste/Ir/InputReconstruction/Standard/Decimal.h"
#include "Celeste/Ir/InputReconstruction/Standard/Integer.h"
#include "Celeste/Ir/InputReconstruction/Standard/Text.h"
#include <vector>

namespace Celeste::ir::inputreconstruction
{
	class BytecodeRepresentation
	{
	public:
		std::vector<Instruction> instructions;
		std::size_t maximalVariableSize;
		// In case a variable is an alias, this map is used to illustrate this alias
		std::vector<std::size_t> memory_map;

		// Local Introduced Constants
	public:
		std::vector<std::unique_ptr<Integer>> integers;
		std::vector<std::unique_ptr<Decimal>> decimals;
		std::vector<std::unique_ptr<Text>> texts;

	public:
		BytecodeRepresentation(std::vector<Instruction> instructions_,
							   std::size_t maximalVariableSize_,
							   std::vector<std::unique_ptr<Integer>> integers_,
							   std::vector<std::unique_ptr<Decimal>> decimals_,
							   std::vector<std::unique_ptr<Text>> texts_,
							   std::vector<std::size_t> memory_map_);

		BytecodeRepresentation(BytecodeRepresentation&& rhs) noexcept;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_BYTECODE_BYTECODEREPRESENTATION_H
