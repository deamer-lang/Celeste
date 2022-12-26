#ifndef CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_BYTECODE_BYTECODETYPE_H
#define CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_BYTECODE_BYTECODETYPE_H

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

		// Variable Logic
		ReferenceReuseAssign, // Reuses last variable by referencing some RHS given LHS,
							  // LHS = LHS.RHS
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_INTERPRETER_BYTECODE_BYTECODETYPE_H
