#ifndef CELESTE_AST_RELATION_NODETEXTTOENUM_H
#define CELESTE_AST_RELATION_NODETEXTTOENUM_H

#include "Celeste/Ast/Enum/Type.h"
#include <string>
#include <map>

namespace Celeste { namespace ast { namespace relation { 

	static constexpr ::Celeste::ast::Type ConvertTextToEnum(const std::string& text)
	{
		static const std::map<std::string, ::Celeste::ast::Type> mapTextWithType = {
			{"", ::Celeste::ast::Type::deamerreserved_unknown },
			
		{ "program", ::Celeste::ast::Type::program },
	

		{ "root_program", ::Celeste::ast::Type::root_program },
	

		{ "standard_block", ::Celeste::ast::Type::standard_block },
	

		{ "deamerreserved_star__stmt__", ::Celeste::ast::Type::deamerreserved_star__stmt__ },
	

		{ "stmt", ::Celeste::ast::Type::stmt },
	

		{ "import_statement", ::Celeste::ast::Type::import_statement },
	

		{ "file_import", ::Celeste::ast::Type::file_import },
	

		{ "mutation_group", ::Celeste::ast::Type::mutation_group },
	

		{ "deamerreserved_arrow__symbol_reference__", ::Celeste::ast::Type::deamerreserved_arrow__symbol_reference__ },
	

		{ "deamerreserved_star__COMMA__symbol_reference__", ::Celeste::ast::Type::deamerreserved_star__COMMA__symbol_reference__ },
	

		{ "assignment", ::Celeste::ast::Type::assignment },
	

		{ "assignment_operator", ::Celeste::ast::Type::assignment_operator },
	

		{ "conditional_if", ::Celeste::ast::Type::conditional_if },
	

		{ "conditional_else_if", ::Celeste::ast::Type::conditional_else_if },
	

		{ "conditional_else", ::Celeste::ast::Type::conditional_else },
	

		{ "conditional_block", ::Celeste::ast::Type::conditional_block },
	

		{ "template_conditional_function_declaration", ::Celeste::ast::Type::template_conditional_function_declaration },
	

		{ "deamerreserved_arrow__template_parameter__", ::Celeste::ast::Type::deamerreserved_arrow__template_parameter__ },
	

		{ "deamerreserved_star__COMMA__template_parameter__", ::Celeste::ast::Type::deamerreserved_star__COMMA__template_parameter__ },
	

		{ "deamerreserved_arrow__conditional_function_argument__", ::Celeste::ast::Type::deamerreserved_arrow__conditional_function_argument__ },
	

		{ "deamerreserved_star__COMMA__conditional_function_argument__", ::Celeste::ast::Type::deamerreserved_star__COMMA__conditional_function_argument__ },
	

		{ "deamerreserved_arrow__function_argument__", ::Celeste::ast::Type::deamerreserved_arrow__function_argument__ },
	

		{ "deamerreserved_star__COMMA__function_argument__", ::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__ },
	

		{ "conditional_function_declaration", ::Celeste::ast::Type::conditional_function_declaration },
	

		{ "template_code_function_declaration", ::Celeste::ast::Type::template_code_function_declaration },
	

		{ "code_function_declaration", ::Celeste::ast::Type::code_function_declaration },
	

		{ "return_statement", ::Celeste::ast::Type::return_statement },
	

		{ "symbol_increase", ::Celeste::ast::Type::symbol_increase },
	

		{ "symbol_decrease", ::Celeste::ast::Type::symbol_decrease },
	

		{ "expression", ::Celeste::ast::Type::expression },
	

		{ "expression_no_value", ::Celeste::ast::Type::expression_no_value },
	

		{ "t_expression", ::Celeste::ast::Type::t_expression },
	

		{ "f_expression", ::Celeste::ast::Type::f_expression },
	

		{ "display_call", ::Celeste::ast::Type::display_call },
	

		{ "for_loop", ::Celeste::ast::Type::for_loop },
	

		{ "for_iteration_loop", ::Celeste::ast::Type::for_iteration_loop },
	

		{ "for_each_loop", ::Celeste::ast::Type::for_each_loop },
	

		{ "for_variable", ::Celeste::ast::Type::for_variable },
	

		{ "iterator", ::Celeste::ast::Type::iterator },
	

		{ "for_block", ::Celeste::ast::Type::for_block },
	

		{ "namespace_declaration", ::Celeste::ast::Type::namespace_declaration },
	

		{ "deamerreserved_arrow__namespace_name__", ::Celeste::ast::Type::deamerreserved_arrow__namespace_name__ },
	

		{ "deamerreserved_star__DOT__namespace_name__", ::Celeste::ast::Type::deamerreserved_star__DOT__namespace_name__ },
	

		{ "namespace_block", ::Celeste::ast::Type::namespace_block },
	

		{ "namespace_name", ::Celeste::ast::Type::namespace_name },
	

		{ "inline_class_declaration", ::Celeste::ast::Type::inline_class_declaration },
	

		{ "deamerreserved_arrow__inline_class_declaration_composite__", ::Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite__ },
	

		{ "deamerreserved_star__COMMA__inline_class_declaration_composite__", ::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite__ },
	

		{ "inline_class_declaration_composite", ::Celeste::ast::Type::inline_class_declaration_composite },
	

		{ "deamerreserved_arrow__inline_class_declaration_composite_alias__", ::Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite_alias__ },
	

		{ "deamerreserved_star__COMMA__inline_class_declaration_composite_alias__", ::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__ },
	

		{ "inline_class_declaration_composite_alias", ::Celeste::ast::Type::inline_class_declaration_composite_alias },
	

		{ "inline_class_declaration_composite_name", ::Celeste::ast::Type::inline_class_declaration_composite_name },
	

		{ "created_class_name", ::Celeste::ast::Type::created_class_name },
	

		{ "code_block", ::Celeste::ast::Type::code_block },
	

		{ "deamerreserved_arrow__code_block_input_argument__", ::Celeste::ast::Type::deamerreserved_arrow__code_block_input_argument__ },
	

		{ "deamerreserved_star__COMMA__code_block_input_argument__", ::Celeste::ast::Type::deamerreserved_star__COMMA__code_block_input_argument__ },
	

		{ "code_block_input_argument", ::Celeste::ast::Type::code_block_input_argument },
	

		{ "code_block_argument", ::Celeste::ast::Type::code_block_argument },
	

		{ "code_block_argument_name", ::Celeste::ast::Type::code_block_argument_name },
	

		{ "code_block_program", ::Celeste::ast::Type::code_block_program },
	

		{ "variable_declaration", ::Celeste::ast::Type::variable_declaration },
	

		{ "array_declaration", ::Celeste::ast::Type::array_declaration },
	

		{ "variable_name", ::Celeste::ast::Type::variable_name },
	

		{ "template_function_declaration", ::Celeste::ast::Type::template_function_declaration },
	

		{ "function_declaration", ::Celeste::ast::Type::function_declaration },
	

		{ "trailing_return_type", ::Celeste::ast::Type::trailing_return_type },
	

		{ "return_type", ::Celeste::ast::Type::return_type },
	

		{ "conditional_function_argument", ::Celeste::ast::Type::conditional_function_argument },
	

		{ "function_argument", ::Celeste::ast::Type::function_argument },
	

		{ "function_argument_type", ::Celeste::ast::Type::function_argument_type },
	

		{ "function_argument_name", ::Celeste::ast::Type::function_argument_name },
	

		{ "condition_modifier_function_call", ::Celeste::ast::Type::condition_modifier_function_call },
	

		{ "deamerreserved_arrow__condition_modifier_argument__", ::Celeste::ast::Type::deamerreserved_arrow__condition_modifier_argument__ },
	

		{ "deamerreserved_star__COMMA__condition_modifier_argument__", ::Celeste::ast::Type::deamerreserved_star__COMMA__condition_modifier_argument__ },
	

		{ "condition_modifier_name", ::Celeste::ast::Type::condition_modifier_name },
	

		{ "condition_modifier_argument", ::Celeste::ast::Type::condition_modifier_argument },
	

		{ "function_body", ::Celeste::ast::Type::function_body },
	

		{ "function_name", ::Celeste::ast::Type::function_name },
	

		{ "template_class_declaration", ::Celeste::ast::Type::template_class_declaration },
	

		{ "template_parameter", ::Celeste::ast::Type::template_parameter },
	

		{ "template_parameter_name", ::Celeste::ast::Type::template_parameter_name },
	

		{ "class_declaration", ::Celeste::ast::Type::class_declaration },
	

		{ "deamerreserved_arrow__class_inherit_base__", ::Celeste::ast::Type::deamerreserved_arrow__class_inherit_base__ },
	

		{ "deamerreserved_star__COMMA__class_inherit_base__", ::Celeste::ast::Type::deamerreserved_star__COMMA__class_inherit_base__ },
	

		{ "class_name", ::Celeste::ast::Type::class_name },
	

		{ "execution_keyword_permutation", ::Celeste::ast::Type::execution_keyword_permutation },
	

		{ "class_body", ::Celeste::ast::Type::class_body },
	

		{ "deamerreserved_star__class_stmt__", ::Celeste::ast::Type::deamerreserved_star__class_stmt__ },
	

		{ "class_stmt", ::Celeste::ast::Type::class_stmt },
	

		{ "class_stmt_member_field_declaration", ::Celeste::ast::Type::class_stmt_member_field_declaration },
	

		{ "member_field_name", ::Celeste::ast::Type::member_field_name },
	

		{ "class_stmt_member_function", ::Celeste::ast::Type::class_stmt_member_function },
	

		{ "class_stmt_member_template_function", ::Celeste::ast::Type::class_stmt_member_template_function },
	

		{ "template_class_stmt_constructor", ::Celeste::ast::Type::template_class_stmt_constructor },
	

		{ "class_stmt_constructor", ::Celeste::ast::Type::class_stmt_constructor },
	

		{ "accessibility", ::Celeste::ast::Type::accessibility },
	

		{ "class_inherit_base", ::Celeste::ast::Type::class_inherit_base },
	

		{ "inherit_base", ::Celeste::ast::Type::inherit_base },
	

		{ "inherit_base_name", ::Celeste::ast::Type::inherit_base_name },
	

		{ "compound_base", ::Celeste::ast::Type::compound_base },
	

		{ "deamerreserved_arrow__compound_base_alias__", ::Celeste::ast::Type::deamerreserved_arrow__compound_base_alias__ },
	

		{ "deamerreserved_star__COMMA__compound_base_alias__", ::Celeste::ast::Type::deamerreserved_star__COMMA__compound_base_alias__ },
	

		{ "compound_base_name", ::Celeste::ast::Type::compound_base_name },
	

		{ "compound_base_alias", ::Celeste::ast::Type::compound_base_alias },
	

		{ "attribute_section", ::Celeste::ast::Type::attribute_section },
	

		{ "deamerreserved_arrow__attribute__", ::Celeste::ast::Type::deamerreserved_arrow__attribute__ },
	

		{ "deamerreserved_star__deamerreserved_optional__COMMA____attribute__", ::Celeste::ast::Type::deamerreserved_star__deamerreserved_optional__COMMA____attribute__ },
	

		{ "attribute", ::Celeste::ast::Type::attribute },
	

		{ "deamerreserved_arrow__attribute_argument__", ::Celeste::ast::Type::deamerreserved_arrow__attribute_argument__ },
	

		{ "deamerreserved_star__COMMA__attribute_argument__", ::Celeste::ast::Type::deamerreserved_star__COMMA__attribute_argument__ },
	

		{ "deamerreserved_arrow__attribute_template_argument__", ::Celeste::ast::Type::deamerreserved_arrow__attribute_template_argument__ },
	

		{ "deamerreserved_star__COMMA__attribute_template_argument__", ::Celeste::ast::Type::deamerreserved_star__COMMA__attribute_template_argument__ },
	

		{ "attribute_argument", ::Celeste::ast::Type::attribute_argument },
	

		{ "attribute_template_argument", ::Celeste::ast::Type::attribute_template_argument },
	

		{ "attribute_declaration", ::Celeste::ast::Type::attribute_declaration },
	

		{ "deamerreserved_arrow__attribute_function_argument__", ::Celeste::ast::Type::deamerreserved_arrow__attribute_function_argument__ },
	

		{ "deamerreserved_star__COMMA__attribute_function_argument__", ::Celeste::ast::Type::deamerreserved_star__COMMA__attribute_function_argument__ },
	

		{ "attribute_function_argument", ::Celeste::ast::Type::attribute_function_argument },
	

		{ "attribute_name", ::Celeste::ast::Type::attribute_name },
	

		{ "enum_declaration", ::Celeste::ast::Type::enum_declaration },
	

		{ "deamerreserved_star__enumeration__", ::Celeste::ast::Type::deamerreserved_star__enumeration__ },
	

		{ "enum_name", ::Celeste::ast::Type::enum_name },
	

		{ "enumeration", ::Celeste::ast::Type::enumeration },
	

		{ "enumeration_name", ::Celeste::ast::Type::enumeration_name },
	

		{ "enumeration_value", ::Celeste::ast::Type::enumeration_value },
	

		{ "symbol_reference", ::Celeste::ast::Type::symbol_reference },
	

		{ "deamerreserved_arrow__symbol__", ::Celeste::ast::Type::deamerreserved_arrow__symbol__ },
	

		{ "deamerreserved_star__DOT__symbol_secondary__", ::Celeste::ast::Type::deamerreserved_star__DOT__symbol_secondary__ },
	

		{ "symbol_secondary", ::Celeste::ast::Type::symbol_secondary },
	

		{ "deamerreserved_star__symbol_access__", ::Celeste::ast::Type::deamerreserved_star__symbol_access__ },
	

		{ "symbol", ::Celeste::ast::Type::symbol },
	

		{ "symbol_access", ::Celeste::ast::Type::symbol_access },
	

		{ "auto_deduce_array", ::Celeste::ast::Type::auto_deduce_array },
	

		{ "symbol_name_secondary", ::Celeste::ast::Type::symbol_name_secondary },
	

		{ "symbol_name", ::Celeste::ast::Type::symbol_name },
	

		{ "function_access", ::Celeste::ast::Type::function_access },
	

		{ "deamerreserved_arrow__expression__", ::Celeste::ast::Type::deamerreserved_arrow__expression__ },
	

		{ "deamerreserved_star__COMMA__expression__", ::Celeste::ast::Type::deamerreserved_star__COMMA__expression__ },
	

		{ "index_access", ::Celeste::ast::Type::index_access },
	

		{ "anonymous_access", ::Celeste::ast::Type::anonymous_access },
	

		{ "type", ::Celeste::ast::Type::type },
	

		{ "deamerreserved_star__type_modifier__", ::Celeste::ast::Type::deamerreserved_star__type_modifier__ },
	

		{ "type_modifier", ::Celeste::ast::Type::type_modifier },
	

		{ "value_list", ::Celeste::ast::Type::value_list },
	

		{ "deamerreserved_arrow__full_value__", ::Celeste::ast::Type::deamerreserved_arrow__full_value__ },
	

		{ "deamerreserved_star__COMMA__full_value__", ::Celeste::ast::Type::deamerreserved_star__COMMA__full_value__ },
	

		{ "full_value", ::Celeste::ast::Type::full_value },
	

		{ "value", ::Celeste::ast::Type::value },
	

		{ "tuple", ::Celeste::ast::Type::tuple },
	

		{ "SINGLE_COMMENT", ::Celeste::ast::Type::SINGLE_COMMENT },
	

		{ "MULTI_COMMENT", ::Celeste::ast::Type::MULTI_COMMENT },
	

		{ "CONSTANT", ::Celeste::ast::Type::CONSTANT },
	

		{ "FUNCTION", ::Celeste::ast::Type::FUNCTION },
	

		{ "CLASS", ::Celeste::ast::Type::CLASS },
	

		{ "ENUM", ::Celeste::ast::Type::ENUM },
	

		{ "CONDITIONAL", ::Celeste::ast::Type::CONDITIONAL },
	

		{ "CODE", ::Celeste::ast::Type::CODE },
	

		{ "ATTRIBUTETOK", ::Celeste::ast::Type::ATTRIBUTETOK },
	

		{ "RUNTIME", ::Celeste::ast::Type::RUNTIME },
	

		{ "STATIC", ::Celeste::ast::Type::STATIC },
	

		{ "AUTO", ::Celeste::ast::Type::AUTO },
	

		{ "AUTOTYPE", ::Celeste::ast::Type::AUTOTYPE },
	

		{ "TEMPLATE", ::Celeste::ast::Type::TEMPLATE },
	

		{ "NAMESPACE", ::Celeste::ast::Type::NAMESPACE },
	

		{ "OPERATORNAME", ::Celeste::ast::Type::OPERATORNAME },
	

		{ "OVERRIDE", ::Celeste::ast::Type::OVERRIDE },
	

		{ "VIRTUAL", ::Celeste::ast::Type::VIRTUAL },
	

		{ "PURE", ::Celeste::ast::Type::PURE },
	

		{ "AS", ::Celeste::ast::Type::AS },
	

		{ "IN", ::Celeste::ast::Type::IN },
	

		{ "DISPLAY", ::Celeste::ast::Type::DISPLAY },
	

		{ "RETURN", ::Celeste::ast::Type::RETURN },
	

		{ "FOR", ::Celeste::ast::Type::FOR },
	

		{ "IF", ::Celeste::ast::Type::IF },
	

		{ "ELSEIF", ::Celeste::ast::Type::ELSEIF },
	

		{ "ELSE", ::Celeste::ast::Type::ELSE },
	

		{ "INLINE", ::Celeste::ast::Type::INLINE },
	

		{ "CONSTRUCTOR", ::Celeste::ast::Type::CONSTRUCTOR },
	

		{ "FILE_", ::Celeste::ast::Type::FILE_ },
	

		{ "PROGRAM_", ::Celeste::ast::Type::PROGRAM_ },
	

		{ "IMPORT", ::Celeste::ast::Type::IMPORT },
	

		{ "PUBLIC", ::Celeste::ast::Type::PUBLIC },
	

		{ "PROTECTED", ::Celeste::ast::Type::PROTECTED },
	

		{ "PRIVATE", ::Celeste::ast::Type::PRIVATE },
	

		{ "INHERIT", ::Celeste::ast::Type::INHERIT },
	

		{ "COMPOSITE", ::Celeste::ast::Type::COMPOSITE },
	

		{ "LEFT_BRACKET", ::Celeste::ast::Type::LEFT_BRACKET },
	

		{ "RIGHT_BRACKET", ::Celeste::ast::Type::RIGHT_BRACKET },
	

		{ "LEFT_SQUARE_BRACKET", ::Celeste::ast::Type::LEFT_SQUARE_BRACKET },
	

		{ "RIGHT_SQUARE_BRACKET", ::Celeste::ast::Type::RIGHT_SQUARE_BRACKET },
	

		{ "LEFT_PARANTHESIS", ::Celeste::ast::Type::LEFT_PARANTHESIS },
	

		{ "RIGHT_PARANTHESIS", ::Celeste::ast::Type::RIGHT_PARANTHESIS },
	

		{ "COLON", ::Celeste::ast::Type::COLON },
	

		{ "SEMICOLON", ::Celeste::ast::Type::SEMICOLON },
	

		{ "COMMA", ::Celeste::ast::Type::COMMA },
	

		{ "DOT", ::Celeste::ast::Type::DOT },
	

		{ "LTEQ", ::Celeste::ast::Type::LTEQ },
	

		{ "GTEQ", ::Celeste::ast::Type::GTEQ },
	

		{ "LT", ::Celeste::ast::Type::LT },
	

		{ "GT", ::Celeste::ast::Type::GT },
	

		{ "PLUSEQ", ::Celeste::ast::Type::PLUSEQ },
	

		{ "MINUSEQ", ::Celeste::ast::Type::MINUSEQ },
	

		{ "MULTIPLYEQ", ::Celeste::ast::Type::MULTIPLYEQ },
	

		{ "DIVIDEEQ", ::Celeste::ast::Type::DIVIDEEQ },
	

		{ "EQEQ", ::Celeste::ast::Type::EQEQ },
	

		{ "EQ", ::Celeste::ast::Type::EQ },
	

		{ "NOTEQ", ::Celeste::ast::Type::NOTEQ },
	

		{ "NOT", ::Celeste::ast::Type::NOT },
	

		{ "PLUSPLUS", ::Celeste::ast::Type::PLUSPLUS },
	

		{ "PLUS", ::Celeste::ast::Type::PLUS },
	

		{ "MINUSMINUS", ::Celeste::ast::Type::MINUSMINUS },
	

		{ "MINUS", ::Celeste::ast::Type::MINUS },
	

		{ "DIVIDE", ::Celeste::ast::Type::DIVIDE },
	

		{ "MULTIPLY", ::Celeste::ast::Type::MULTIPLY },
	

		{ "VARNAME", ::Celeste::ast::Type::VARNAME },
	

		{ "NUMBER", ::Celeste::ast::Type::NUMBER },
	

		{ "DECIMAL", ::Celeste::ast::Type::DECIMAL },
	

		{ "TEXT", ::Celeste::ast::Type::TEXT },
	

		{ "ESCAPE_CHARS", ::Celeste::ast::Type::ESCAPE_CHARS },
	

		};

		return mapTextWithType[text];
	}

}}}

#endif // CELESTE_AST_RELATION_NODETEXTTOENUM_H