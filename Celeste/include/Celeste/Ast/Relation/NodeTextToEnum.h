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
	

		{ "deamerreserved_star__stmt__", ::Celeste::ast::Type::deamerreserved_star__stmt__ },
	

		{ "stmt", ::Celeste::ast::Type::stmt },
	

		{ "meta_declaration", ::Celeste::ast::Type::meta_declaration },
	

		{ "deamerreserved_star__expression__", ::Celeste::ast::Type::deamerreserved_star__expression__ },
	

		{ "deamerreserved_arrow__RIGHT_SQUARE_BRACKET__", ::Celeste::ast::Type::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__ },
	

		{ "deamerreserved_star__meta_declaration__", ::Celeste::ast::Type::deamerreserved_star__meta_declaration__ },
	

		{ "expression", ::Celeste::ast::Type::expression },
	

		{ "class_declaration", ::Celeste::ast::Type::class_declaration },
	

		{ "deamerreserved_arrow__base_type__", ::Celeste::ast::Type::deamerreserved_arrow__base_type__ },
	

		{ "deamerreserved_star__COMMA__", ::Celeste::ast::Type::deamerreserved_star__COMMA__ },
	

		{ "class_name", ::Celeste::ast::Type::class_name },
	

		{ "base_type", ::Celeste::ast::Type::base_type },
	

		{ "class_block", ::Celeste::ast::Type::class_block },
	

		{ "deamerreserved_star__class_stmt__", ::Celeste::ast::Type::deamerreserved_star__class_stmt__ },
	

		{ "enum_declaration", ::Celeste::ast::Type::enum_declaration },
	

		{ "enum_name", ::Celeste::ast::Type::enum_name },
	

		{ "enum_block", ::Celeste::ast::Type::enum_block },
	

		{ "deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____", ::Celeste::ast::Type::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____ },
	

		{ "function_declaration", ::Celeste::ast::Type::function_declaration },
	

		{ "deamerreserved_arrow__deamerreserved_optional__function_argument____", ::Celeste::ast::Type::deamerreserved_arrow__deamerreserved_optional__function_argument____ },
	

		{ "deamerreserved_star__COMMA__function_argument__", ::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__ },
	

		{ "function_implementation", ::Celeste::ast::Type::function_implementation },
	

		{ "function_argument", ::Celeste::ast::Type::function_argument },
	

		{ "function_arg_type", ::Celeste::ast::Type::function_arg_type },
	

		{ "function_arg_name", ::Celeste::ast::Type::function_arg_name },
	

		{ "type", ::Celeste::ast::Type::type },
	

		{ "function_name", ::Celeste::ast::Type::function_name },
	

		{ "return_type", ::Celeste::ast::Type::return_type },
	

		{ "function_block", ::Celeste::ast::Type::function_block },
	

		{ "deamerreserved_star__function_stmt__", ::Celeste::ast::Type::deamerreserved_star__function_stmt__ },
	

		{ "class_stmt", ::Celeste::ast::Type::class_stmt },
	

		{ "enum_stmt", ::Celeste::ast::Type::enum_stmt },
	

		{ "function_stmt", ::Celeste::ast::Type::function_stmt },
	

		{ "logical_stmt", ::Celeste::ast::Type::logical_stmt },
	

		{ "condtional_declaration", ::Celeste::ast::Type::condtional_declaration },
	

		{ "conditional_block", ::Celeste::ast::Type::conditional_block },
	

		{ "deamerreserved_star__condtional_stmt__", ::Celeste::ast::Type::deamerreserved_star__condtional_stmt__ },
	

		{ "condtional_stmt", ::Celeste::ast::Type::condtional_stmt },
	

		{ "variable_declaration", ::Celeste::ast::Type::variable_declaration },
	

		{ "variable_initialization", ::Celeste::ast::Type::variable_initialization },
	

		{ "CLASS", ::Celeste::ast::Type::CLASS },
	

		{ "ENUM", ::Celeste::ast::Type::ENUM },
	

		{ "FUNCTION", ::Celeste::ast::Type::FUNCTION },
	

		{ "IF", ::Celeste::ast::Type::IF },
	

		{ "ELSE", ::Celeste::ast::Type::ELSE },
	

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
	

		{ "EQEQ", ::Celeste::ast::Type::EQEQ },
	

		{ "EQ", ::Celeste::ast::Type::EQ },
	

		{ "NOTEQ", ::Celeste::ast::Type::NOTEQ },
	

		{ "NOT", ::Celeste::ast::Type::NOT },
	

		{ "PLUS", ::Celeste::ast::Type::PLUS },
	

		{ "MINUS", ::Celeste::ast::Type::MINUS },
	

		{ "DIVIDE", ::Celeste::ast::Type::DIVIDE },
	

		{ "MULTIPLY", ::Celeste::ast::Type::MULTIPLY },
	

		{ "USERDEFINED_OPERATOR", ::Celeste::ast::Type::USERDEFINED_OPERATOR },
	

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