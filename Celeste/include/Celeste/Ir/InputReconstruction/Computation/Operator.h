#ifndef CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_OPERATOR_H
#define CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_OPERATOR_H

namespace Celeste::ir::inputreconstruction
{
	enum class Operator
	{
		Unknown,
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
	};
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_OPERATOR_H
