#ifndef CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_BYTECODE_BYTECODEREPRESENTATION_H
#define CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_BYTECODE_BYTECODEREPRESENTATION_H

#include "Celeste/Ir/InputReconstruction/Interpreter/Bytecode/Instruction.h"
#include <vector>

namespace Celeste::ir::inputreconstruction
{
	class BytecodeRepresentation
	{
	public:
		std::vector<Instruction> instructions;
		std::size_t maximalVariableSize;

	public:
		BytecodeRepresentation(std::vector<Instruction> instructions_,
							   std::size_t maximalVariableSize_);
		BytecodeRepresentation(const BytecodeRepresentation& rhs);

		BytecodeRepresentation(BytecodeRepresentation&& rhs) noexcept;
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_BYTECODE_BYTECODEREPRESENTATION_H
