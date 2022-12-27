#include "Celeste/Ir/InputReconstruction/Interpreter/Bytecode/BytecodeRepresentation.h"

Celeste::ir::inputreconstruction::BytecodeRepresentation::BytecodeRepresentation(
	std::vector<Instruction> instructions_, std::size_t maximalVariableSize_,
	std::vector<std::unique_ptr<Integer>> integers_,
	std::vector<std::unique_ptr<Decimal>> decimals_, std::vector<std::unique_ptr<Text>> texts_)
	: instructions(std::move(instructions_)),
	  maximalVariableSize(maximalVariableSize_),
	  integers(std::move(integers_)),
	  decimals(std::move(decimals_)),
	  texts(std::move(texts_))
{
}

Celeste::ir::inputreconstruction::BytecodeRepresentation::BytecodeRepresentation(
	BytecodeRepresentation&& rhs) noexcept
	: instructions(std::move(rhs.instructions)),
	  maximalVariableSize(std::move(rhs.maximalVariableSize)),
	  integers(std::move(rhs.integers)),
	  decimals(std::move(rhs.decimals)),
	  texts(std::move(rhs.texts))
{
}
