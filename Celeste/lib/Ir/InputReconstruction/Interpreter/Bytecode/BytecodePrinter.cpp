#include "Celeste/Ir/InputReconstruction/Interpreter/Bytecode/BytecodePrinter.h"
#include "Celeste/Ir/InputReconstruction/Interpreter/Bytecode/BytecodeRepresentation.h"
#include "Celeste/Ir/InputReconstruction/Interpreter/Bytecode/Instruction.h"
#include "Celeste/Ir/InputReconstruction/Standard/Decimal.h"
#include "Celeste/Ir/InputReconstruction/Standard/Integer.h"
#include "Celeste/Ir/InputReconstruction/Standard/Text.h"
#include <iostream>

void Celeste::ir::inputreconstruction::bytecode::BytecodePrinter::Print(
	const Celeste::ir::inputreconstruction::BytecodeRepresentation& representation)
{
	std::cout << "[ ";
	for (std::size_t i = 0; i < representation.memory_map.size(); i++)
	{
		std::cout << std::to_string(i) << ";" << std::to_string(representation.memory_map[i])
				  << ", ";
	}
	std::cout << " ]\n";

	std::size_t line_number = 0;
	for (const auto& instruction : representation.instructions)
	{
		std::cout << std::to_string(line_number) << ": ";
		Print(instruction);
		line_number++;
	}
}

void Celeste::ir::inputreconstruction::bytecode::BytecodePrinter::Print(const Instruction& value)
{
	auto reference_variable = [](auto var) {
		if (std::holds_alternative<std::size_t>(var))
		{
			std::cout << " " << std::get<std::size_t>(var);
		}
		else
		{
			std::cout << " " << (std::size_t)std::get<InputReconstructionObject*>(var) << "*";
		}
	};

	switch (value.GetBytecodeType())
	{
	case BytecodeType::Noop: {
		std::cout << "NOOP";
		break;
	}
	case BytecodeType::Return: {
		std::cout << "RETURN ";
		reference_variable(value.GetArguments()[0]);
		break;
	}
	case BytecodeType::Variable: {
		std::cout << "VAR " << value.GetId();
		break;
	}
	case BytecodeType::ConstructorCall: {
		std::cout << "CONSTR_CALL ";
		for (auto argument : value.GetArguments())
		{
			reference_variable(argument);
		}
		break;
	}
	case BytecodeType::FunctionCall: {
		std::cout << "FUNC_CALL ";
		for (auto argument : value.GetArguments())
		{
			reference_variable(argument);
		}
		break;
	}
	case BytecodeType::MemberFunctionCall: {
		std::cout << "MEMFUN_CALL ";
		for (auto argument : value.GetArguments())
		{
			reference_variable(argument);
		}
		break;
	}
	case BytecodeType::Assign: {
		std::cout << "ASSIGN ";
		reference_variable(value.GetArguments()[0]);
		reference_variable(value.GetArguments()[1]);
		break;
	}
	case BytecodeType::Label:
		std::cout << "LABEL";
		break;
	case BytecodeType::Goto: {
		std::cout << "GOTO " << std::get<std::size_t>(value.GetArguments()[0]);
		break;
	}
	case BytecodeType::InstructionJump:
		std::cout << "INSTR_JUMP " << std::get<std::size_t>(value.GetArguments()[0]);
		break;
	case BytecodeType::ConditionalJump:
		std::cout << "COND_JUMP ";
		reference_variable(value.GetArguments()[0]);
		reference_variable(value.GetArguments()[1]);
		reference_variable(value.GetArguments()[2]);
		break;
	case BytecodeType::InstructionConditionalJump:
		std::cout << "INSTR_COND_JUMP ";
		reference_variable(value.GetArguments()[0]);
		reference_variable(value.GetArguments()[1]);
		reference_variable(value.GetArguments()[2]);
		break;
	case BytecodeType::UnloadVariable:
		std::cout << "UNLOAD_VAR ";
		break;
	case BytecodeType::Compare:
		std::cout << "COMPARE ";
		break;
	case BytecodeType::Add: {
		std::cout << "ADD " << std::get<std::size_t>(value.GetArguments()[0]);
		reference_variable(value.GetArguments()[1]);
		reference_variable(value.GetArguments()[2]);
		break;
	}
	case BytecodeType::ArrayAccess: {
		break;
	}
	case BytecodeType::Minus: {
		std::cout << "MINUS " << std::get<std::size_t>(value.GetArguments()[0]);
		reference_variable(value.GetArguments()[1]);
		reference_variable(value.GetArguments()[2]);
		break;
	}
	case BytecodeType::Multiply: {
		std::cout << "MULTI " << std::get<std::size_t>(value.GetArguments()[0]);
		reference_variable(value.GetArguments()[1]);
		reference_variable(value.GetArguments()[2]);
		break;
	}
	case BytecodeType::Divide: {
		std::cout << "DIVIDE " << std::get<std::size_t>(value.GetArguments()[0]);
		reference_variable(value.GetArguments()[1]);
		reference_variable(value.GetArguments()[2]);
		break;
	}
	case BytecodeType::Power: {
		std::cout << "POWER ";
		break;
	}
	case BytecodeType::And: {
		std::cout << "AND " << std::get<std::size_t>(value.GetArguments()[0]);
		reference_variable(value.GetArguments()[1]);
		reference_variable(value.GetArguments()[2]);
		break;
	}
	case BytecodeType::Or: {
		std::cout << "OR " << std::get<std::size_t>(value.GetArguments()[0]);
		reference_variable(value.GetArguments()[1]);
		reference_variable(value.GetArguments()[2]);
		break;
	}
	case BytecodeType::Equal: {
		std::cout << "EQUAL " << std::get<std::size_t>(value.GetArguments()[0]);
		reference_variable(value.GetArguments()[1]);
		reference_variable(value.GetArguments()[2]);
		break;
	}
	case BytecodeType::NotEqual: {
		std::cout << "NOT_EQUAL " << std::get<std::size_t>(value.GetArguments()[0]);
		reference_variable(value.GetArguments()[1]);
		reference_variable(value.GetArguments()[2]);
		break;
	}
	case BytecodeType::Not: {
		std::cout << "NOT ";
		break;
	}
	case BytecodeType::Less: {
		std::cout << "LESS " << std::get<std::size_t>(value.GetArguments()[0]);
		reference_variable(value.GetArguments()[1]);
		reference_variable(value.GetArguments()[2]);
		break;
	}
	case BytecodeType::LessOrEqual: {
		std::cout << "LESS_OR_EQUAL " << std::get<std::size_t>(value.GetArguments()[0]);
		reference_variable(value.GetArguments()[1]);
		reference_variable(value.GetArguments()[2]);
		break;
	}
	case BytecodeType::Greater: {
		std::cout << "GREATER " << std::get<std::size_t>(value.GetArguments()[0]);
		reference_variable(value.GetArguments()[1]);
		reference_variable(value.GetArguments()[2]);
		break;
	}
	case BytecodeType::GreaterOrEqual: {
		std::cout << "GREATER_OR_EQUAL " << std::get<std::size_t>(value.GetArguments()[0]);
		reference_variable(value.GetArguments()[1]);
		reference_variable(value.GetArguments()[2]);
		break;
	}
	case BytecodeType::Integer: {
		std::cout << "INTEGER " << std::get<std::size_t>(value.GetArguments()[0]) << " "
				  << static_cast<Integer*>(
						 std::get<InputReconstructionObject*>(value.GetArguments()[1]))
						 ->GetEvaluation();
		break;
	}
	case BytecodeType::Text:
		std::cout << "TEXT " << std::get<std::size_t>(value.GetArguments()[0]) << " "
				  << static_cast<Text*>(
						 std::get<InputReconstructionObject*>(value.GetArguments()[1]))
						 ->GetEvaluation();
		break;
	case BytecodeType::Decimal:
		std::cout << "DECIMAL " << std::get<std::size_t>(value.GetArguments()[0]) << " "
				  << static_cast<Decimal*>(
						 std::get<InputReconstructionObject*>(value.GetArguments()[1]))
						 ->GetEvaluation();
		break;
	case BytecodeType::Codeblock:
		std::cout << "CODEBLOCK ";
		break;
	case BytecodeType::ReferenceReuseAssign: {
		std::cout << "REF_REUSE_ASSIGN ";
		reference_variable(value.GetArguments()[0]);
		reference_variable(value.GetArguments()[1]);
		reference_variable(value.GetArguments()[2]);
		break;
	}
	default:;
	}
	std::cout << "\n";
}
