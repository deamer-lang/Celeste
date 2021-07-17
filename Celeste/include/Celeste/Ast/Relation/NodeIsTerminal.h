#ifndef CELESTE_AST_RELATION_NODEISTERMINAL_H
#define CELESTE_AST_RELATION_NODEISTERMINAL_H

#include "Celeste/Ast/Enum/Type.h"

namespace Celeste { namespace ast { namespace relation { 

	constexpr static bool NodeIsTerminal(::Celeste::ast::Type t)
	{
		
		if (t == ::Celeste::ast::Type::CLASS)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::ENUM)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::FUNCTION)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::IF)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::ELSE)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::LEFT_BRACKET)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::RIGHT_BRACKET)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::LEFT_SQUARE_BRACKET)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::RIGHT_SQUARE_BRACKET)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::LEFT_PARANTHESIS)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::RIGHT_PARANTHESIS)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::COLON)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::SEMICOLON)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::COMMA)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::DOT)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::EQEQ)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::EQ)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::NOTEQ)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::NOT)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::PLUS)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::MINUS)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::DIVIDE)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::MULTIPLY)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::USERDEFINED_OPERATOR)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::VARNAME)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::NUMBER)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::DECIMAL)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::TEXT)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::ESCAPE_CHARS)
		{
			return true;
		}


		return false;
	}


}}}

#endif // CELESTE_AST_RELATION_NODEISTERMINAL_H