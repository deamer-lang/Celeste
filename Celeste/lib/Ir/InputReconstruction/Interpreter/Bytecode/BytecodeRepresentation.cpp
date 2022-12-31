#include "Celeste/Ir/InputReconstruction/Interpreter/Bytecode/BytecodeRepresentation.h"

Celeste::ir::inputreconstruction::BytecodeRepresentation::BytecodeRepresentation(
	std::vector<Instruction> instructions_, std::size_t maximalVariableSize_,
	std::vector<std::unique_ptr<Integer>> integers_,
	std::vector<std::unique_ptr<Decimal>> decimals_, std::vector<std::unique_ptr<Text>> texts_,
	std::vector<std::size_t> memory_map_)
	: instructions(std::move(instructions_)),
	  maximalVariableSize(maximalVariableSize_),
	  memory_map(std::move(memory_map_)),
	  integers(std::move(integers_)),
	  decimals(std::move(decimals_)),
	  texts(std::move(texts_))
{
}

Celeste::ir::inputreconstruction::BytecodeRepresentation::BytecodeRepresentation(
	BytecodeRepresentation&& rhs) noexcept
	: instructions(std::move(rhs.instructions)),
	  maximalVariableSize(std::move(rhs.maximalVariableSize)),
	  memory_map(std::move(rhs.memory_map)),
	  integers(std::move(rhs.integers)),
	  decimals(std::move(rhs.decimals)),
	  texts(std::move(rhs.texts))
{
}
