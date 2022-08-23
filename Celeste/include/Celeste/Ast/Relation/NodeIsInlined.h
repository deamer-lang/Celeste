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

		if (t == ::Celeste::ast::Type::root_program)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::standard_block)
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

		if (t == ::Celeste::ast::Type::import_statement)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::file_import)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::mutation_group)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_arrow__symbol_reference__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__COMMA__symbol_reference__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::assignment)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::assignment_operator)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::conditional_if)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::conditional_else_if)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::conditional_else)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::conditional_block)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::template_conditional_function_declaration)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_arrow__template_parameter__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__COMMA__template_parameter__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_arrow__conditional_function_argument__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__COMMA__conditional_function_argument__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_arrow__function_argument__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::conditional_function_declaration)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::template_code_function_declaration)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::code_function_declaration)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::return_statement)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::symbol_increase)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::symbol_decrease)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::expression)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::expression_no_value)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::t_expression)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::f_expression)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::display_call)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::for_loop)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::for_iteration_loop)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::for_each_loop)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::for_variable)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::iterator)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::for_block)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::namespace_declaration)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_arrow__namespace_name__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__DOT__namespace_name__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::namespace_block)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::namespace_name)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::inline_class_declaration)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::inline_class_declaration_composite)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite_alias__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::inline_class_declaration_composite_alias)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::inline_class_declaration_composite_name)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::created_class_name)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::code_block)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_arrow__code_block_input_argument__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__COMMA__code_block_input_argument__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::code_block_input_argument)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::code_block_argument)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::code_block_argument_name)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::code_block_program)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::variable_declaration)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::array_declaration)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::variable_name)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::template_function_declaration)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::function_declaration)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::trailing_return_type)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::return_type)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::conditional_function_argument)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::function_argument)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::function_argument_type)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::function_argument_name)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::condition_modifier_function_call)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_arrow__condition_modifier_argument__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__COMMA__condition_modifier_argument__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::condition_modifier_name)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::condition_modifier_argument)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::function_body)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::function_name)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::template_class_declaration)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::template_parameter)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::template_parameter_name)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::class_declaration)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_arrow__class_inherit_base__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__COMMA__class_inherit_base__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::class_name)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::execution_keyword_permutation)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::class_body)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__class_stmt__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::class_stmt)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::class_stmt_member_field_declaration)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::member_field_name)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::class_stmt_member_function)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::class_stmt_member_template_function)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::template_class_stmt_constructor)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::class_stmt_constructor)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::accessibility)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::class_inherit_base)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::inherit_base)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::inherit_base_name)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::compound_base)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_arrow__compound_base_alias__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__COMMA__compound_base_alias__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::compound_base_name)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::compound_base_alias)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::enum_declaration)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__enumeration__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::enum_name)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::enumeration)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::enumeration_name)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::enumeration_value)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::symbol_reference)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_arrow__symbol__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__DOT__symbol_secondary__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::symbol_secondary)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__symbol_access__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::symbol)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::symbol_access)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::auto_deduce_array)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::symbol_name_secondary)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::symbol_name)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::function_access)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_arrow__expression__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__COMMA__expression__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::index_access)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::anonymous_access)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::type)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__type_modifier__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::type_modifier)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::value_list)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_arrow__full_value__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__COMMA__full_value__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::full_value)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::value)
		{
			return false;
		}

		if (t == ::Celeste::ast::Type::tuple)
		{
			return false;
		}


		return false;
	}


}}}

#endif // CELESTE_AST_RELATION_NODEISINLINED_H