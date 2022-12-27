#ifndef CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_BYTECODE_BYTECODETYPE_H
#define CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_BYTECODE_BYTECODETYPE_H
#include "Celeste/Ir/InputReconstruction/Computation/Operator.h"

namespace Celeste::ir::inputreconstruction
{
	enum class BytecodeType
	{
		unknown,
		Noop, // Nothing to do
		Alias,

		Return,			 // Returns some variable
		Variable,		 // Default constructs a variable
		ConstructorCall, // Result is stored as a variable, optionally id can be assigned for auto
						 // variable assignment
		FunctionCall,	 // Result is stored as a variable, optionally id can be assigned for auto
						 // variable assignment
		MemberFunctionCall, // Result is stored as a variable, optionally id can be assigned for
							// auto variable assignment
		Assign,
		Label,
		Goto,
		Jump = Goto,
		InstructionJump,
		ConditionalJump,
		InstructionConditionalJump,
		UnloadVariable, // Unloads the last loaded variable.

		// Operations, standard operations
		// Binary Operation Argument Order: Assignment Variable (must be pre-created), lhs, rhs
		// Unary Operation: (Assignment Variable, Value) | (Value)
		Compare,
		Add,
		ArrayAccess,
		Minus,
		Multiply,
		Divide,
		Power,
		And,
		Or,
		Equal,
		NotEqual,
		Not,
		Less,
		LessOrEqual,
		Greater,
		GreaterOrEqual,

		// Constexpr Value Instructions
		Integer,
		Text,
		Decimal,
		Codeblock,

		// Direct Initialize
		CreateIntegerVariable,
		CreateDecimalVariable,
		CreateTextVariable,
		CreateCodeBlockVariable,

		// Variable Logic
		ReferenceReuseAssign, // Reuses last variable by referencing some RHS given LHS,
							  // LHS = LHS.RHS
	};

	static constexpr Operator ConvertBytecodeInstructionIntoOperator(BytecodeType rhs)
	{
		switch (rhs)
		{
		case BytecodeType::Add: {
			return Operator::Add;
		}
		case BytecodeType::ArrayAccess: {
			return Operator::ArrayAccess;
		}
		case BytecodeType::Minus: {
			return Operator::Minus;
		}
		case BytecodeType::Multiply: {
			return Operator::Multiply;
		}
		case BytecodeType::Divide: {
			return Operator::Divide;
		}
		case BytecodeType::Power: {
			return Operator::Power;
		}
		case BytecodeType::And: {
			return Operator::And;
		}
		case BytecodeType::Or: {
			return Operator::Or;
		}
		case BytecodeType::Equal: {
			return Operator::Equal;
		}
		case BytecodeType::NotEqual: {
			return Operator::NotEqual;
		}
		case BytecodeType::Not: {
			return Operator::Not;
		}
		case BytecodeType::Less: {
			return Operator::Less;
		}
		case BytecodeType::LessOrEqual: {
			return Operator::LessOrEqual;
		}
		case BytecodeType::Greater: {
			return Operator::Greater;
		}
		case BytecodeType::GreaterOrEqual: {
			return Operator::GreaterOrEqual;
		}
		default: {
			return Operator::Unknown;
		}
		}
	}
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_BYTECODE_BYTECODETYPE_H
