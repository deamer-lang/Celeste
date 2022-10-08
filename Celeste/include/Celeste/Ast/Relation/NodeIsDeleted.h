#ifndef CELESTE_AST_RELATION_NODEISDELETED_H
#define CELESTE_AST_RELATION_NODEISDELETED_H

#include "Celeste/Ast/Enum/Type.h"

namespace Celeste { namespace ast { namespace relation { 

	constexpr static bool NodeIsDeleted(::Celeste::ast::Type t)
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
			return false;
		}

		if (t == ::Celeste::ast::Type::FUNCTION)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::CLASS)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::ENUM)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::CONDITIONAL)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::CODE)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::ATTRIBUTETOK)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::RUNTIME)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::STATIC)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::AUTO)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::AUTOTYPE)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::TEMPLATE)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::NAMESPACE)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::OPERATORNAME)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::OVERRIDE)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::VIRTUAL)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::PURE)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::AS)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::IN)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::DISPLAY)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::RETURN)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::FOR)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::IF)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::ELSEIF)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::ELSE)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::INLINE)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::CONSTRUCTOR)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::FILE_)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::PROGRAM_)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::IMPORT)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::EXPLICIT_ALIAS)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::PUBLIC)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::PROTECTED)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::PRIVATE)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::INHERIT)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::COMPOSITE)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::LEFT_BRACKET)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::RIGHT_BRACKET)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::LEFT_SQUARE_BRACKET)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::RIGHT_SQUARE_BRACKET)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::LEFT_PARANTHESIS)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::RIGHT_PARANTHESIS)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::COLON)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::SEMICOLON)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::COMMA)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::DOT)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::LTEQ)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::GTEQ)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::LT)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::GT)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::PLUSEQ)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::MINUSEQ)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::MULTIPLYEQ)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::DIVIDEEQ)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::EQEQ)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::EQ)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::NOTEQ)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::NOT)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::PLUSPLUS)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::PLUS)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::MINUSMINUS)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::MINUS)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::DIVIDE)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::MULTIPLY)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::VARNAME)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::NUMBER)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::DECIMAL)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::TEXT)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::ESCAPE_CHARS)
		{
			return true;
		}


		return false;
	}


}}}

#endif // CELESTE_AST_RELATION_NODEISDELETED_H