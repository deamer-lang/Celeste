#ifndef CELESTE_AST_RELATION_NODEENUMTOTYPE_H
#define CELESTE_AST_RELATION_NODEENUMTOTYPE_H

#include "Celeste/Ast/Enum/Type.h"

#include "Celeste/Ast/Node/program.h"
#include "Celeste/Ast/Node/root_program.h"
#include "Celeste/Ast/Node/standard_block.h"
#include "Celeste/Ast/Node/deamerreserved_star__stmt__.h"
#include "Celeste/Ast/Node/stmt.h"
#include "Celeste/Ast/Node/import_statement.h"
#include "Celeste/Ast/Node/file_import.h"
#include "Celeste/Ast/Node/mutation_group.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__symbol_reference__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__symbol_reference__.h"
#include "Celeste/Ast/Node/assignment.h"
#include "Celeste/Ast/Node/assignment_operator.h"
#include "Celeste/Ast/Node/conditional_if.h"
#include "Celeste/Ast/Node/conditional_else_if.h"
#include "Celeste/Ast/Node/conditional_else.h"
#include "Celeste/Ast/Node/conditional_block.h"
#include "Celeste/Ast/Node/template_conditional_function_declaration.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__template_parameter__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__template_parameter__.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__conditional_function_argument__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__conditional_function_argument__.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__function_argument__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__function_argument__.h"
#include "Celeste/Ast/Node/conditional_function_declaration.h"
#include "Celeste/Ast/Node/template_code_function_declaration.h"
#include "Celeste/Ast/Node/code_function_declaration.h"
#include "Celeste/Ast/Node/return_statement.h"
#include "Celeste/Ast/Node/symbol_increase.h"
#include "Celeste/Ast/Node/symbol_decrease.h"
#include "Celeste/Ast/Node/expression.h"
#include "Celeste/Ast/Node/expression_no_value.h"
#include "Celeste/Ast/Node/t_expression.h"
#include "Celeste/Ast/Node/f_expression.h"
#include "Celeste/Ast/Node/display_call.h"
#include "Celeste/Ast/Node/for_loop.h"
#include "Celeste/Ast/Node/for_iteration_loop.h"
#include "Celeste/Ast/Node/for_each_loop.h"
#include "Celeste/Ast/Node/for_variable.h"
#include "Celeste/Ast/Node/iterator.h"
#include "Celeste/Ast/Node/for_block.h"
#include "Celeste/Ast/Node/namespace_declaration.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__namespace_name__.h"
#include "Celeste/Ast/Node/deamerreserved_star__DOT__namespace_name__.h"
#include "Celeste/Ast/Node/namespace_block.h"
#include "Celeste/Ast/Node/namespace_name.h"
#include "Celeste/Ast/Node/inline_class_declaration.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__inline_class_declaration_composite__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__inline_class_declaration_composite__.h"
#include "Celeste/Ast/Node/inline_class_declaration_composite.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__inline_class_declaration_composite_alias__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__inline_class_declaration_composite_alias__.h"
#include "Celeste/Ast/Node/inline_class_declaration_composite_alias.h"
#include "Celeste/Ast/Node/inline_class_declaration_composite_name.h"
#include "Celeste/Ast/Node/created_class_name.h"
#include "Celeste/Ast/Node/code_block.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__code_block_input_argument__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__code_block_input_argument__.h"
#include "Celeste/Ast/Node/code_block_input_argument.h"
#include "Celeste/Ast/Node/code_block_argument.h"
#include "Celeste/Ast/Node/code_block_argument_name.h"
#include "Celeste/Ast/Node/code_block_program.h"
#include "Celeste/Ast/Node/variable_declaration.h"
#include "Celeste/Ast/Node/array_declaration.h"
#include "Celeste/Ast/Node/variable_name.h"
#include "Celeste/Ast/Node/template_function_declaration.h"
#include "Celeste/Ast/Node/function_declaration.h"
#include "Celeste/Ast/Node/trailing_return_type.h"
#include "Celeste/Ast/Node/return_type.h"
#include "Celeste/Ast/Node/conditional_function_argument.h"
#include "Celeste/Ast/Node/function_argument.h"
#include "Celeste/Ast/Node/function_argument_type.h"
#include "Celeste/Ast/Node/function_argument_name.h"
#include "Celeste/Ast/Node/condition_modifier_function_call.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__condition_modifier_argument__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__condition_modifier_argument__.h"
#include "Celeste/Ast/Node/condition_modifier_name.h"
#include "Celeste/Ast/Node/condition_modifier_argument.h"
#include "Celeste/Ast/Node/function_body.h"
#include "Celeste/Ast/Node/function_name.h"
#include "Celeste/Ast/Node/template_class_declaration.h"
#include "Celeste/Ast/Node/template_parameter.h"
#include "Celeste/Ast/Node/template_parameter_name.h"
#include "Celeste/Ast/Node/class_declaration.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__class_inherit_base__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__class_inherit_base__.h"
#include "Celeste/Ast/Node/class_name.h"
#include "Celeste/Ast/Node/execution_keyword_permutation.h"
#include "Celeste/Ast/Node/class_body.h"
#include "Celeste/Ast/Node/deamerreserved_star__class_stmt__.h"
#include "Celeste/Ast/Node/class_stmt.h"
#include "Celeste/Ast/Node/class_stmt_member_field_declaration.h"
#include "Celeste/Ast/Node/member_field_name.h"
#include "Celeste/Ast/Node/class_stmt_member_function.h"
#include "Celeste/Ast/Node/class_stmt_member_template_function.h"
#include "Celeste/Ast/Node/template_class_stmt_constructor.h"
#include "Celeste/Ast/Node/class_stmt_constructor.h"
#include "Celeste/Ast/Node/accessibility.h"
#include "Celeste/Ast/Node/class_inherit_base.h"
#include "Celeste/Ast/Node/inherit_base.h"
#include "Celeste/Ast/Node/inherit_base_name.h"
#include "Celeste/Ast/Node/compound_base.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__compound_base_alias__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__compound_base_alias__.h"
#include "Celeste/Ast/Node/compound_base_name.h"
#include "Celeste/Ast/Node/compound_base_alias.h"
#include "Celeste/Ast/Node/enum_declaration.h"
#include "Celeste/Ast/Node/deamerreserved_star__enumeration__.h"
#include "Celeste/Ast/Node/enum_name.h"
#include "Celeste/Ast/Node/enumeration.h"
#include "Celeste/Ast/Node/enumeration_name.h"
#include "Celeste/Ast/Node/enumeration_value.h"
#include "Celeste/Ast/Node/symbol_reference.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__symbol__.h"
#include "Celeste/Ast/Node/deamerreserved_star__DOT__symbol_secondary__.h"
#include "Celeste/Ast/Node/symbol_secondary.h"
#include "Celeste/Ast/Node/deamerreserved_star__symbol_access__.h"
#include "Celeste/Ast/Node/symbol.h"
#include "Celeste/Ast/Node/symbol_access.h"
#include "Celeste/Ast/Node/auto_deduce_array.h"
#include "Celeste/Ast/Node/symbol_name_secondary.h"
#include "Celeste/Ast/Node/symbol_name.h"
#include "Celeste/Ast/Node/function_access.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__expression__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__expression__.h"
#include "Celeste/Ast/Node/index_access.h"
#include "Celeste/Ast/Node/anonymous_access.h"
#include "Celeste/Ast/Node/type.h"
#include "Celeste/Ast/Node/deamerreserved_star__type_modifier__.h"
#include "Celeste/Ast/Node/type_modifier.h"
#include "Celeste/Ast/Node/value_list.h"
#include "Celeste/Ast/Node/deamerreserved_arrow__full_value__.h"
#include "Celeste/Ast/Node/deamerreserved_star__COMMA__full_value__.h"
#include "Celeste/Ast/Node/full_value.h"
#include "Celeste/Ast/Node/value.h"
#include "Celeste/Ast/Node/tuple.h"
#include "Celeste/Ast/Node/SINGLE_COMMENT.h"
#include "Celeste/Ast/Node/CONSTANT.h"
#include "Celeste/Ast/Node/FUNCTION.h"
#include "Celeste/Ast/Node/CLASS.h"
#include "Celeste/Ast/Node/ENUM.h"
#include "Celeste/Ast/Node/CONDITIONAL.h"
#include "Celeste/Ast/Node/CODE.h"
#include "Celeste/Ast/Node/RUNTIME.h"
#include "Celeste/Ast/Node/STATIC.h"
#include "Celeste/Ast/Node/AUTO.h"
#include "Celeste/Ast/Node/AUTOTYPE.h"
#include "Celeste/Ast/Node/TEMPLATE.h"
#include "Celeste/Ast/Node/NAMESPACE.h"
#include "Celeste/Ast/Node/OVERRIDE.h"
#include "Celeste/Ast/Node/VIRTUAL.h"
#include "Celeste/Ast/Node/PURE.h"
#include "Celeste/Ast/Node/AS.h"
#include "Celeste/Ast/Node/IN.h"
#include "Celeste/Ast/Node/DISPLAY.h"
#include "Celeste/Ast/Node/RETURN.h"
#include "Celeste/Ast/Node/FOR.h"
#include "Celeste/Ast/Node/IF.h"
#include "Celeste/Ast/Node/ELSEIF.h"
#include "Celeste/Ast/Node/ELSE.h"
#include "Celeste/Ast/Node/INLINE.h"
#include "Celeste/Ast/Node/CONSTRUCTOR.h"
#include "Celeste/Ast/Node/FILE_.h"
#include "Celeste/Ast/Node/PROGRAM_.h"
#include "Celeste/Ast/Node/IMPORT.h"
#include "Celeste/Ast/Node/PUBLIC.h"
#include "Celeste/Ast/Node/PROTECTED.h"
#include "Celeste/Ast/Node/PRIVATE.h"
#include "Celeste/Ast/Node/INHERIT.h"
#include "Celeste/Ast/Node/COMPOSITE.h"
#include "Celeste/Ast/Node/LEFT_BRACKET.h"
#include "Celeste/Ast/Node/RIGHT_BRACKET.h"
#include "Celeste/Ast/Node/LEFT_SQUARE_BRACKET.h"
#include "Celeste/Ast/Node/RIGHT_SQUARE_BRACKET.h"
#include "Celeste/Ast/Node/LEFT_PARANTHESIS.h"
#include "Celeste/Ast/Node/RIGHT_PARANTHESIS.h"
#include "Celeste/Ast/Node/COLON.h"
#include "Celeste/Ast/Node/SEMICOLON.h"
#include "Celeste/Ast/Node/COMMA.h"
#include "Celeste/Ast/Node/DOT.h"
#include "Celeste/Ast/Node/LTEQ.h"
#include "Celeste/Ast/Node/GTEQ.h"
#include "Celeste/Ast/Node/LT.h"
#include "Celeste/Ast/Node/GT.h"
#include "Celeste/Ast/Node/PLUSEQ.h"
#include "Celeste/Ast/Node/MINUSEQ.h"
#include "Celeste/Ast/Node/MULTIPLYEQ.h"
#include "Celeste/Ast/Node/DIVIDEEQ.h"
#include "Celeste/Ast/Node/EQEQ.h"
#include "Celeste/Ast/Node/EQ.h"
#include "Celeste/Ast/Node/NOTEQ.h"
#include "Celeste/Ast/Node/NOT.h"
#include "Celeste/Ast/Node/PLUSPLUS.h"
#include "Celeste/Ast/Node/PLUS.h"
#include "Celeste/Ast/Node/MINUSMINUS.h"
#include "Celeste/Ast/Node/MINUS.h"
#include "Celeste/Ast/Node/DIVIDE.h"
#include "Celeste/Ast/Node/MULTIPLY.h"
#include "Celeste/Ast/Node/VARNAME.h"
#include "Celeste/Ast/Node/NUMBER.h"
#include "Celeste/Ast/Node/DECIMAL.h"
#include "Celeste/Ast/Node/TEXT.h"
#include "Celeste/Ast/Node/ESCAPE_CHARS.h"


namespace Celeste { namespace ast { namespace relation { 

	template<::Celeste::ast::Type T>
	struct NodeEnumToType
	{
		constexpr static auto value = T;
		using type = void;
	};


	template<>
	struct NodeEnumToType<::Celeste::ast::Type::program>
	{
		constexpr static auto value = ::Celeste::ast::Type::program;
		using type = ::Celeste::ast::node::program;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::root_program>
	{
		constexpr static auto value = ::Celeste::ast::Type::root_program;
		using type = ::Celeste::ast::node::root_program;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::standard_block>
	{
		constexpr static auto value = ::Celeste::ast::Type::standard_block;
		using type = ::Celeste::ast::node::standard_block;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_star__stmt__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__stmt__;
		using type = ::Celeste::ast::node::deamerreserved_star__stmt__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::stmt>
	{
		constexpr static auto value = ::Celeste::ast::Type::stmt;
		using type = ::Celeste::ast::node::stmt;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::import_statement>
	{
		constexpr static auto value = ::Celeste::ast::Type::import_statement;
		using type = ::Celeste::ast::node::import_statement;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::file_import>
	{
		constexpr static auto value = ::Celeste::ast::Type::file_import;
		using type = ::Celeste::ast::node::file_import;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::mutation_group>
	{
		constexpr static auto value = ::Celeste::ast::Type::mutation_group;
		using type = ::Celeste::ast::node::mutation_group;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_arrow__symbol_reference__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__symbol_reference__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__symbol_reference__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_star__COMMA__symbol_reference__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__COMMA__symbol_reference__;
		using type = ::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::assignment>
	{
		constexpr static auto value = ::Celeste::ast::Type::assignment;
		using type = ::Celeste::ast::node::assignment;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::assignment_operator>
	{
		constexpr static auto value = ::Celeste::ast::Type::assignment_operator;
		using type = ::Celeste::ast::node::assignment_operator;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::conditional_if>
	{
		constexpr static auto value = ::Celeste::ast::Type::conditional_if;
		using type = ::Celeste::ast::node::conditional_if;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::conditional_else_if>
	{
		constexpr static auto value = ::Celeste::ast::Type::conditional_else_if;
		using type = ::Celeste::ast::node::conditional_else_if;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::conditional_else>
	{
		constexpr static auto value = ::Celeste::ast::Type::conditional_else;
		using type = ::Celeste::ast::node::conditional_else;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::conditional_block>
	{
		constexpr static auto value = ::Celeste::ast::Type::conditional_block;
		using type = ::Celeste::ast::node::conditional_block;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::template_conditional_function_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::template_conditional_function_declaration;
		using type = ::Celeste::ast::node::template_conditional_function_declaration;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_arrow__template_parameter__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__template_parameter__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__template_parameter__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_star__COMMA__template_parameter__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__COMMA__template_parameter__;
		using type = ::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_arrow__conditional_function_argument__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__conditional_function_argument__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_star__COMMA__conditional_function_argument__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__COMMA__conditional_function_argument__;
		using type = ::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_arrow__function_argument__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__function_argument__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__function_argument__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__;
		using type = ::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::conditional_function_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::conditional_function_declaration;
		using type = ::Celeste::ast::node::conditional_function_declaration;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::template_code_function_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::template_code_function_declaration;
		using type = ::Celeste::ast::node::template_code_function_declaration;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::code_function_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::code_function_declaration;
		using type = ::Celeste::ast::node::code_function_declaration;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::return_statement>
	{
		constexpr static auto value = ::Celeste::ast::Type::return_statement;
		using type = ::Celeste::ast::node::return_statement;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::symbol_increase>
	{
		constexpr static auto value = ::Celeste::ast::Type::symbol_increase;
		using type = ::Celeste::ast::node::symbol_increase;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::symbol_decrease>
	{
		constexpr static auto value = ::Celeste::ast::Type::symbol_decrease;
		using type = ::Celeste::ast::node::symbol_decrease;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::expression>
	{
		constexpr static auto value = ::Celeste::ast::Type::expression;
		using type = ::Celeste::ast::node::expression;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::expression_no_value>
	{
		constexpr static auto value = ::Celeste::ast::Type::expression_no_value;
		using type = ::Celeste::ast::node::expression_no_value;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::t_expression>
	{
		constexpr static auto value = ::Celeste::ast::Type::t_expression;
		using type = ::Celeste::ast::node::t_expression;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::f_expression>
	{
		constexpr static auto value = ::Celeste::ast::Type::f_expression;
		using type = ::Celeste::ast::node::f_expression;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::display_call>
	{
		constexpr static auto value = ::Celeste::ast::Type::display_call;
		using type = ::Celeste::ast::node::display_call;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::for_loop>
	{
		constexpr static auto value = ::Celeste::ast::Type::for_loop;
		using type = ::Celeste::ast::node::for_loop;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::for_iteration_loop>
	{
		constexpr static auto value = ::Celeste::ast::Type::for_iteration_loop;
		using type = ::Celeste::ast::node::for_iteration_loop;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::for_each_loop>
	{
		constexpr static auto value = ::Celeste::ast::Type::for_each_loop;
		using type = ::Celeste::ast::node::for_each_loop;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::for_variable>
	{
		constexpr static auto value = ::Celeste::ast::Type::for_variable;
		using type = ::Celeste::ast::node::for_variable;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::iterator>
	{
		constexpr static auto value = ::Celeste::ast::Type::iterator;
		using type = ::Celeste::ast::node::iterator;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::for_block>
	{
		constexpr static auto value = ::Celeste::ast::Type::for_block;
		using type = ::Celeste::ast::node::for_block;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::namespace_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::namespace_declaration;
		using type = ::Celeste::ast::node::namespace_declaration;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_arrow__namespace_name__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__namespace_name__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__namespace_name__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_star__DOT__namespace_name__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__DOT__namespace_name__;
		using type = ::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::namespace_block>
	{
		constexpr static auto value = ::Celeste::ast::Type::namespace_block;
		using type = ::Celeste::ast::node::namespace_block;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::namespace_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::namespace_name;
		using type = ::Celeste::ast::node::namespace_name;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::inline_class_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::inline_class_declaration;
		using type = ::Celeste::ast::node::inline_class_declaration;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite__;
		using type = ::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::inline_class_declaration_composite>
	{
		constexpr static auto value = ::Celeste::ast::Type::inline_class_declaration_composite;
		using type = ::Celeste::ast::node::inline_class_declaration_composite;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite_alias__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite_alias__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__;
		using type = ::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::inline_class_declaration_composite_alias>
	{
		constexpr static auto value = ::Celeste::ast::Type::inline_class_declaration_composite_alias;
		using type = ::Celeste::ast::node::inline_class_declaration_composite_alias;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::inline_class_declaration_composite_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::inline_class_declaration_composite_name;
		using type = ::Celeste::ast::node::inline_class_declaration_composite_name;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::created_class_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::created_class_name;
		using type = ::Celeste::ast::node::created_class_name;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::code_block>
	{
		constexpr static auto value = ::Celeste::ast::Type::code_block;
		using type = ::Celeste::ast::node::code_block;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_arrow__code_block_input_argument__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__code_block_input_argument__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_star__COMMA__code_block_input_argument__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__COMMA__code_block_input_argument__;
		using type = ::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::code_block_input_argument>
	{
		constexpr static auto value = ::Celeste::ast::Type::code_block_input_argument;
		using type = ::Celeste::ast::node::code_block_input_argument;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::code_block_argument>
	{
		constexpr static auto value = ::Celeste::ast::Type::code_block_argument;
		using type = ::Celeste::ast::node::code_block_argument;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::code_block_argument_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::code_block_argument_name;
		using type = ::Celeste::ast::node::code_block_argument_name;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::code_block_program>
	{
		constexpr static auto value = ::Celeste::ast::Type::code_block_program;
		using type = ::Celeste::ast::node::code_block_program;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::variable_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::variable_declaration;
		using type = ::Celeste::ast::node::variable_declaration;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::array_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::array_declaration;
		using type = ::Celeste::ast::node::array_declaration;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::variable_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::variable_name;
		using type = ::Celeste::ast::node::variable_name;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::template_function_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::template_function_declaration;
		using type = ::Celeste::ast::node::template_function_declaration;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::function_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::function_declaration;
		using type = ::Celeste::ast::node::function_declaration;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::trailing_return_type>
	{
		constexpr static auto value = ::Celeste::ast::Type::trailing_return_type;
		using type = ::Celeste::ast::node::trailing_return_type;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::return_type>
	{
		constexpr static auto value = ::Celeste::ast::Type::return_type;
		using type = ::Celeste::ast::node::return_type;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::conditional_function_argument>
	{
		constexpr static auto value = ::Celeste::ast::Type::conditional_function_argument;
		using type = ::Celeste::ast::node::conditional_function_argument;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::function_argument>
	{
		constexpr static auto value = ::Celeste::ast::Type::function_argument;
		using type = ::Celeste::ast::node::function_argument;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::function_argument_type>
	{
		constexpr static auto value = ::Celeste::ast::Type::function_argument_type;
		using type = ::Celeste::ast::node::function_argument_type;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::function_argument_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::function_argument_name;
		using type = ::Celeste::ast::node::function_argument_name;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::condition_modifier_function_call>
	{
		constexpr static auto value = ::Celeste::ast::Type::condition_modifier_function_call;
		using type = ::Celeste::ast::node::condition_modifier_function_call;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_arrow__condition_modifier_argument__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__condition_modifier_argument__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_star__COMMA__condition_modifier_argument__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__COMMA__condition_modifier_argument__;
		using type = ::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::condition_modifier_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::condition_modifier_name;
		using type = ::Celeste::ast::node::condition_modifier_name;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::condition_modifier_argument>
	{
		constexpr static auto value = ::Celeste::ast::Type::condition_modifier_argument;
		using type = ::Celeste::ast::node::condition_modifier_argument;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::function_body>
	{
		constexpr static auto value = ::Celeste::ast::Type::function_body;
		using type = ::Celeste::ast::node::function_body;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::function_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::function_name;
		using type = ::Celeste::ast::node::function_name;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::template_class_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::template_class_declaration;
		using type = ::Celeste::ast::node::template_class_declaration;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::template_parameter>
	{
		constexpr static auto value = ::Celeste::ast::Type::template_parameter;
		using type = ::Celeste::ast::node::template_parameter;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::template_parameter_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::template_parameter_name;
		using type = ::Celeste::ast::node::template_parameter_name;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::class_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::class_declaration;
		using type = ::Celeste::ast::node::class_declaration;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_arrow__class_inherit_base__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__class_inherit_base__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__class_inherit_base__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_star__COMMA__class_inherit_base__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__COMMA__class_inherit_base__;
		using type = ::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::class_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::class_name;
		using type = ::Celeste::ast::node::class_name;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::execution_keyword_permutation>
	{
		constexpr static auto value = ::Celeste::ast::Type::execution_keyword_permutation;
		using type = ::Celeste::ast::node::execution_keyword_permutation;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::class_body>
	{
		constexpr static auto value = ::Celeste::ast::Type::class_body;
		using type = ::Celeste::ast::node::class_body;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_star__class_stmt__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__class_stmt__;
		using type = ::Celeste::ast::node::deamerreserved_star__class_stmt__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::class_stmt>
	{
		constexpr static auto value = ::Celeste::ast::Type::class_stmt;
		using type = ::Celeste::ast::node::class_stmt;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::class_stmt_member_field_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::class_stmt_member_field_declaration;
		using type = ::Celeste::ast::node::class_stmt_member_field_declaration;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::member_field_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::member_field_name;
		using type = ::Celeste::ast::node::member_field_name;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::class_stmt_member_function>
	{
		constexpr static auto value = ::Celeste::ast::Type::class_stmt_member_function;
		using type = ::Celeste::ast::node::class_stmt_member_function;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::class_stmt_member_template_function>
	{
		constexpr static auto value = ::Celeste::ast::Type::class_stmt_member_template_function;
		using type = ::Celeste::ast::node::class_stmt_member_template_function;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::template_class_stmt_constructor>
	{
		constexpr static auto value = ::Celeste::ast::Type::template_class_stmt_constructor;
		using type = ::Celeste::ast::node::template_class_stmt_constructor;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::class_stmt_constructor>
	{
		constexpr static auto value = ::Celeste::ast::Type::class_stmt_constructor;
		using type = ::Celeste::ast::node::class_stmt_constructor;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::accessibility>
	{
		constexpr static auto value = ::Celeste::ast::Type::accessibility;
		using type = ::Celeste::ast::node::accessibility;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::class_inherit_base>
	{
		constexpr static auto value = ::Celeste::ast::Type::class_inherit_base;
		using type = ::Celeste::ast::node::class_inherit_base;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::inherit_base>
	{
		constexpr static auto value = ::Celeste::ast::Type::inherit_base;
		using type = ::Celeste::ast::node::inherit_base;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::inherit_base_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::inherit_base_name;
		using type = ::Celeste::ast::node::inherit_base_name;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::compound_base>
	{
		constexpr static auto value = ::Celeste::ast::Type::compound_base;
		using type = ::Celeste::ast::node::compound_base;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_arrow__compound_base_alias__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__compound_base_alias__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__compound_base_alias__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_star__COMMA__compound_base_alias__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__COMMA__compound_base_alias__;
		using type = ::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::compound_base_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::compound_base_name;
		using type = ::Celeste::ast::node::compound_base_name;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::compound_base_alias>
	{
		constexpr static auto value = ::Celeste::ast::Type::compound_base_alias;
		using type = ::Celeste::ast::node::compound_base_alias;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::enum_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::enum_declaration;
		using type = ::Celeste::ast::node::enum_declaration;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_star__enumeration__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__enumeration__;
		using type = ::Celeste::ast::node::deamerreserved_star__enumeration__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::enum_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::enum_name;
		using type = ::Celeste::ast::node::enum_name;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::enumeration>
	{
		constexpr static auto value = ::Celeste::ast::Type::enumeration;
		using type = ::Celeste::ast::node::enumeration;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::enumeration_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::enumeration_name;
		using type = ::Celeste::ast::node::enumeration_name;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::enumeration_value>
	{
		constexpr static auto value = ::Celeste::ast::Type::enumeration_value;
		using type = ::Celeste::ast::node::enumeration_value;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::symbol_reference>
	{
		constexpr static auto value = ::Celeste::ast::Type::symbol_reference;
		using type = ::Celeste::ast::node::symbol_reference;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_arrow__symbol__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__symbol__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__symbol__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_star__DOT__symbol_secondary__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__DOT__symbol_secondary__;
		using type = ::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::symbol_secondary>
	{
		constexpr static auto value = ::Celeste::ast::Type::symbol_secondary;
		using type = ::Celeste::ast::node::symbol_secondary;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_star__symbol_access__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__symbol_access__;
		using type = ::Celeste::ast::node::deamerreserved_star__symbol_access__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::symbol>
	{
		constexpr static auto value = ::Celeste::ast::Type::symbol;
		using type = ::Celeste::ast::node::symbol;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::symbol_access>
	{
		constexpr static auto value = ::Celeste::ast::Type::symbol_access;
		using type = ::Celeste::ast::node::symbol_access;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::auto_deduce_array>
	{
		constexpr static auto value = ::Celeste::ast::Type::auto_deduce_array;
		using type = ::Celeste::ast::node::auto_deduce_array;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::symbol_name_secondary>
	{
		constexpr static auto value = ::Celeste::ast::Type::symbol_name_secondary;
		using type = ::Celeste::ast::node::symbol_name_secondary;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::symbol_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::symbol_name;
		using type = ::Celeste::ast::node::symbol_name;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::function_access>
	{
		constexpr static auto value = ::Celeste::ast::Type::function_access;
		using type = ::Celeste::ast::node::function_access;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_arrow__expression__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__expression__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__expression__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_star__COMMA__expression__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__COMMA__expression__;
		using type = ::Celeste::ast::node::deamerreserved_star__COMMA__expression__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::index_access>
	{
		constexpr static auto value = ::Celeste::ast::Type::index_access;
		using type = ::Celeste::ast::node::index_access;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::anonymous_access>
	{
		constexpr static auto value = ::Celeste::ast::Type::anonymous_access;
		using type = ::Celeste::ast::node::anonymous_access;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::type>
	{
		constexpr static auto value = ::Celeste::ast::Type::type;
		using type = ::Celeste::ast::node::type;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_star__type_modifier__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__type_modifier__;
		using type = ::Celeste::ast::node::deamerreserved_star__type_modifier__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::type_modifier>
	{
		constexpr static auto value = ::Celeste::ast::Type::type_modifier;
		using type = ::Celeste::ast::node::type_modifier;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::value_list>
	{
		constexpr static auto value = ::Celeste::ast::Type::value_list;
		using type = ::Celeste::ast::node::value_list;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_arrow__full_value__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__full_value__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__full_value__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::deamerreserved_star__COMMA__full_value__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__COMMA__full_value__;
		using type = ::Celeste::ast::node::deamerreserved_star__COMMA__full_value__;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::full_value>
	{
		constexpr static auto value = ::Celeste::ast::Type::full_value;
		using type = ::Celeste::ast::node::full_value;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::value>
	{
		constexpr static auto value = ::Celeste::ast::Type::value;
		using type = ::Celeste::ast::node::value;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::tuple>
	{
		constexpr static auto value = ::Celeste::ast::Type::tuple;
		using type = ::Celeste::ast::node::tuple;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::SINGLE_COMMENT>
	{
		constexpr static auto value = ::Celeste::ast::Type::SINGLE_COMMENT;
		using type = ::Celeste::ast::node::SINGLE_COMMENT;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::CONSTANT>
	{
		constexpr static auto value = ::Celeste::ast::Type::CONSTANT;
		using type = ::Celeste::ast::node::CONSTANT;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::FUNCTION>
	{
		constexpr static auto value = ::Celeste::ast::Type::FUNCTION;
		using type = ::Celeste::ast::node::FUNCTION;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::CLASS>
	{
		constexpr static auto value = ::Celeste::ast::Type::CLASS;
		using type = ::Celeste::ast::node::CLASS;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::ENUM>
	{
		constexpr static auto value = ::Celeste::ast::Type::ENUM;
		using type = ::Celeste::ast::node::ENUM;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::CONDITIONAL>
	{
		constexpr static auto value = ::Celeste::ast::Type::CONDITIONAL;
		using type = ::Celeste::ast::node::CONDITIONAL;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::CODE>
	{
		constexpr static auto value = ::Celeste::ast::Type::CODE;
		using type = ::Celeste::ast::node::CODE;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::RUNTIME>
	{
		constexpr static auto value = ::Celeste::ast::Type::RUNTIME;
		using type = ::Celeste::ast::node::RUNTIME;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::STATIC>
	{
		constexpr static auto value = ::Celeste::ast::Type::STATIC;
		using type = ::Celeste::ast::node::STATIC;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::AUTO>
	{
		constexpr static auto value = ::Celeste::ast::Type::AUTO;
		using type = ::Celeste::ast::node::AUTO;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::AUTOTYPE>
	{
		constexpr static auto value = ::Celeste::ast::Type::AUTOTYPE;
		using type = ::Celeste::ast::node::AUTOTYPE;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::TEMPLATE>
	{
		constexpr static auto value = ::Celeste::ast::Type::TEMPLATE;
		using type = ::Celeste::ast::node::TEMPLATE;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::NAMESPACE>
	{
		constexpr static auto value = ::Celeste::ast::Type::NAMESPACE;
		using type = ::Celeste::ast::node::NAMESPACE;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::OVERRIDE>
	{
		constexpr static auto value = ::Celeste::ast::Type::OVERRIDE;
		using type = ::Celeste::ast::node::OVERRIDE;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::VIRTUAL>
	{
		constexpr static auto value = ::Celeste::ast::Type::VIRTUAL;
		using type = ::Celeste::ast::node::VIRTUAL;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::PURE>
	{
		constexpr static auto value = ::Celeste::ast::Type::PURE;
		using type = ::Celeste::ast::node::PURE;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::AS>
	{
		constexpr static auto value = ::Celeste::ast::Type::AS;
		using type = ::Celeste::ast::node::AS;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::IN>
	{
		constexpr static auto value = ::Celeste::ast::Type::IN;
		using type = ::Celeste::ast::node::IN;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::DISPLAY>
	{
		constexpr static auto value = ::Celeste::ast::Type::DISPLAY;
		using type = ::Celeste::ast::node::DISPLAY;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::RETURN>
	{
		constexpr static auto value = ::Celeste::ast::Type::RETURN;
		using type = ::Celeste::ast::node::RETURN;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::FOR>
	{
		constexpr static auto value = ::Celeste::ast::Type::FOR;
		using type = ::Celeste::ast::node::FOR;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::IF>
	{
		constexpr static auto value = ::Celeste::ast::Type::IF;
		using type = ::Celeste::ast::node::IF;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::ELSEIF>
	{
		constexpr static auto value = ::Celeste::ast::Type::ELSEIF;
		using type = ::Celeste::ast::node::ELSEIF;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::ELSE>
	{
		constexpr static auto value = ::Celeste::ast::Type::ELSE;
		using type = ::Celeste::ast::node::ELSE;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::INLINE>
	{
		constexpr static auto value = ::Celeste::ast::Type::INLINE;
		using type = ::Celeste::ast::node::INLINE;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::CONSTRUCTOR>
	{
		constexpr static auto value = ::Celeste::ast::Type::CONSTRUCTOR;
		using type = ::Celeste::ast::node::CONSTRUCTOR;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::FILE_>
	{
		constexpr static auto value = ::Celeste::ast::Type::FILE_;
		using type = ::Celeste::ast::node::FILE_;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::PROGRAM_>
	{
		constexpr static auto value = ::Celeste::ast::Type::PROGRAM_;
		using type = ::Celeste::ast::node::PROGRAM_;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::IMPORT>
	{
		constexpr static auto value = ::Celeste::ast::Type::IMPORT;
		using type = ::Celeste::ast::node::IMPORT;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::PUBLIC>
	{
		constexpr static auto value = ::Celeste::ast::Type::PUBLIC;
		using type = ::Celeste::ast::node::PUBLIC;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::PROTECTED>
	{
		constexpr static auto value = ::Celeste::ast::Type::PROTECTED;
		using type = ::Celeste::ast::node::PROTECTED;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::PRIVATE>
	{
		constexpr static auto value = ::Celeste::ast::Type::PRIVATE;
		using type = ::Celeste::ast::node::PRIVATE;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::INHERIT>
	{
		constexpr static auto value = ::Celeste::ast::Type::INHERIT;
		using type = ::Celeste::ast::node::INHERIT;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::COMPOSITE>
	{
		constexpr static auto value = ::Celeste::ast::Type::COMPOSITE;
		using type = ::Celeste::ast::node::COMPOSITE;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::LEFT_BRACKET>
	{
		constexpr static auto value = ::Celeste::ast::Type::LEFT_BRACKET;
		using type = ::Celeste::ast::node::LEFT_BRACKET;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::RIGHT_BRACKET>
	{
		constexpr static auto value = ::Celeste::ast::Type::RIGHT_BRACKET;
		using type = ::Celeste::ast::node::RIGHT_BRACKET;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::LEFT_SQUARE_BRACKET>
	{
		constexpr static auto value = ::Celeste::ast::Type::LEFT_SQUARE_BRACKET;
		using type = ::Celeste::ast::node::LEFT_SQUARE_BRACKET;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::RIGHT_SQUARE_BRACKET>
	{
		constexpr static auto value = ::Celeste::ast::Type::RIGHT_SQUARE_BRACKET;
		using type = ::Celeste::ast::node::RIGHT_SQUARE_BRACKET;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::LEFT_PARANTHESIS>
	{
		constexpr static auto value = ::Celeste::ast::Type::LEFT_PARANTHESIS;
		using type = ::Celeste::ast::node::LEFT_PARANTHESIS;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::RIGHT_PARANTHESIS>
	{
		constexpr static auto value = ::Celeste::ast::Type::RIGHT_PARANTHESIS;
		using type = ::Celeste::ast::node::RIGHT_PARANTHESIS;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::COLON>
	{
		constexpr static auto value = ::Celeste::ast::Type::COLON;
		using type = ::Celeste::ast::node::COLON;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::SEMICOLON>
	{
		constexpr static auto value = ::Celeste::ast::Type::SEMICOLON;
		using type = ::Celeste::ast::node::SEMICOLON;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::COMMA>
	{
		constexpr static auto value = ::Celeste::ast::Type::COMMA;
		using type = ::Celeste::ast::node::COMMA;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::DOT>
	{
		constexpr static auto value = ::Celeste::ast::Type::DOT;
		using type = ::Celeste::ast::node::DOT;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::LTEQ>
	{
		constexpr static auto value = ::Celeste::ast::Type::LTEQ;
		using type = ::Celeste::ast::node::LTEQ;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::GTEQ>
	{
		constexpr static auto value = ::Celeste::ast::Type::GTEQ;
		using type = ::Celeste::ast::node::GTEQ;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::LT>
	{
		constexpr static auto value = ::Celeste::ast::Type::LT;
		using type = ::Celeste::ast::node::LT;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::GT>
	{
		constexpr static auto value = ::Celeste::ast::Type::GT;
		using type = ::Celeste::ast::node::GT;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::PLUSEQ>
	{
		constexpr static auto value = ::Celeste::ast::Type::PLUSEQ;
		using type = ::Celeste::ast::node::PLUSEQ;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::MINUSEQ>
	{
		constexpr static auto value = ::Celeste::ast::Type::MINUSEQ;
		using type = ::Celeste::ast::node::MINUSEQ;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::MULTIPLYEQ>
	{
		constexpr static auto value = ::Celeste::ast::Type::MULTIPLYEQ;
		using type = ::Celeste::ast::node::MULTIPLYEQ;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::DIVIDEEQ>
	{
		constexpr static auto value = ::Celeste::ast::Type::DIVIDEEQ;
		using type = ::Celeste::ast::node::DIVIDEEQ;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::EQEQ>
	{
		constexpr static auto value = ::Celeste::ast::Type::EQEQ;
		using type = ::Celeste::ast::node::EQEQ;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::EQ>
	{
		constexpr static auto value = ::Celeste::ast::Type::EQ;
		using type = ::Celeste::ast::node::EQ;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::NOTEQ>
	{
		constexpr static auto value = ::Celeste::ast::Type::NOTEQ;
		using type = ::Celeste::ast::node::NOTEQ;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::NOT>
	{
		constexpr static auto value = ::Celeste::ast::Type::NOT;
		using type = ::Celeste::ast::node::NOT;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::PLUSPLUS>
	{
		constexpr static auto value = ::Celeste::ast::Type::PLUSPLUS;
		using type = ::Celeste::ast::node::PLUSPLUS;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::PLUS>
	{
		constexpr static auto value = ::Celeste::ast::Type::PLUS;
		using type = ::Celeste::ast::node::PLUS;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::MINUSMINUS>
	{
		constexpr static auto value = ::Celeste::ast::Type::MINUSMINUS;
		using type = ::Celeste::ast::node::MINUSMINUS;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::MINUS>
	{
		constexpr static auto value = ::Celeste::ast::Type::MINUS;
		using type = ::Celeste::ast::node::MINUS;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::DIVIDE>
	{
		constexpr static auto value = ::Celeste::ast::Type::DIVIDE;
		using type = ::Celeste::ast::node::DIVIDE;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::MULTIPLY>
	{
		constexpr static auto value = ::Celeste::ast::Type::MULTIPLY;
		using type = ::Celeste::ast::node::MULTIPLY;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::VARNAME>
	{
		constexpr static auto value = ::Celeste::ast::Type::VARNAME;
		using type = ::Celeste::ast::node::VARNAME;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::NUMBER>
	{
		constexpr static auto value = ::Celeste::ast::Type::NUMBER;
		using type = ::Celeste::ast::node::NUMBER;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::DECIMAL>
	{
		constexpr static auto value = ::Celeste::ast::Type::DECIMAL;
		using type = ::Celeste::ast::node::DECIMAL;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::TEXT>
	{
		constexpr static auto value = ::Celeste::ast::Type::TEXT;
		using type = ::Celeste::ast::node::TEXT;
	};

	template<>
	struct NodeEnumToType<::Celeste::ast::Type::ESCAPE_CHARS>
	{
		constexpr static auto value = ::Celeste::ast::Type::ESCAPE_CHARS;
		using type = ::Celeste::ast::node::ESCAPE_CHARS;
	};


template<::Celeste::ast::Type T>
constexpr static auto NodeEnumToType_v = ::Celeste::ast::relation::NodeEnumToType<T>::value;

template<::Celeste::ast::Type T>
using NodeEnumToType_t = typename ::Celeste::ast::relation::NodeEnumToType<T>::type;

}}}

#endif // CELESTE_AST_RELATION_NODEENUMTOTYPE_H