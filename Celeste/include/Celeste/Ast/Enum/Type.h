#ifndef CELESTE_AST_ENUM_TYPE_H
#define CELESTE_AST_ENUM_TYPE_H

#include <cstddef>

namespace Celeste { namespace ast { 

	enum class Type : std::size_t
	{
		// Reserved
		deamerreserved_unknown,

		// Terminal
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


		// NonTerminal
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
		class_name,
		base_type,
		class_block,
		deamerreserved_star__class_stmt__,
		enum_declaration,
		enum_name,
		enum_block,
		deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____,
		function_declaration,
		deamerreserved_arrow__deamerreserved_optional__function_argument____,
		deamerreserved_star__COMMA__function_argument__,
		function_implementation,
		function_argument,
		function_arg_type,
		function_arg_name,
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

	static inline bool operator==(std::size_t lhs, ::Celeste::ast::Type rhs)
	{
		return lhs == static_cast<std::size_t>(rhs);
	}

	static inline bool operator==(::Celeste::ast::Type lhs, std::size_t rhs)
	{
		return static_cast<std::size_t>(lhs) == rhs;
	}

	static inline bool operator==(int lhs, ::Celeste::ast::Type rhs)
	{
		return lhs == static_cast<std::size_t>(rhs);
	}

	static inline bool operator==(::Celeste::ast::Type lhs, int rhs)
	{
		return static_cast<std::size_t>(lhs) == rhs;
	}
}}

#endif // CELESTE_AST_ENUM_TYPE_H