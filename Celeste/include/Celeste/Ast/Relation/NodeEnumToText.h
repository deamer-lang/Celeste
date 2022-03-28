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
	

	case ::Celeste::ast::Type::deamerreserved_star__stmt__: {
		return "deamerreserved_star__stmt__";
	}
	

	case ::Celeste::ast::Type::stmt: {
		return "stmt";
	}
	

	case ::Celeste::ast::Type::meta_declaration: {
		return "meta_declaration";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__expression__: {
		return "deamerreserved_star__expression__";
	}
	

	case ::Celeste::ast::Type::deamerreserved_arrow__RIGHT_SQUARE_BRACKET__: {
		return "deamerreserved_arrow__RIGHT_SQUARE_BRACKET__";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__meta_declaration__: {
		return "deamerreserved_star__meta_declaration__";
	}
	

	case ::Celeste::ast::Type::expression: {
		return "expression";
	}
	

	case ::Celeste::ast::Type::class_declaration: {
		return "class_declaration";
	}
	

	case ::Celeste::ast::Type::deamerreserved_arrow__base_type__: {
		return "deamerreserved_arrow__base_type__";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__COMMA__base_type__: {
		return "deamerreserved_star__COMMA__base_type__";
	}
	

	case ::Celeste::ast::Type::class_name: {
		return "class_name";
	}
	

	case ::Celeste::ast::Type::base_type: {
		return "base_type";
	}
	

	case ::Celeste::ast::Type::class_block: {
		return "class_block";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__class_stmt__: {
		return "deamerreserved_star__class_stmt__";
	}
	

	case ::Celeste::ast::Type::enum_declaration: {
		return "enum_declaration";
	}
	

	case ::Celeste::ast::Type::enum_name: {
		return "enum_name";
	}
	

	case ::Celeste::ast::Type::enum_block: {
		return "enum_block";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____: {
		return "deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____";
	}
	

	case ::Celeste::ast::Type::function_declaration: {
		return "function_declaration";
	}
	

	case ::Celeste::ast::Type::deamerreserved_arrow__deamerreserved_optional__function_argument____: {
		return "deamerreserved_arrow__deamerreserved_optional__function_argument____";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__: {
		return "deamerreserved_star__COMMA__function_argument__";
	}
	

	case ::Celeste::ast::Type::function_implementation: {
		return "function_implementation";
	}
	

	case ::Celeste::ast::Type::function_argument: {
		return "function_argument";
	}
	

	case ::Celeste::ast::Type::function_arg_type: {
		return "function_arg_type";
	}
	

	case ::Celeste::ast::Type::function_arg_name: {
		return "function_arg_name";
	}
	

	case ::Celeste::ast::Type::type: {
		return "type";
	}
	

	case ::Celeste::ast::Type::function_name: {
		return "function_name";
	}
	

	case ::Celeste::ast::Type::return_type: {
		return "return_type";
	}
	

	case ::Celeste::ast::Type::function_block: {
		return "function_block";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__function_stmt__: {
		return "deamerreserved_star__function_stmt__";
	}
	

	case ::Celeste::ast::Type::class_stmt: {
		return "class_stmt";
	}
	

	case ::Celeste::ast::Type::enum_stmt: {
		return "enum_stmt";
	}
	

	case ::Celeste::ast::Type::function_stmt: {
		return "function_stmt";
	}
	

	case ::Celeste::ast::Type::logical_stmt: {
		return "logical_stmt";
	}
	

	case ::Celeste::ast::Type::condtional_declaration: {
		return "condtional_declaration";
	}
	

	case ::Celeste::ast::Type::conditional_block: {
		return "conditional_block";
	}
	

	case ::Celeste::ast::Type::deamerreserved_star__condtional_stmt__: {
		return "deamerreserved_star__condtional_stmt__";
	}
	

	case ::Celeste::ast::Type::condtional_stmt: {
		return "condtional_stmt";
	}
	

	case ::Celeste::ast::Type::variable_declaration: {
		return "variable_declaration";
	}
	

	case ::Celeste::ast::Type::variable_initialization: {
		return "variable_initialization";
	}
	

	case ::Celeste::ast::Type::CLASS: {
		return "CLASS";
	}
	

	case ::Celeste::ast::Type::ENUM: {
		return "ENUM";
	}
	

	case ::Celeste::ast::Type::FUNCTION: {
		return "FUNCTION";
	}
	

	case ::Celeste::ast::Type::IF: {
		return "IF";
	}
	

	case ::Celeste::ast::Type::ELSE: {
		return "ELSE";
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
	

	case ::Celeste::ast::Type::PLUS: {
		return "PLUS";
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
	

	case ::Celeste::ast::Type::USERDEFINED_OPERATOR: {
		return "USERDEFINED_OPERATOR";
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