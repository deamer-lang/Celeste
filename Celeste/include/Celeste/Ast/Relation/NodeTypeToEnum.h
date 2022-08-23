#ifndef CELESTE_AST_RELATION_NODETYPETOENUM_H
#define CELESTE_AST_RELATION_NODETYPETOENUM_H

#include "Celeste/Ast/Enum/Type.h"

namespace Celeste { namespace ast { namespace node {

class program;
class root_program;
class standard_block;
class deamerreserved_star__stmt__;
class stmt;
class import_statement;
class file_import;
class mutation_group;
class deamerreserved_arrow__symbol_reference__;
class deamerreserved_star__COMMA__symbol_reference__;
class assignment;
class assignment_operator;
class conditional_if;
class conditional_else_if;
class conditional_else;
class conditional_block;
class template_conditional_function_declaration;
class deamerreserved_arrow__template_parameter__;
class deamerreserved_star__COMMA__template_parameter__;
class deamerreserved_arrow__conditional_function_argument__;
class deamerreserved_star__COMMA__conditional_function_argument__;
class deamerreserved_arrow__function_argument__;
class deamerreserved_star__COMMA__function_argument__;
class conditional_function_declaration;
class template_code_function_declaration;
class code_function_declaration;
class return_statement;
class symbol_increase;
class symbol_decrease;
class expression;
class expression_no_value;
class t_expression;
class f_expression;
class display_call;
class for_loop;
class for_iteration_loop;
class for_each_loop;
class for_variable;
class iterator;
class for_block;
class namespace_declaration;
class deamerreserved_arrow__namespace_name__;
class deamerreserved_star__DOT__namespace_name__;
class namespace_block;
class namespace_name;
class inline_class_declaration;
class deamerreserved_arrow__inline_class_declaration_composite__;
class deamerreserved_star__COMMA__inline_class_declaration_composite__;
class inline_class_declaration_composite;
class deamerreserved_arrow__inline_class_declaration_composite_alias__;
class deamerreserved_star__COMMA__inline_class_declaration_composite_alias__;
class inline_class_declaration_composite_alias;
class inline_class_declaration_composite_name;
class created_class_name;
class code_block;
class deamerreserved_arrow__code_block_input_argument__;
class deamerreserved_star__COMMA__code_block_input_argument__;
class code_block_input_argument;
class code_block_argument;
class code_block_argument_name;
class code_block_program;
class variable_declaration;
class array_declaration;
class variable_name;
class template_function_declaration;
class function_declaration;
class trailing_return_type;
class return_type;
class conditional_function_argument;
class function_argument;
class function_argument_type;
class function_argument_name;
class condition_modifier_function_call;
class deamerreserved_arrow__condition_modifier_argument__;
class deamerreserved_star__COMMA__condition_modifier_argument__;
class condition_modifier_name;
class condition_modifier_argument;
class function_body;
class function_name;
class template_class_declaration;
class template_parameter;
class template_parameter_name;
class class_declaration;
class deamerreserved_arrow__class_inherit_base__;
class deamerreserved_star__COMMA__class_inherit_base__;
class class_name;
class execution_keyword_permutation;
class class_body;
class deamerreserved_star__class_stmt__;
class class_stmt;
class class_stmt_member_field_declaration;
class member_field_name;
class class_stmt_member_function;
class class_stmt_member_template_function;
class template_class_stmt_constructor;
class class_stmt_constructor;
class accessibility;
class class_inherit_base;
class inherit_base;
class inherit_base_name;
class compound_base;
class deamerreserved_arrow__compound_base_alias__;
class deamerreserved_star__COMMA__compound_base_alias__;
class compound_base_name;
class compound_base_alias;
class enum_declaration;
class deamerreserved_star__enumeration__;
class enum_name;
class enumeration;
class enumeration_name;
class enumeration_value;
class symbol_reference;
class deamerreserved_arrow__symbol__;
class deamerreserved_star__DOT__symbol_secondary__;
class symbol_secondary;
class deamerreserved_star__symbol_access__;
class symbol;
class symbol_access;
class auto_deduce_array;
class symbol_name_secondary;
class symbol_name;
class function_access;
class deamerreserved_arrow__expression__;
class deamerreserved_star__COMMA__expression__;
class index_access;
class anonymous_access;
class type;
class deamerreserved_star__type_modifier__;
class type_modifier;
class value_list;
class deamerreserved_arrow__full_value__;
class deamerreserved_star__COMMA__full_value__;
class full_value;
class value;
class tuple;
class SINGLE_COMMENT;
class CONSTANT;
class FUNCTION;
class CLASS;
class ENUM;
class CONDITIONAL;
class CODE;
class RUNTIME;
class STATIC;
class AUTO;
class AUTOTYPE;
class TEMPLATE;
class NAMESPACE;
class OVERRIDE;
class VIRTUAL;
class PURE;
class AS;
class IN;
class DISPLAY;
class RETURN;
class FOR;
class IF;
class ELSEIF;
class ELSE;
class INLINE;
class CONSTRUCTOR;
class FILE_;
class PROGRAM_;
class IMPORT;
class PUBLIC;
class PROTECTED;
class PRIVATE;
class INHERIT;
class COMPOSITE;
class LEFT_BRACKET;
class RIGHT_BRACKET;
class LEFT_SQUARE_BRACKET;
class RIGHT_SQUARE_BRACKET;
class LEFT_PARANTHESIS;
class RIGHT_PARANTHESIS;
class COLON;
class SEMICOLON;
class COMMA;
class DOT;
class LTEQ;
class GTEQ;
class LT;
class GT;
class PLUSEQ;
class MINUSEQ;
class MULTIPLYEQ;
class DIVIDEEQ;
class EQEQ;
class EQ;
class NOTEQ;
class NOT;
class PLUSPLUS;
class PLUS;
class MINUSMINUS;
class MINUS;
class DIVIDE;
class MULTIPLY;
class VARNAME;
class NUMBER;
class DECIMAL;
class TEXT;
class ESCAPE_CHARS;

}}}

namespace Celeste { namespace ast { namespace relation { 

	template<typename T>
	struct NodeTypeToEnum
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_unknown;
		using type = void;
	};


	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::program>
	{
		constexpr static auto value = ::Celeste::ast::Type::program;
		using type = ::Celeste::ast::node::program;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::root_program>
	{
		constexpr static auto value = ::Celeste::ast::Type::root_program;
		using type = ::Celeste::ast::node::root_program;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::standard_block>
	{
		constexpr static auto value = ::Celeste::ast::Type::standard_block;
		using type = ::Celeste::ast::node::standard_block;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_star__stmt__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__stmt__;
		using type = ::Celeste::ast::node::deamerreserved_star__stmt__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::stmt>
	{
		constexpr static auto value = ::Celeste::ast::Type::stmt;
		using type = ::Celeste::ast::node::stmt;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::import_statement>
	{
		constexpr static auto value = ::Celeste::ast::Type::import_statement;
		using type = ::Celeste::ast::node::import_statement;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::file_import>
	{
		constexpr static auto value = ::Celeste::ast::Type::file_import;
		using type = ::Celeste::ast::node::file_import;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::mutation_group>
	{
		constexpr static auto value = ::Celeste::ast::Type::mutation_group;
		using type = ::Celeste::ast::node::mutation_group;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_arrow__symbol_reference__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__symbol_reference__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__symbol_reference__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__COMMA__symbol_reference__;
		using type = ::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::assignment>
	{
		constexpr static auto value = ::Celeste::ast::Type::assignment;
		using type = ::Celeste::ast::node::assignment;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::assignment_operator>
	{
		constexpr static auto value = ::Celeste::ast::Type::assignment_operator;
		using type = ::Celeste::ast::node::assignment_operator;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::conditional_if>
	{
		constexpr static auto value = ::Celeste::ast::Type::conditional_if;
		using type = ::Celeste::ast::node::conditional_if;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::conditional_else_if>
	{
		constexpr static auto value = ::Celeste::ast::Type::conditional_else_if;
		using type = ::Celeste::ast::node::conditional_else_if;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::conditional_else>
	{
		constexpr static auto value = ::Celeste::ast::Type::conditional_else;
		using type = ::Celeste::ast::node::conditional_else;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::conditional_block>
	{
		constexpr static auto value = ::Celeste::ast::Type::conditional_block;
		using type = ::Celeste::ast::node::conditional_block;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::template_conditional_function_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::template_conditional_function_declaration;
		using type = ::Celeste::ast::node::template_conditional_function_declaration;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_arrow__template_parameter__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__template_parameter__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__template_parameter__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__COMMA__template_parameter__;
		using type = ::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__conditional_function_argument__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__COMMA__conditional_function_argument__;
		using type = ::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_arrow__function_argument__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__function_argument__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__function_argument__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__;
		using type = ::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::conditional_function_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::conditional_function_declaration;
		using type = ::Celeste::ast::node::conditional_function_declaration;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::template_code_function_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::template_code_function_declaration;
		using type = ::Celeste::ast::node::template_code_function_declaration;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::code_function_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::code_function_declaration;
		using type = ::Celeste::ast::node::code_function_declaration;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::return_statement>
	{
		constexpr static auto value = ::Celeste::ast::Type::return_statement;
		using type = ::Celeste::ast::node::return_statement;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::symbol_increase>
	{
		constexpr static auto value = ::Celeste::ast::Type::symbol_increase;
		using type = ::Celeste::ast::node::symbol_increase;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::symbol_decrease>
	{
		constexpr static auto value = ::Celeste::ast::Type::symbol_decrease;
		using type = ::Celeste::ast::node::symbol_decrease;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::expression>
	{
		constexpr static auto value = ::Celeste::ast::Type::expression;
		using type = ::Celeste::ast::node::expression;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::expression_no_value>
	{
		constexpr static auto value = ::Celeste::ast::Type::expression_no_value;
		using type = ::Celeste::ast::node::expression_no_value;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::t_expression>
	{
		constexpr static auto value = ::Celeste::ast::Type::t_expression;
		using type = ::Celeste::ast::node::t_expression;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::f_expression>
	{
		constexpr static auto value = ::Celeste::ast::Type::f_expression;
		using type = ::Celeste::ast::node::f_expression;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::display_call>
	{
		constexpr static auto value = ::Celeste::ast::Type::display_call;
		using type = ::Celeste::ast::node::display_call;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::for_loop>
	{
		constexpr static auto value = ::Celeste::ast::Type::for_loop;
		using type = ::Celeste::ast::node::for_loop;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::for_iteration_loop>
	{
		constexpr static auto value = ::Celeste::ast::Type::for_iteration_loop;
		using type = ::Celeste::ast::node::for_iteration_loop;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::for_each_loop>
	{
		constexpr static auto value = ::Celeste::ast::Type::for_each_loop;
		using type = ::Celeste::ast::node::for_each_loop;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::for_variable>
	{
		constexpr static auto value = ::Celeste::ast::Type::for_variable;
		using type = ::Celeste::ast::node::for_variable;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::iterator>
	{
		constexpr static auto value = ::Celeste::ast::Type::iterator;
		using type = ::Celeste::ast::node::iterator;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::for_block>
	{
		constexpr static auto value = ::Celeste::ast::Type::for_block;
		using type = ::Celeste::ast::node::for_block;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::namespace_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::namespace_declaration;
		using type = ::Celeste::ast::node::namespace_declaration;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_arrow__namespace_name__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__namespace_name__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__namespace_name__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__DOT__namespace_name__;
		using type = ::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::namespace_block>
	{
		constexpr static auto value = ::Celeste::ast::Type::namespace_block;
		using type = ::Celeste::ast::node::namespace_block;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::namespace_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::namespace_name;
		using type = ::Celeste::ast::node::namespace_name;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::inline_class_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::inline_class_declaration;
		using type = ::Celeste::ast::node::inline_class_declaration;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite__;
		using type = ::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::inline_class_declaration_composite>
	{
		constexpr static auto value = ::Celeste::ast::Type::inline_class_declaration_composite;
		using type = ::Celeste::ast::node::inline_class_declaration_composite;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite_alias__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__;
		using type = ::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::inline_class_declaration_composite_alias>
	{
		constexpr static auto value = ::Celeste::ast::Type::inline_class_declaration_composite_alias;
		using type = ::Celeste::ast::node::inline_class_declaration_composite_alias;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::inline_class_declaration_composite_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::inline_class_declaration_composite_name;
		using type = ::Celeste::ast::node::inline_class_declaration_composite_name;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::created_class_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::created_class_name;
		using type = ::Celeste::ast::node::created_class_name;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::code_block>
	{
		constexpr static auto value = ::Celeste::ast::Type::code_block;
		using type = ::Celeste::ast::node::code_block;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__code_block_input_argument__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__COMMA__code_block_input_argument__;
		using type = ::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::code_block_input_argument>
	{
		constexpr static auto value = ::Celeste::ast::Type::code_block_input_argument;
		using type = ::Celeste::ast::node::code_block_input_argument;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::code_block_argument>
	{
		constexpr static auto value = ::Celeste::ast::Type::code_block_argument;
		using type = ::Celeste::ast::node::code_block_argument;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::code_block_argument_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::code_block_argument_name;
		using type = ::Celeste::ast::node::code_block_argument_name;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::code_block_program>
	{
		constexpr static auto value = ::Celeste::ast::Type::code_block_program;
		using type = ::Celeste::ast::node::code_block_program;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::variable_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::variable_declaration;
		using type = ::Celeste::ast::node::variable_declaration;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::array_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::array_declaration;
		using type = ::Celeste::ast::node::array_declaration;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::variable_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::variable_name;
		using type = ::Celeste::ast::node::variable_name;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::template_function_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::template_function_declaration;
		using type = ::Celeste::ast::node::template_function_declaration;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::function_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::function_declaration;
		using type = ::Celeste::ast::node::function_declaration;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::trailing_return_type>
	{
		constexpr static auto value = ::Celeste::ast::Type::trailing_return_type;
		using type = ::Celeste::ast::node::trailing_return_type;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::return_type>
	{
		constexpr static auto value = ::Celeste::ast::Type::return_type;
		using type = ::Celeste::ast::node::return_type;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::conditional_function_argument>
	{
		constexpr static auto value = ::Celeste::ast::Type::conditional_function_argument;
		using type = ::Celeste::ast::node::conditional_function_argument;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::function_argument>
	{
		constexpr static auto value = ::Celeste::ast::Type::function_argument;
		using type = ::Celeste::ast::node::function_argument;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::function_argument_type>
	{
		constexpr static auto value = ::Celeste::ast::Type::function_argument_type;
		using type = ::Celeste::ast::node::function_argument_type;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::function_argument_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::function_argument_name;
		using type = ::Celeste::ast::node::function_argument_name;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::condition_modifier_function_call>
	{
		constexpr static auto value = ::Celeste::ast::Type::condition_modifier_function_call;
		using type = ::Celeste::ast::node::condition_modifier_function_call;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__condition_modifier_argument__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__COMMA__condition_modifier_argument__;
		using type = ::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::condition_modifier_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::condition_modifier_name;
		using type = ::Celeste::ast::node::condition_modifier_name;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::condition_modifier_argument>
	{
		constexpr static auto value = ::Celeste::ast::Type::condition_modifier_argument;
		using type = ::Celeste::ast::node::condition_modifier_argument;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::function_body>
	{
		constexpr static auto value = ::Celeste::ast::Type::function_body;
		using type = ::Celeste::ast::node::function_body;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::function_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::function_name;
		using type = ::Celeste::ast::node::function_name;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::template_class_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::template_class_declaration;
		using type = ::Celeste::ast::node::template_class_declaration;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::template_parameter>
	{
		constexpr static auto value = ::Celeste::ast::Type::template_parameter;
		using type = ::Celeste::ast::node::template_parameter;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::template_parameter_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::template_parameter_name;
		using type = ::Celeste::ast::node::template_parameter_name;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::class_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::class_declaration;
		using type = ::Celeste::ast::node::class_declaration;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_arrow__class_inherit_base__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__class_inherit_base__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__class_inherit_base__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__COMMA__class_inherit_base__;
		using type = ::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::class_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::class_name;
		using type = ::Celeste::ast::node::class_name;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::execution_keyword_permutation>
	{
		constexpr static auto value = ::Celeste::ast::Type::execution_keyword_permutation;
		using type = ::Celeste::ast::node::execution_keyword_permutation;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::class_body>
	{
		constexpr static auto value = ::Celeste::ast::Type::class_body;
		using type = ::Celeste::ast::node::class_body;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_star__class_stmt__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__class_stmt__;
		using type = ::Celeste::ast::node::deamerreserved_star__class_stmt__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::class_stmt>
	{
		constexpr static auto value = ::Celeste::ast::Type::class_stmt;
		using type = ::Celeste::ast::node::class_stmt;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::class_stmt_member_field_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::class_stmt_member_field_declaration;
		using type = ::Celeste::ast::node::class_stmt_member_field_declaration;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::member_field_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::member_field_name;
		using type = ::Celeste::ast::node::member_field_name;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::class_stmt_member_function>
	{
		constexpr static auto value = ::Celeste::ast::Type::class_stmt_member_function;
		using type = ::Celeste::ast::node::class_stmt_member_function;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::class_stmt_member_template_function>
	{
		constexpr static auto value = ::Celeste::ast::Type::class_stmt_member_template_function;
		using type = ::Celeste::ast::node::class_stmt_member_template_function;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::template_class_stmt_constructor>
	{
		constexpr static auto value = ::Celeste::ast::Type::template_class_stmt_constructor;
		using type = ::Celeste::ast::node::template_class_stmt_constructor;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::class_stmt_constructor>
	{
		constexpr static auto value = ::Celeste::ast::Type::class_stmt_constructor;
		using type = ::Celeste::ast::node::class_stmt_constructor;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::accessibility>
	{
		constexpr static auto value = ::Celeste::ast::Type::accessibility;
		using type = ::Celeste::ast::node::accessibility;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::class_inherit_base>
	{
		constexpr static auto value = ::Celeste::ast::Type::class_inherit_base;
		using type = ::Celeste::ast::node::class_inherit_base;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::inherit_base>
	{
		constexpr static auto value = ::Celeste::ast::Type::inherit_base;
		using type = ::Celeste::ast::node::inherit_base;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::inherit_base_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::inherit_base_name;
		using type = ::Celeste::ast::node::inherit_base_name;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::compound_base>
	{
		constexpr static auto value = ::Celeste::ast::Type::compound_base;
		using type = ::Celeste::ast::node::compound_base;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_arrow__compound_base_alias__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__compound_base_alias__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__compound_base_alias__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__COMMA__compound_base_alias__;
		using type = ::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::compound_base_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::compound_base_name;
		using type = ::Celeste::ast::node::compound_base_name;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::compound_base_alias>
	{
		constexpr static auto value = ::Celeste::ast::Type::compound_base_alias;
		using type = ::Celeste::ast::node::compound_base_alias;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::enum_declaration>
	{
		constexpr static auto value = ::Celeste::ast::Type::enum_declaration;
		using type = ::Celeste::ast::node::enum_declaration;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_star__enumeration__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__enumeration__;
		using type = ::Celeste::ast::node::deamerreserved_star__enumeration__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::enum_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::enum_name;
		using type = ::Celeste::ast::node::enum_name;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::enumeration>
	{
		constexpr static auto value = ::Celeste::ast::Type::enumeration;
		using type = ::Celeste::ast::node::enumeration;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::enumeration_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::enumeration_name;
		using type = ::Celeste::ast::node::enumeration_name;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::enumeration_value>
	{
		constexpr static auto value = ::Celeste::ast::Type::enumeration_value;
		using type = ::Celeste::ast::node::enumeration_value;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::symbol_reference>
	{
		constexpr static auto value = ::Celeste::ast::Type::symbol_reference;
		using type = ::Celeste::ast::node::symbol_reference;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_arrow__symbol__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__symbol__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__symbol__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__DOT__symbol_secondary__;
		using type = ::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::symbol_secondary>
	{
		constexpr static auto value = ::Celeste::ast::Type::symbol_secondary;
		using type = ::Celeste::ast::node::symbol_secondary;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_star__symbol_access__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__symbol_access__;
		using type = ::Celeste::ast::node::deamerreserved_star__symbol_access__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::symbol>
	{
		constexpr static auto value = ::Celeste::ast::Type::symbol;
		using type = ::Celeste::ast::node::symbol;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::symbol_access>
	{
		constexpr static auto value = ::Celeste::ast::Type::symbol_access;
		using type = ::Celeste::ast::node::symbol_access;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::auto_deduce_array>
	{
		constexpr static auto value = ::Celeste::ast::Type::auto_deduce_array;
		using type = ::Celeste::ast::node::auto_deduce_array;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::symbol_name_secondary>
	{
		constexpr static auto value = ::Celeste::ast::Type::symbol_name_secondary;
		using type = ::Celeste::ast::node::symbol_name_secondary;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::symbol_name>
	{
		constexpr static auto value = ::Celeste::ast::Type::symbol_name;
		using type = ::Celeste::ast::node::symbol_name;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::function_access>
	{
		constexpr static auto value = ::Celeste::ast::Type::function_access;
		using type = ::Celeste::ast::node::function_access;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_arrow__expression__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__expression__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__expression__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_star__COMMA__expression__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__COMMA__expression__;
		using type = ::Celeste::ast::node::deamerreserved_star__COMMA__expression__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::index_access>
	{
		constexpr static auto value = ::Celeste::ast::Type::index_access;
		using type = ::Celeste::ast::node::index_access;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::anonymous_access>
	{
		constexpr static auto value = ::Celeste::ast::Type::anonymous_access;
		using type = ::Celeste::ast::node::anonymous_access;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::type>
	{
		constexpr static auto value = ::Celeste::ast::Type::type;
		using type = ::Celeste::ast::node::type;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_star__type_modifier__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__type_modifier__;
		using type = ::Celeste::ast::node::deamerreserved_star__type_modifier__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::type_modifier>
	{
		constexpr static auto value = ::Celeste::ast::Type::type_modifier;
		using type = ::Celeste::ast::node::type_modifier;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::value_list>
	{
		constexpr static auto value = ::Celeste::ast::Type::value_list;
		using type = ::Celeste::ast::node::value_list;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_arrow__full_value__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_arrow__full_value__;
		using type = ::Celeste::ast::node::deamerreserved_arrow__full_value__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::deamerreserved_star__COMMA__full_value__>
	{
		constexpr static auto value = ::Celeste::ast::Type::deamerreserved_star__COMMA__full_value__;
		using type = ::Celeste::ast::node::deamerreserved_star__COMMA__full_value__;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::full_value>
	{
		constexpr static auto value = ::Celeste::ast::Type::full_value;
		using type = ::Celeste::ast::node::full_value;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::value>
	{
		constexpr static auto value = ::Celeste::ast::Type::value;
		using type = ::Celeste::ast::node::value;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::tuple>
	{
		constexpr static auto value = ::Celeste::ast::Type::tuple;
		using type = ::Celeste::ast::node::tuple;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::SINGLE_COMMENT>
	{
		constexpr static auto value = ::Celeste::ast::Type::SINGLE_COMMENT;
		using type = ::Celeste::ast::node::SINGLE_COMMENT;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::CONSTANT>
	{
		constexpr static auto value = ::Celeste::ast::Type::CONSTANT;
		using type = ::Celeste::ast::node::CONSTANT;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::FUNCTION>
	{
		constexpr static auto value = ::Celeste::ast::Type::FUNCTION;
		using type = ::Celeste::ast::node::FUNCTION;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::CLASS>
	{
		constexpr static auto value = ::Celeste::ast::Type::CLASS;
		using type = ::Celeste::ast::node::CLASS;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::ENUM>
	{
		constexpr static auto value = ::Celeste::ast::Type::ENUM;
		using type = ::Celeste::ast::node::ENUM;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::CONDITIONAL>
	{
		constexpr static auto value = ::Celeste::ast::Type::CONDITIONAL;
		using type = ::Celeste::ast::node::CONDITIONAL;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::CODE>
	{
		constexpr static auto value = ::Celeste::ast::Type::CODE;
		using type = ::Celeste::ast::node::CODE;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::RUNTIME>
	{
		constexpr static auto value = ::Celeste::ast::Type::RUNTIME;
		using type = ::Celeste::ast::node::RUNTIME;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::STATIC>
	{
		constexpr static auto value = ::Celeste::ast::Type::STATIC;
		using type = ::Celeste::ast::node::STATIC;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::AUTO>
	{
		constexpr static auto value = ::Celeste::ast::Type::AUTO;
		using type = ::Celeste::ast::node::AUTO;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::AUTOTYPE>
	{
		constexpr static auto value = ::Celeste::ast::Type::AUTOTYPE;
		using type = ::Celeste::ast::node::AUTOTYPE;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::TEMPLATE>
	{
		constexpr static auto value = ::Celeste::ast::Type::TEMPLATE;
		using type = ::Celeste::ast::node::TEMPLATE;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::NAMESPACE>
	{
		constexpr static auto value = ::Celeste::ast::Type::NAMESPACE;
		using type = ::Celeste::ast::node::NAMESPACE;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::OVERRIDE>
	{
		constexpr static auto value = ::Celeste::ast::Type::OVERRIDE;
		using type = ::Celeste::ast::node::OVERRIDE;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::VIRTUAL>
	{
		constexpr static auto value = ::Celeste::ast::Type::VIRTUAL;
		using type = ::Celeste::ast::node::VIRTUAL;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::PURE>
	{
		constexpr static auto value = ::Celeste::ast::Type::PURE;
		using type = ::Celeste::ast::node::PURE;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::AS>
	{
		constexpr static auto value = ::Celeste::ast::Type::AS;
		using type = ::Celeste::ast::node::AS;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::IN>
	{
		constexpr static auto value = ::Celeste::ast::Type::IN;
		using type = ::Celeste::ast::node::IN;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::DISPLAY>
	{
		constexpr static auto value = ::Celeste::ast::Type::DISPLAY;
		using type = ::Celeste::ast::node::DISPLAY;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::RETURN>
	{
		constexpr static auto value = ::Celeste::ast::Type::RETURN;
		using type = ::Celeste::ast::node::RETURN;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::FOR>
	{
		constexpr static auto value = ::Celeste::ast::Type::FOR;
		using type = ::Celeste::ast::node::FOR;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::IF>
	{
		constexpr static auto value = ::Celeste::ast::Type::IF;
		using type = ::Celeste::ast::node::IF;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::ELSEIF>
	{
		constexpr static auto value = ::Celeste::ast::Type::ELSEIF;
		using type = ::Celeste::ast::node::ELSEIF;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::ELSE>
	{
		constexpr static auto value = ::Celeste::ast::Type::ELSE;
		using type = ::Celeste::ast::node::ELSE;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::INLINE>
	{
		constexpr static auto value = ::Celeste::ast::Type::INLINE;
		using type = ::Celeste::ast::node::INLINE;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::CONSTRUCTOR>
	{
		constexpr static auto value = ::Celeste::ast::Type::CONSTRUCTOR;
		using type = ::Celeste::ast::node::CONSTRUCTOR;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::FILE_>
	{
		constexpr static auto value = ::Celeste::ast::Type::FILE_;
		using type = ::Celeste::ast::node::FILE_;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::PROGRAM_>
	{
		constexpr static auto value = ::Celeste::ast::Type::PROGRAM_;
		using type = ::Celeste::ast::node::PROGRAM_;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::IMPORT>
	{
		constexpr static auto value = ::Celeste::ast::Type::IMPORT;
		using type = ::Celeste::ast::node::IMPORT;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::PUBLIC>
	{
		constexpr static auto value = ::Celeste::ast::Type::PUBLIC;
		using type = ::Celeste::ast::node::PUBLIC;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::PROTECTED>
	{
		constexpr static auto value = ::Celeste::ast::Type::PROTECTED;
		using type = ::Celeste::ast::node::PROTECTED;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::PRIVATE>
	{
		constexpr static auto value = ::Celeste::ast::Type::PRIVATE;
		using type = ::Celeste::ast::node::PRIVATE;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::INHERIT>
	{
		constexpr static auto value = ::Celeste::ast::Type::INHERIT;
		using type = ::Celeste::ast::node::INHERIT;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::COMPOSITE>
	{
		constexpr static auto value = ::Celeste::ast::Type::COMPOSITE;
		using type = ::Celeste::ast::node::COMPOSITE;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::LEFT_BRACKET>
	{
		constexpr static auto value = ::Celeste::ast::Type::LEFT_BRACKET;
		using type = ::Celeste::ast::node::LEFT_BRACKET;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::RIGHT_BRACKET>
	{
		constexpr static auto value = ::Celeste::ast::Type::RIGHT_BRACKET;
		using type = ::Celeste::ast::node::RIGHT_BRACKET;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::LEFT_SQUARE_BRACKET>
	{
		constexpr static auto value = ::Celeste::ast::Type::LEFT_SQUARE_BRACKET;
		using type = ::Celeste::ast::node::LEFT_SQUARE_BRACKET;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::RIGHT_SQUARE_BRACKET>
	{
		constexpr static auto value = ::Celeste::ast::Type::RIGHT_SQUARE_BRACKET;
		using type = ::Celeste::ast::node::RIGHT_SQUARE_BRACKET;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::LEFT_PARANTHESIS>
	{
		constexpr static auto value = ::Celeste::ast::Type::LEFT_PARANTHESIS;
		using type = ::Celeste::ast::node::LEFT_PARANTHESIS;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::RIGHT_PARANTHESIS>
	{
		constexpr static auto value = ::Celeste::ast::Type::RIGHT_PARANTHESIS;
		using type = ::Celeste::ast::node::RIGHT_PARANTHESIS;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::COLON>
	{
		constexpr static auto value = ::Celeste::ast::Type::COLON;
		using type = ::Celeste::ast::node::COLON;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::SEMICOLON>
	{
		constexpr static auto value = ::Celeste::ast::Type::SEMICOLON;
		using type = ::Celeste::ast::node::SEMICOLON;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::COMMA>
	{
		constexpr static auto value = ::Celeste::ast::Type::COMMA;
		using type = ::Celeste::ast::node::COMMA;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::DOT>
	{
		constexpr static auto value = ::Celeste::ast::Type::DOT;
		using type = ::Celeste::ast::node::DOT;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::LTEQ>
	{
		constexpr static auto value = ::Celeste::ast::Type::LTEQ;
		using type = ::Celeste::ast::node::LTEQ;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::GTEQ>
	{
		constexpr static auto value = ::Celeste::ast::Type::GTEQ;
		using type = ::Celeste::ast::node::GTEQ;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::LT>
	{
		constexpr static auto value = ::Celeste::ast::Type::LT;
		using type = ::Celeste::ast::node::LT;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::GT>
	{
		constexpr static auto value = ::Celeste::ast::Type::GT;
		using type = ::Celeste::ast::node::GT;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::PLUSEQ>
	{
		constexpr static auto value = ::Celeste::ast::Type::PLUSEQ;
		using type = ::Celeste::ast::node::PLUSEQ;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::MINUSEQ>
	{
		constexpr static auto value = ::Celeste::ast::Type::MINUSEQ;
		using type = ::Celeste::ast::node::MINUSEQ;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::MULTIPLYEQ>
	{
		constexpr static auto value = ::Celeste::ast::Type::MULTIPLYEQ;
		using type = ::Celeste::ast::node::MULTIPLYEQ;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::DIVIDEEQ>
	{
		constexpr static auto value = ::Celeste::ast::Type::DIVIDEEQ;
		using type = ::Celeste::ast::node::DIVIDEEQ;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::EQEQ>
	{
		constexpr static auto value = ::Celeste::ast::Type::EQEQ;
		using type = ::Celeste::ast::node::EQEQ;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::EQ>
	{
		constexpr static auto value = ::Celeste::ast::Type::EQ;
		using type = ::Celeste::ast::node::EQ;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::NOTEQ>
	{
		constexpr static auto value = ::Celeste::ast::Type::NOTEQ;
		using type = ::Celeste::ast::node::NOTEQ;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::NOT>
	{
		constexpr static auto value = ::Celeste::ast::Type::NOT;
		using type = ::Celeste::ast::node::NOT;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::PLUSPLUS>
	{
		constexpr static auto value = ::Celeste::ast::Type::PLUSPLUS;
		using type = ::Celeste::ast::node::PLUSPLUS;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::PLUS>
	{
		constexpr static auto value = ::Celeste::ast::Type::PLUS;
		using type = ::Celeste::ast::node::PLUS;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::MINUSMINUS>
	{
		constexpr static auto value = ::Celeste::ast::Type::MINUSMINUS;
		using type = ::Celeste::ast::node::MINUSMINUS;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::MINUS>
	{
		constexpr static auto value = ::Celeste::ast::Type::MINUS;
		using type = ::Celeste::ast::node::MINUS;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::DIVIDE>
	{
		constexpr static auto value = ::Celeste::ast::Type::DIVIDE;
		using type = ::Celeste::ast::node::DIVIDE;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::MULTIPLY>
	{
		constexpr static auto value = ::Celeste::ast::Type::MULTIPLY;
		using type = ::Celeste::ast::node::MULTIPLY;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::VARNAME>
	{
		constexpr static auto value = ::Celeste::ast::Type::VARNAME;
		using type = ::Celeste::ast::node::VARNAME;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::NUMBER>
	{
		constexpr static auto value = ::Celeste::ast::Type::NUMBER;
		using type = ::Celeste::ast::node::NUMBER;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::DECIMAL>
	{
		constexpr static auto value = ::Celeste::ast::Type::DECIMAL;
		using type = ::Celeste::ast::node::DECIMAL;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::TEXT>
	{
		constexpr static auto value = ::Celeste::ast::Type::TEXT;
		using type = ::Celeste::ast::node::TEXT;
	};

	template<>
	struct NodeTypeToEnum<::Celeste::ast::node::ESCAPE_CHARS>
	{
		constexpr static auto value = ::Celeste::ast::Type::ESCAPE_CHARS;
		using type = ::Celeste::ast::node::ESCAPE_CHARS;
	};


template<typename T>
constexpr static auto NodeTypeToEnum_v = ::Celeste::ast::relation::NodeTypeToEnum<T>::value;

template<typename T>
using NodeTypeToEnum_t = typename ::Celeste::ast::relation::NodeTypeToEnum<T>::type;

}}}

#endif // CELESTE_AST_RELATION_NODETYPETOENUM_H