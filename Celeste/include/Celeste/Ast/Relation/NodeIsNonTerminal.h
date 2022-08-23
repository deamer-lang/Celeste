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

		if (t == ::Celeste::ast::Type::root_program)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::standard_block)
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

		if (t == ::Celeste::ast::Type::import_statement)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::file_import)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::mutation_group)
		{
			return true;
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
			return true;
		}

		if (t == ::Celeste::ast::Type::assignment_operator)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::conditional_if)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::conditional_else_if)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::conditional_else)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::conditional_block)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::template_conditional_function_declaration)
		{
			return true;
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
			return true;
		}

		if (t == ::Celeste::ast::Type::template_code_function_declaration)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::code_function_declaration)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::return_statement)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::symbol_increase)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::symbol_decrease)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::expression)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::expression_no_value)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::t_expression)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::f_expression)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::display_call)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::for_loop)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::for_iteration_loop)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::for_each_loop)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::for_variable)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::iterator)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::for_block)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::namespace_declaration)
		{
			return true;
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
			return true;
		}

		if (t == ::Celeste::ast::Type::namespace_name)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::inline_class_declaration)
		{
			return true;
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
			return true;
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
			return true;
		}

		if (t == ::Celeste::ast::Type::inline_class_declaration_composite_name)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::created_class_name)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::code_block)
		{
			return true;
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
			return true;
		}

		if (t == ::Celeste::ast::Type::code_block_argument)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::code_block_argument_name)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::code_block_program)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::variable_declaration)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::array_declaration)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::variable_name)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::template_function_declaration)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::function_declaration)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::trailing_return_type)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::return_type)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::conditional_function_argument)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::function_argument)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::function_argument_type)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::function_argument_name)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::condition_modifier_function_call)
		{
			return true;
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
			return true;
		}

		if (t == ::Celeste::ast::Type::condition_modifier_argument)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::function_body)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::function_name)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::template_class_declaration)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::template_parameter)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::template_parameter_name)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::class_declaration)
		{
			return true;
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
			return true;
		}

		if (t == ::Celeste::ast::Type::execution_keyword_permutation)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::class_body)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__class_stmt__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::class_stmt)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::class_stmt_member_field_declaration)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::member_field_name)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::class_stmt_member_function)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::class_stmt_member_template_function)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::template_class_stmt_constructor)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::class_stmt_constructor)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::accessibility)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::class_inherit_base)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::inherit_base)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::inherit_base_name)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::compound_base)
		{
			return true;
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
			return true;
		}

		if (t == ::Celeste::ast::Type::compound_base_alias)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::enum_declaration)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__enumeration__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::enum_name)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::enumeration)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::enumeration_name)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::enumeration_value)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::symbol_reference)
		{
			return true;
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
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__symbol_access__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::symbol)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::symbol_access)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::auto_deduce_array)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::symbol_name_secondary)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::symbol_name)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::function_access)
		{
			return true;
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
			return true;
		}

		if (t == ::Celeste::ast::Type::anonymous_access)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::type)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::deamerreserved_star__type_modifier__)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::type_modifier)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::value_list)
		{
			return true;
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
			return true;
		}

		if (t == ::Celeste::ast::Type::value)
		{
			return true;
		}

		if (t == ::Celeste::ast::Type::tuple)
		{
			return true;
		}


		return false;
	}


}}}

#endif // CELESTE_AST_RELATION_NODEISNONTERMINAL_H