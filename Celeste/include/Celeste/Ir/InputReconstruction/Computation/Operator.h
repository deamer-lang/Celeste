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

	static constexpr const char* ConvertOperatorIntoString(Operator rhs)
	{
		switch (rhs)
		{
		case Operator::Add:
			return "operator+";
		case Operator::ArrayAccess:
			return "operator[]";
		case Operator::Minus:
			return "operator-";
		case Operator::Multiply:
			return "operator*";
		case Operator::Divide:
			return "operator/";
		case Operator::Power:
			return "operator^";
		case Operator::And:
			return "operator&&";
		case Operator::Or:
			return "operator||";
		case Operator::Equal:
			return "operator==";
		case Operator::NotEqual:
			return "operator!=";
		case Operator::Not:
			return "operator!";
		case Operator::Less:
			return "operator<";
		case Operator::LessOrEqual:
			return "operator<=";
		case Operator::Greater:
			return "operator>";
		case Operator::GreaterOrEqual:
			return "operator>=";
		case Operator::Unknown:
			return "\0";
		}

		return "operatorUnimplemented";
	}
}

#endif // CELESTE_IR_INPUTRECONSTRUCTION_STRUCTURE_OPERATOR_H
