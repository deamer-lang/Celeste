#ifndef CELESTE_AST_RELATION_NODEISINLINED_H
#define CELESTE_AST_RELATION_NODEISINLINED_H

#include "Celeste/Ast/Enum/Type.h"

namespace Celeste { namespace ast { namespace relation { 

	constexpr static bool NodeIsInlined(::Celeste::ast::Type t)
	{
		
		if (t == ::Celeste::ast::Type::program)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__stmt__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::stmt)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::meta_declaration)
		{
			return false;
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
			return false;
		}

		if (t == ::Celeste::ast::Type::class_declaration)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_arrow__base_type__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__COMMA__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::base_type)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::class_block)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__class_stmt__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::enum_declaration)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::enum_block)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::function_declaration)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_arrow__function_argument__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::function_implementation)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::function_argument)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::type)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::function_name)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::return_type)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::function_block)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__function_stmt__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::class_stmt)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::enum_stmt)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::function_stmt)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::logical_stmt)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::condtional_declaration)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::conditional_block)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__condtional_stmt__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::condtional_stmt)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::variable_declaration)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::variable_initialization)
		{
			return false;
		}


		return false;
	}


}}}

#endif // CELESTE_AST_RELATION_NODEISINLINED_H