#ifndef CELESTE_AST_RELATION_NODEENUMTOTEXT_H
#define CELESTE_AST_RELATION_NODEENUMTOTEXT_H

#include "Celeste/Ast/Enum/Type.h"

namespace Celeste { namespace ast { namespace relation { 

	static constexpr const char* ConvertEnumToText(::Celeste::ast::Type type)
	{
		switch(type)
		{
			
	case ::Celeste::ast::Type::program: {
		return "program";
	}
	

	case ::Celeste::ast::Type::root_program: {
		return "root_program";
	}
	

	case ::Celeste::ast::Type::standard_block: {
		return "standard_block";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__stmt__: {
		return "deamerreserved_star__stmt__";
	}
	

	case ::Celeste::ast::Type::stmt: {
		return "stmt";
	}
	

	case ::Celeste::ast::Type::import_statement: {
		return "import_statement";
	}
	

	case ::Celeste::ast::Type::file_import: {
		return "file_import";
	}
	

	case ::Celeste::ast::Type::mutation_group: {
		return "mutation_group";
	}
	

	case ::Celeste::ast::Type::deamerreserved_arrow__symbol_reference__: {
		return "deamerreserved_arrow__symbol_reference__";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__COMMA__symbol_reference__: {
		return "deamerreserved_star__COMMA__symbol_reference__";
	}
	

	case ::Celeste::ast::Type::assignment: {
		return "assignment";
	}
	

	case ::Celeste::ast::Type::assignment_operator: {
		return "assignment_operator";
	}
	

	case ::Celeste::ast::Type::conditional_if: {
		return "conditional_if";
	}
	

	case ::Celeste::ast::Type::conditional_else_if: {
		return "conditional_else_if";
	}
	

	case ::Celeste::ast::Type::conditional_else: {
		return "conditional_else";
	}
	

	case ::Celeste::ast::Type::conditional_block: {
		return "conditional_block";
	}
	

	case ::Celeste::ast::Type::template_conditional_function_declaration: {
		return "template_conditional_function_declaration";
	}
	

	case ::Celeste::ast::Type::deamerreserved_arrow__template_parameter__: {
		return "deamerreserved_arrow__template_parameter__";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__COMMA__template_parameter__: {
		return "deamerreserved_star__COMMA__template_parameter__";
	}
	

	case ::Celeste::ast::Type::deamerreserved_arrow__conditional_function_argument__: {
		return "deamerreserved_arrow__conditional_function_argument__";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__COMMA__conditional_function_argument__: {
		return "deamerreserved_star__COMMA__conditional_function_argument__";
	}
	

	case ::Celeste::ast::Type::deamerreserved_arrow__function_argument__: {
		return "deamerreserved_arrow__function_argument__";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__: {
		return "deamerreserved_star__COMMA__function_argument__";
	}
	

	case ::Celeste::ast::Type::conditional_function_declaration: {
		return "conditional_function_declaration";
	}
	

	case ::Celeste::ast::Type::template_code_function_declaration: {
		return "template_code_function_declaration";
	}
	

	case ::Celeste::ast::Type::code_function_declaration: {
		return "code_function_declaration";
	}
	

	case ::Celeste::ast::Type::return_statement: {
		return "return_statement";
	}
	

	case ::Celeste::ast::Type::symbol_increase: {
		return "symbol_increase";
	}
	

	case ::Celeste::ast::Type::symbol_decrease: {
		return "symbol_decrease";
	}
	

	case ::Celeste::ast::Type::expression: {
		return "expression";
	}
	

	case ::Celeste::ast::Type::expression_no_value: {
		return "expression_no_value";
	}
	

	case ::Celeste::ast::Type::t_expression: {
		return "t_expression";
	}
	

	case ::Celeste::ast::Type::f_expression: {
		return "f_expression";
	}
	

	case ::Celeste::ast::Type::display_call: {
		return "display_call";
	}
	

	case ::Celeste::ast::Type::for_loop: {
		return "for_loop";
	}
	

	case ::Celeste::ast::Type::for_iteration_loop: {
		return "for_iteration_loop";
	}
	

	case ::Celeste::ast::Type::for_each_loop: {
		return "for_each_loop";
	}
	

	case ::Celeste::ast::Type::for_variable: {
		return "for_variable";
	}
	

	case ::Celeste::ast::Type::iterator: {
		return "iterator";
	}
	

	case ::Celeste::ast::Type::for_block: {
		return "for_block";
	}
	

	case ::Celeste::ast::Type::namespace_declaration: {
		return "namespace_declaration";
	}
	

	case ::Celeste::ast::Type::deamerreserved_arrow__namespace_name__: {
		return "deamerreserved_arrow__namespace_name__";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__DOT__namespace_name__: {
		return "deamerreserved_star__DOT__namespace_name__";
	}
	

	case ::Celeste::ast::Type::namespace_block: {
		return "namespace_block";
	}
	

	case ::Celeste::ast::Type::namespace_name: {
		return "namespace_name";
	}
	

	case ::Celeste::ast::Type::inline_class_declaration: {
		return "inline_class_declaration";
	}
	

	case ::Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite__: {
		return "deamerreserved_arrow__inline_class_declaration_composite__";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite__: {
		return "deamerreserved_star__COMMA__inline_class_declaration_composite__";
	}
	

	case ::Celeste::ast::Type::inline_class_declaration_composite: {
		return "inline_class_declaration_composite";
	}
	

	case ::Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite_alias__: {
		return "deamerreserved_arrow__inline_class_declaration_composite_alias__";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__: {
		return "deamerreserved_star__COMMA__inline_class_declaration_composite_alias__";
	}
	

	case ::Celeste::ast::Type::inline_class_declaration_composite_alias: {
		return "inline_class_declaration_composite_alias";
	}
	

	case ::Celeste::ast::Type::inline_class_declaration_composite_name: {
		return "inline_class_declaration_composite_name";
	}
	

	case ::Celeste::ast::Type::created_class_name: {
		return "created_class_name";
	}
	

	case ::Celeste::ast::Type::code_block: {
		return "code_block";
	}
	

	case ::Celeste::ast::Type::deamerreserved_arrow__code_block_input_argument__: {
		return "deamerreserved_arrow__code_block_input_argument__";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__COMMA__code_block_input_argument__: {
		return "deamerreserved_star__COMMA__code_block_input_argument__";
	}
	

	case ::Celeste::ast::Type::code_block_input_argument: {
		return "code_block_input_argument";
	}
	

	case ::Celeste::ast::Type::code_block_argument: {
		return "code_block_argument";
	}
	

	case ::Celeste::ast::Type::code_block_argument_name: {
		return "code_block_argument_name";
	}
	

	case ::Celeste::ast::Type::code_block_program: {
		return "code_block_program";
	}
	

	case ::Celeste::ast::Type::variable_declaration: {
		return "variable_declaration";
	}
	

	case ::Celeste::ast::Type::array_declaration: {
		return "array_declaration";
	}
	

	case ::Celeste::ast::Type::variable_name: {
		return "variable_name";
	}
	

	case ::Celeste::ast::Type::template_function_declaration: {
		return "template_function_declaration";
	}
	

	case ::Celeste::ast::Type::function_declaration: {
		return "function_declaration";
	}
	

	case ::Celeste::ast::Type::trailing_return_type: {
		return "trailing_return_type";
	}
	

	case ::Celeste::ast::Type::return_type: {
		return "return_type";
	}
	

	case ::Celeste::ast::Type::conditional_function_argument: {
		return "conditional_function_argument";
	}
	

	case ::Celeste::ast::Type::function_argument: {
		return "function_argument";
	}
	

	case ::Celeste::ast::Type::function_argument_type: {
		return "function_argument_type";
	}
	

	case ::Celeste::ast::Type::function_argument_name: {
		return "function_argument_name";
	}
	

	case ::Celeste::ast::Type::condition_modifier_function_call: {
		return "condition_modifier_function_call";
	}
	

	case ::Celeste::ast::Type::deamerreserved_arrow__condition_modifier_argument__: {
		return "deamerreserved_arrow__condition_modifier_argument__";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__COMMA__condition_modifier_argument__: {
		return "deamerreserved_star__COMMA__condition_modifier_argument__";
	}
	

	case ::Celeste::ast::Type::condition_modifier_name: {
		return "condition_modifier_name";
	}
	

	case ::Celeste::ast::Type::condition_modifier_argument: {
		return "condition_modifier_argument";
	}
	

	case ::Celeste::ast::Type::function_body: {
		return "function_body";
	}
	

	case ::Celeste::ast::Type::function_name: {
		return "function_name";
	}
	

	case ::Celeste::ast::Type::template_class_declaration: {
		return "template_class_declaration";
	}
	

	case ::Celeste::ast::Type::template_parameter: {
		return "template_parameter";
	}
	

	case ::Celeste::ast::Type::template_parameter_name: {
		return "template_parameter_name";
	}
	

	case ::Celeste::ast::Type::class_declaration: {
		return "class_declaration";
	}
	

	case ::Celeste::ast::Type::deamerreserved_arrow__class_inherit_base__: {
		return "deamerreserved_arrow__class_inherit_base__";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__COMMA__class_inherit_base__: {
		return "deamerreserved_star__COMMA__class_inherit_base__";
	}
	

	case ::Celeste::ast::Type::class_name: {
		return "class_name";
	}
	

	case ::Celeste::ast::Type::execution_keyword_permutation: {
		return "execution_keyword_permutation";
	}
	

	case ::Celeste::ast::Type::class_body: {
		return "class_body";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__class_stmt__: {
		return "deamerreserved_star__class_stmt__";
	}
	

	case ::Celeste::ast::Type::class_stmt: {
		return "class_stmt";
	}
	

	case ::Celeste::ast::Type::class_stmt_member_field_declaration: {
		return "class_stmt_member_field_declaration";
	}
	

	case ::Celeste::ast::Type::member_field_name: {
		return "member_field_name";
	}
	

	case ::Celeste::ast::Type::class_stmt_member_function: {
		return "class_stmt_member_function";
	}
	

	case ::Celeste::ast::Type::class_stmt_member_template_function: {
		return "class_stmt_member_template_function";
	}
	

	case ::Celeste::ast::Type::template_class_stmt_constructor: {
		return "template_class_stmt_constructor";
	}
	

	case ::Celeste::ast::Type::class_stmt_constructor: {
		return "class_stmt_constructor";
	}
	

	case ::Celeste::ast::Type::accessibility: {
		return "accessibility";
	}
	

	case ::Celeste::ast::Type::class_inherit_base: {
		return "class_inherit_base";
	}
	

	case ::Celeste::ast::Type::inherit_base: {
		return "inherit_base";
	}
	

	case ::Celeste::ast::Type::inherit_base_name: {
		return "inherit_base_name";
	}
	

	case ::Celeste::ast::Type::compound_base: {
		return "compound_base";
	}
	

	case ::Celeste::ast::Type::deamerreserved_arrow__compound_base_alias__: {
		return "deamerreserved_arrow__compound_base_alias__";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__COMMA__compound_base_alias__: {
		return "deamerreserved_star__COMMA__compound_base_alias__";
	}
	

	case ::Celeste::ast::Type::compound_base_name: {
		return "compound_base_name";
	}
	

	case ::Celeste::ast::Type::compound_base_alias: {
		return "compound_base_alias";
	}
	

	case ::Celeste::ast::Type::attribute_section: {
		return "attribute_section";
	}
	

	case ::Celeste::ast::Type::deamerreserved_arrow__attribute__: {
		return "deamerreserved_arrow__attribute__";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__deamerreserved_optional__COMMA____attribute__: {
		return "deamerreserved_star__deamerreserved_optional__COMMA____attribute__";
	}
	

	case ::Celeste::ast::Type::attribute: {
		return "attribute";
	}
	

	case ::Celeste::ast::Type::deamerreserved_arrow__attribute_argument__: {
		return "deamerreserved_arrow__attribute_argument__";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__COMMA__attribute_argument__: {
		return "deamerreserved_star__COMMA__attribute_argument__";
	}
	

	case ::Celeste::ast::Type::deamerreserved_arrow__attribute_template_argument__: {
		return "deamerreserved_arrow__attribute_template_argument__";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__COMMA__attribute_template_argument__: {
		return "deamerreserved_star__COMMA__attribute_template_argument__";
	}
	

	case ::Celeste::ast::Type::attribute_argument: {
		return "attribute_argument";
	}
	

	case ::Celeste::ast::Type::attribute_template_argument: {
		return "attribute_template_argument";
	}
	

	case ::Celeste::ast::Type::attribute_declaration: {
		return "attribute_declaration";
	}
	

	case ::Celeste::ast::Type::deamerreserved_arrow__attribute_function_argument__: {
		return "deamerreserved_arrow__attribute_function_argument__";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__COMMA__attribute_function_argument__: {
		return "deamerreserved_star__COMMA__attribute_function_argument__";
	}
	

	case ::Celeste::ast::Type::attribute_function_argument: {
		return "attribute_function_argument";
	}
	

	case ::Celeste::ast::Type::attribute_name: {
		return "attribute_name";
	}
	

	case ::Celeste::ast::Type::enum_declaration: {
		return "enum_declaration";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__enumeration__: {
		return "deamerreserved_star__enumeration__";
	}
	

	case ::Celeste::ast::Type::enum_name: {
		return "enum_name";
	}
	

	case ::Celeste::ast::Type::enumeration: {
		return "enumeration";
	}
	

	case ::Celeste::ast::Type::enumeration_name: {
		return "enumeration_name";
	}
	

	case ::Celeste::ast::Type::enumeration_value: {
		return "enumeration_value";
	}
	

	case ::Celeste::ast::Type::symbol_reference: {
		return "symbol_reference";
	}
	

	case ::Celeste::ast::Type::deamerreserved_arrow__symbol__: {
		return "deamerreserved_arrow__symbol__";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__DOT__symbol_secondary__: {
		return "deamerreserved_star__DOT__symbol_secondary__";
	}
	

	case ::Celeste::ast::Type::symbol_secondary: {
		return "symbol_secondary";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__symbol_access__: {
		return "deamerreserved_star__symbol_access__";
	}
	

	case ::Celeste::ast::Type::symbol: {
		return "symbol";
	}
	

	case ::Celeste::ast::Type::symbol_access: {
		return "symbol_access";
	}
	

	case ::Celeste::ast::Type::auto_deduce_array: {
		return "auto_deduce_array";
	}
	

	case ::Celeste::ast::Type::symbol_name_secondary: {
		return "symbol_name_secondary";
	}
	

	case ::Celeste::ast::Type::symbol_name: {
		return "symbol_name";
	}
	

	case ::Celeste::ast::Type::function_access: {
		return "function_access";
	}
	

	case ::Celeste::ast::Type::deamerreserved_arrow__expression__: {
		return "deamerreserved_arrow__expression__";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__COMMA__expression__: {
		return "deamerreserved_star__COMMA__expression__";
	}
	

	case ::Celeste::ast::Type::index_access: {
		return "index_access";
	}
	

	case ::Celeste::ast::Type::anonymous_access: {
		return "anonymous_access";
	}
	

	case ::Celeste::ast::Type::type: {
		return "type";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__type_modifier__: {
		return "deamerreserved_star__type_modifier__";
	}
	

	case ::Celeste::ast::Type::type_modifier: {
		return "type_modifier";
	}
	

	case ::Celeste::ast::Type::value_list: {
		return "value_list";
	}
	

	case ::Celeste::ast::Type::deamerreserved_arrow__full_value__: {
		return "deamerreserved_arrow__full_value__";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__COMMA__full_value__: {
		return "deamerreserved_star__COMMA__full_value__";
	}
	

	case ::Celeste::ast::Type::full_value: {
		return "full_value";
	}
	

	case ::Celeste::ast::Type::value: {
		return "value";
	}
	

	case ::Celeste::ast::Type::tuple: {
		return "tuple";
	}
	

	case ::Celeste::ast::Type::SINGLE_COMMENT: {
		return "SINGLE_COMMENT";
	}
	

	case ::Celeste::ast::Type::MULTI_COMMENT: {
		return "MULTI_COMMENT";
	}
	

	case ::Celeste::ast::Type::CONSTANT: {
		return "CONSTANT";
	}
	

	case ::Celeste::ast::Type::FUNCTION: {
		return "FUNCTION";
	}
	

	case ::Celeste::ast::Type::CLASS: {
		return "CLASS";
	}
	

	case ::Celeste::ast::Type::ENUM: {
		return "ENUM";
	}
	

	case ::Celeste::ast::Type::CONDITIONAL: {
		return "CONDITIONAL";
	}
	

	case ::Celeste::ast::Type::CODE: {
		return "CODE";
	}
	

	case ::Celeste::ast::Type::ATTRIBUTETOK: {
		return "ATTRIBUTETOK";
	}
	

	case ::Celeste::ast::Type::RUNTIME: {
		return "RUNTIME";
	}
	

	case ::Celeste::ast::Type::STATIC: {
		return "STATIC";
	}
	

	case ::Celeste::ast::Type::AUTO: {
		return "AUTO";
	}
	

	case ::Celeste::ast::Type::AUTOTYPE: {
		return "AUTOTYPE";
	}
	

	case ::Celeste::ast::Type::TEMPLATE: {
		return "TEMPLATE";
	}
	

	case ::Celeste::ast::Type::NAMESPACE: {
		return "NAMESPACE";
	}
	

	case ::Celeste::ast::Type::OPERATORNAME: {
		return "OPERATORNAME";
	}
	

	case ::Celeste::ast::Type::OVERRIDE: {
		return "OVERRIDE";
	}
	

	case ::Celeste::ast::Type::VIRTUAL: {
		return "VIRTUAL";
	}
	

	case ::Celeste::ast::Type::PURE: {
		return "PURE";
	}
	

	case ::Celeste::ast::Type::AS: {
		return "AS";
	}
	

	case ::Celeste::ast::Type::IN: {
		return "IN";
	}
	

	case ::Celeste::ast::Type::DISPLAY: {
		return "DISPLAY";
	}
	

	case ::Celeste::ast::Type::RETURN: {
		return "RETURN";
	}
	

	case ::Celeste::ast::Type::FOR: {
		return "FOR";
	}
	

	case ::Celeste::ast::Type::IF: {
		return "IF";
	}
	

	case ::Celeste::ast::Type::ELSEIF: {
		return "ELSEIF";
	}
	

	case ::Celeste::ast::Type::ELSE: {
		return "ELSE";
	}
	

	case ::Celeste::ast::Type::INLINE: {
		return "INLINE";
	}
	

	case ::Celeste::ast::Type::CONSTRUCTOR: {
		return "CONSTRUCTOR";
	}
	

	case ::Celeste::ast::Type::FILE_: {
		return "FILE_";
	}
	

	case ::Celeste::ast::Type::PROGRAM_: {
		return "PROGRAM_";
	}
	

	case ::Celeste::ast::Type::IMPORT: {
		return "IMPORT";
	}
	

	case ::Celeste::ast::Type::PUBLIC: {
		return "PUBLIC";
	}
	

	case ::Celeste::ast::Type::PROTECTED: {
		return "PROTECTED";
	}
	

	case ::Celeste::ast::Type::PRIVATE: {
		return "PRIVATE";
	}
	

	case ::Celeste::ast::Type::INHERIT: {
		return "INHERIT";
	}
	

	case ::Celeste::ast::Type::COMPOSITE: {
		return "COMPOSITE";
	}
	

	case ::Celeste::ast::Type::LEFT_BRACKET: {
		return "LEFT_BRACKET";
	}
	

	case ::Celeste::ast::Type::RIGHT_BRACKET: {
		return "RIGHT_BRACKET";
	}
	

	case ::Celeste::ast::Type::LEFT_SQUARE_BRACKET: {
		return "LEFT_SQUARE_BRACKET";
	}
	

	case ::Celeste::ast::Type::RIGHT_SQUARE_BRACKET: {
		return "RIGHT_SQUARE_BRACKET";
	}
	

	case ::Celeste::ast::Type::LEFT_PARANTHESIS: {
		return "LEFT_PARANTHESIS";
	}
	

	case ::Celeste::ast::Type::RIGHT_PARANTHESIS: {
		return "RIGHT_PARANTHESIS";
	}
	

	case ::Celeste::ast::Type::COLON: {
		return "COLON";
	}
	

	case ::Celeste::ast::Type::SEMICOLON: {
		return "SEMICOLON";
	}
	

	case ::Celeste::ast::Type::COMMA: {
		return "COMMA";
	}
	

	case ::Celeste::ast::Type::DOT: {
		return "DOT";
	}
	

	case ::Celeste::ast::Type::LTEQ: {
		return "LTEQ";
	}
	

	case ::Celeste::ast::Type::GTEQ: {
		return "GTEQ";
	}
	

	case ::Celeste::ast::Type::LT: {
		return "LT";
	}
	

	case ::Celeste::ast::Type::GT: {
		return "GT";
	}
	

	case ::Celeste::ast::Type::PLUSEQ: {
		return "PLUSEQ";
	}
	

	case ::Celeste::ast::Type::MINUSEQ: {
		return "MINUSEQ";
	}
	

	case ::Celeste::ast::Type::MULTIPLYEQ: {
		return "MULTIPLYEQ";
	}
	

	case ::Celeste::ast::Type::DIVIDEEQ: {
		return "DIVIDEEQ";
	}
	

	case ::Celeste::ast::Type::EQEQ: {
		return "EQEQ";
	}
	

	case ::Celeste::ast::Type::EQ: {
		return "EQ";
	}
	

	case ::Celeste::ast::Type::NOTEQ: {
		return "NOTEQ";
	}
	

	case ::Celeste::ast::Type::NOT: {
		return "NOT";
	}
	

	case ::Celeste::ast::Type::PLUSPLUS: {
		return "PLUSPLUS";
	}
	

	case ::Celeste::ast::Type::PLUS: {
		return "PLUS";
	}
	

	case ::Celeste::ast::Type::MINUSMINUS: {
		return "MINUSMINUS";
	}
	

	case ::Celeste::ast::Type::MINUS: {
		return "MINUS";
	}
	

	case ::Celeste::ast::Type::DIVIDE: {
		return "DIVIDE";
	}
	

	case ::Celeste::ast::Type::MULTIPLY: {
		return "MULTIPLY";
	}
	

	case ::Celeste::ast::Type::VARNAME: {
		return "VARNAME";
	}
	

	case ::Celeste::ast::Type::NUMBER: {
		return "NUMBER";
	}
	

	case ::Celeste::ast::Type::DECIMAL: {
		return "DECIMAL";
	}
	

	case ::Celeste::ast::Type::TEXT: {
		return "TEXT";
	}
	

	case ::Celeste::ast::Type::ESCAPE_CHARS: {
		return "ESCAPE_CHARS";
	}
	

		}
		
		return "";
	}

}}}

#endif // CELESTE_AST_RELATION_NODEENUMTOTEXT_H