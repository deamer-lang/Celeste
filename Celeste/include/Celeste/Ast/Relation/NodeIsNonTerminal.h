#ifndef CELESTE_AST_RELATION_NODEISNONTERMINAL_H
#define CELESTE_AST_RELATION_NODEISNONTERMINAL_H

#include "Celeste/Ast/Enum/Type.h"

namespace Celeste { namespace ast { namespace relation { 

	constexpr static bool NodeIsNonTerminal(::Celeste::ast::Type t)
	{
		
		if (t == ::Celeste::ast::Type::program)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__stmt__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::stmt)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::meta_declaration)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__expression__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__meta_declaration__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::expression)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::class_declaration)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_arrow__base_type__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__COMMA__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::class_name)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::base_type)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::class_block)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__class_stmt__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::enum_declaration)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::enum_name)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::enum_block)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::function_declaration)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_arrow__deamerreserved_optional__function_argument____)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::function_implementation)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::function_argument)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::function_arg_type)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::function_arg_name)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::type)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::function_name)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::return_type)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::function_block)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__function_stmt__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::class_stmt)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::enum_stmt)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::function_stmt)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::logical_stmt)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::condtional_declaration)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::conditional_block)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__condtional_stmt__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::condtional_stmt)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::variable_declaration)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::variable_initialization)
		{
			return true;
		}


		return false;
	}


}}}

#endif // CELESTE_AST_RELATION_NODEISNONTERMINAL_H