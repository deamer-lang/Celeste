#include "Celeste/Ir/InputReconstruction/Interpreter/Bytecode/Instruction.h"

Celeste::ir::inputreconstruction::Instruction::Instruction(
	std::size_t id_, InputReconstructionObject* type_, BytecodeType bytecodeType_,
	const std::vector<std::variant<std::size_t, InputReconstructionObject*>>& arguments_)
	: bytecodeType(bytecodeType_),
	  id(id_),
	  type(type_),
	  arguments(arguments_)
{
}

Celeste::ir::inputreconstruction::Instruction::Instruction(
	InputReconstructionObject* type_, BytecodeType bytecodeType_,
	const std::vector<std::variant<std::size_t, InputReconstructionObject*>>& arguments_)
	: bytecodeType(bytecodeType_),
	  type(type_),
	  arguments(arguments_)
{
}

Celeste::ir::inputreconstruction::Instruction::Instruction(
	BytecodeType bytecodeType_,
	const std::vector<std::variant<std::size_t, InputReconstructionObject*>>& arguments_)
	: bytecodeType(bytecodeType_),
	  arguments(arguments_)
{
}

Celeste::ir::inputreconstruction::Instruction::Instruction(BytecodeType bytecodeType_)
	: bytecodeType(bytecodeType_)
{
}

void Celeste::ir::inputreconstruction::Instruction::Replace(const Instruction& instruction)
{
	bytecodeType = instruction.bytecodeType;
	id = instruction.id;
	type = instruction.type;
	arguments = instruction.arguments;
}

Celeste::ir::inputreconstruction::Instruction::Instruction(Instruction&& rhs) noexcept
	: bytecodeType(rhs.bytecodeType),
	  id(rhs.id),
	  type(rhs.type),
	  arguments(std::move(rhs.arguments))
{
}

Celeste::ir::inputreconstruction::Instruction::Instruction(const Instruction& rhs)
	: bytecodeType(rhs.bytecodeType),
	  id(rhs.id),
	  type(rhs.type),
	  arguments(rhs.arguments)
{
}

Celeste::ir::inputreconstruction::BytecodeType
Celeste::ir::inputreconstruction::Instruction::GetBytecodeType() const
{
	return bytecodeType;
}

std::size_t Celeste::ir::inputreconstruction::Instruction::GetId() const
{
	return id;
}

Celeste::ir::inputreconstruction::InputReconstructionObject*
Celeste::ir::inputreconstruction::Instruction::GetType() const
{
	return type;
}

const std::vector<
	std::variant<std::size_t, Celeste::ir::inputreconstruction::InputReconstructionObject*>>&
Celeste::ir ::inputreconstruction::Instruction::GetArguments() const
{
	return arguments;
}
