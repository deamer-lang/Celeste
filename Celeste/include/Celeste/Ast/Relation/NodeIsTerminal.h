#ifndef CELESTE_AST_RELATION_NODEISTERMINAL_H
#define CELESTE_AST_RELATION_NODEISTERMINAL_H

#include "Celeste/Ast/Enum/Type.h"

namespace Celeste { namespace ast { namespace relation { 

	constexpr static bool NodeIsTerminal(::Celeste::ast::Type t)
	{
		
		if (t == ::Celeste::ast::Type::SINGLE_COMMENT)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::MULTI_COMMENT)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::CONSTANT)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::FUNCTION)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::CLASS)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::ENUM)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::CONDITIONAL)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::CODE)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::ATTRIBUTETOK)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::RUNTIME)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::STATIC)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::AUTO)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::AUTOTYPE)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::TEMPLATE)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::NAMESPACE)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::OPERATORNAME)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::OVERRIDE)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::VIRTUAL)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::PURE)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::AS)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::IN)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::DISPLAY)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::RETURN)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::FOR)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::IF)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::ELSEIF)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::ELSE)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::INLINE)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::CONSTRUCTOR)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::FILE_)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::PROGRAM_)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::IMPORT)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::EXPLICIT_ALIAS)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::PUBLIC)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::PROTECTED)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::PRIVATE)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::INHERIT)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::COMPOSITE)
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

		if (t == ::Celeste::ast::Type::LTEQ)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::GTEQ)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::LT)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::GT)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::PLUSEQ)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::MINUSEQ)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::MULTIPLYEQ)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::DIVIDEEQ)
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

		if (t == ::Celeste::ast::Type::PLUSPLUS)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::PLUS)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::MINUSMINUS)
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