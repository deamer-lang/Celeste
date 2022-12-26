#include "Celeste/Ir/InputReconstruction/Interpreter/Bytecode/BytecodeRepresentation.h"

Celeste::ir::inputreconstruction::BytecodeRepresentation::BytecodeRepresentation(
	std::vector<Instruction> instructions_, std::size_t maximalVariableSize_)
	: instructions(std::move(instructions_)),
	  maximalVariableSize(maximalVariableSize_)
{
}

Celeste::ir::inputreconstruction::BytecodeRepresentation::BytecodeRepresentation(
	const BytecodeRepresentation& rhs)
	: instructions(rhs.instructions),
	  maximalVariableSize(rhs.maximalVariableSize)
{
}

Celeste::ir::inputreconstruction::BytecodeRepresentation::BytecodeRepresentation(
	BytecodeRepresentation&& rhs) noexcept
	: instructions(std::move(rhs.instructions)),
	  maximalVariableSize(std::move(rhs.maximalVariableSize))
{
}
