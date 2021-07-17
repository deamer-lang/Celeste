#ifndef Celeste_AST_ENUM_TYPE_H
#define Celeste_AST_ENUM_TYPE_H

namespace Celeste { namespace ast {

	enum class Type
	{
		// Reserved
		deamerreserved_unknown,

		// Terminals
		CLASS,
		ENUM,
		FUNCTION,
		IF,
		ELSE,
		LEFT_BRACKET,
		RIGHT_BRACKET,
		LEFT_SQUARE_BRACKET,
		RIGHT_SQUARE_BRACKET,
		LEFT_PARANTHESIS,
		RIGHT_PARANTHESIS,
		COLON,
		SEMICOLON,
		COMMA,
		DOT,
		EQEQ,
		EQ,
		NOTEQ,
		NOT,
		PLUS,
		MINUS,
		DIVIDE,
		MULTIPLY,
		USERDEFINED_OPERATOR,
		VARNAME,
		NUMBER,
		DECIMAL,
		TEXT,
		ESCAPE_CHARS,

		// Non-Terminals
		program,
		deamerreserved_star__stmt__,
		stmt,
		meta_declaration,
		deamerreserved_star__expression__,
		deamerreserved_arrow__RIGHT_SQUARE_BRACKET__,
		deamerreserved_star__meta_declaration__,
		expression,
		class_declaration,
		deamerreserved_arrow__base_type__,
		deamerreserved_star__COMMA__,
		base_type,
		class_block,
		deamerreserved_star__class_stmt__,
		enum_declaration,
		enum_block,
		deamerreserved_star__enum_stmt__,
		function_declaration,
		deamerreserved_arrow__function_argument__,
		function_implementation,
		function_argument,
		type,
		function_name,
		return_type,
		function_block,
		deamerreserved_star__function_stmt__,
		class_stmt,
		enum_stmt,
		function_stmt,
		logical_stmt,
		condtional_declaration,
		conditional_block,
		deamerreserved_star__condtional_stmt__,
		condtional_stmt,
		variable_declaration,
		variable_initialization,
	};

}}

#endif // Celeste_AST_ENUM_TYPE_H
