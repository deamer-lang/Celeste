/* 
 * This file is auto-generated and auto-maintained by DLDL
 * Do not change code in this as it can be overwritten.
 *
 * For more information see the DLDL repo: https://github.com/Deruago/DLDL
 * For more information about Deamer: https://github.com/Deruago/theDeamerProject
 */

#ifndef CELESTE_GRAMMAR_H
#define CELESTE_GRAMMAR_H

#include "Deamer/Language/Generator/Definition/Property/User/Main/Grammar.h"
#include "Deamer/Language/Type/Definition/Object/Special/Uninitialized.h"

namespace Celeste
{
	class Language;

	/*!	\class Grammar
	 *
	 *	\brief This contains the grammar LPD of the language Celeste
	 *
	 *	\note This is auto-generated via the DLDL definition.
	 */
	class Grammar : public ::deamer::language::generator::definition::property::user::Grammar<
								::Celeste::Language>
	{
	public:
		// Non-Terminal declarations
		::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> program;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> deamerreserved_star__stmt__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> stmt;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> meta_declaration;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> deamerreserved_star__expression__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> deamerreserved_arrow__RIGHT_SQUARE_BRACKET__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> deamerreserved_star__meta_declaration__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> expression;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> class_declaration;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> deamerreserved_arrow__base_type__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> deamerreserved_star__COMMA__base_type__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> class_name;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> base_type;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> class_block;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> deamerreserved_star__class_stmt__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> enum_declaration;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> enum_name;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> enum_block;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> function_declaration;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> deamerreserved_arrow__deamerreserved_optional__function_argument____;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> deamerreserved_star__COMMA__function_argument__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> function_implementation;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> function_argument;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> function_arg_type;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> function_arg_name;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> type;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> function_name;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> return_type;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> function_block;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> deamerreserved_star__function_stmt__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> class_stmt;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> enum_stmt;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> function_stmt;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> logical_stmt;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> condtional_declaration;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> conditional_block;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> deamerreserved_star__condtional_stmt__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> condtional_stmt;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> variable_declaration;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::NonTerminal> variable_initialization;

	
		// Production-Rule declarations
		::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__stmt___stmt_deamerreserved_star__stmt__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__stmt___EMPTY;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> program_deamerreserved_star__stmt__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> stmt_class_declaration;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> stmt_enum_declaration;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> stmt_function_declaration;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> stmt_function_implementation;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> stmt_meta_declaration;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__expression___expression_deamerreserved_star__expression__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__expression___EMPTY;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_arrow__RIGHT_SQUARE_BRACKET___RIGHT_SQUARE_BRACKET_deamerreserved_star__meta_declaration__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__meta_declaration___meta_declaration_deamerreserved_star__meta_declaration__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__meta_declaration___EMPTY;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> meta_declaration_LEFT_SQUARE_BRACKET_deamerreserved_star__expression___deamerreserved_arrow__RIGHT_SQUARE_BRACKET__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> meta_declaration_LEFT_SQUARE_BRACKET_deamerreserved_star__expression___RIGHT_SQUARE_BRACKET_class_declaration;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> meta_declaration_LEFT_SQUARE_BRACKET_deamerreserved_star__expression___RIGHT_SQUARE_BRACKET_enum_declaration;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> meta_declaration_LEFT_SQUARE_BRACKET_deamerreserved_star__expression___RIGHT_SQUARE_BRACKET_function_declaration;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> expression_expression_PLUS_expression;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> expression_expression_MINUS_expression;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> expression_expression_DIVIDE_expression;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> expression_expression_MULTIPLY_expression;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> expression_expression_USERDEFINED_OPERATOR_expression;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> expression_VARNAME;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> expression_NUMBER;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> expression_DECIMAL;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> expression_TEXT;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_arrow__base_type___base_type_deamerreserved_star__COMMA__base_type__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__COMMA__base_type___COMMA_base_type_deamerreserved_star__COMMA__base_type__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__COMMA__base_type___EMPTY;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> class_declaration_CLASS_class_name_COLON_deamerreserved_arrow__base_type___class_block;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> class_declaration_CLASS_class_name_class_block;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> class_name_VARNAME;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> base_type_VARNAME;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__class_stmt___class_stmt_deamerreserved_star__class_stmt__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__class_stmt___EMPTY;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> class_block_LEFT_BRACKET_deamerreserved_star__class_stmt___RIGHT_BRACKET;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> enum_declaration_ENUM_enum_name_enum_block;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> enum_name_VARNAME;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__deamerreserved_or__enum_stmt__COMMA_____enum_stmt_deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__deamerreserved_or__enum_stmt__COMMA_____COMMA_deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__deamerreserved_or__enum_stmt__COMMA_____EMPTY;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> enum_block_LEFT_BRACKET_deamerreserved_star__deamerreserved_or__enum_stmt__COMMA_____RIGHT_BRACKET;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_arrow__deamerreserved_optional__function_argument_____function_argument_deamerreserved_star__COMMA__function_argument__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_arrow__deamerreserved_optional__function_argument_____EMPTY;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__COMMA__function_argument___COMMA_function_argument_deamerreserved_star__COMMA__function_argument__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__COMMA__function_argument___EMPTY;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> function_declaration_FUNCTION_function_name_LEFT_PARANTHESIS_deamerreserved_arrow__deamerreserved_optional__function_argument_____RIGHT_PARANTHESIS_return_type_SEMICOLON;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> function_declaration_FUNCTION_function_name_LEFT_PARANTHESIS_deamerreserved_arrow__deamerreserved_optional__function_argument_____RIGHT_PARANTHESIS_SEMICOLON;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> function_implementation_FUNCTION_function_name_LEFT_PARANTHESIS_deamerreserved_arrow__deamerreserved_optional__function_argument_____RIGHT_PARANTHESIS_return_type_function_block;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> function_implementation_FUNCTION_function_name_LEFT_PARANTHESIS_deamerreserved_arrow__deamerreserved_optional__function_argument_____RIGHT_PARANTHESIS_function_block;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> function_argument_function_arg_type_function_arg_name_EQ_expression;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> function_argument_function_arg_type_function_arg_name;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> function_arg_type_VARNAME;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> function_arg_name_VARNAME;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> type_VARNAME;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> function_name_VARNAME;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> return_type_VARNAME;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__function_stmt___function_stmt_deamerreserved_star__function_stmt__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__function_stmt___EMPTY;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> function_block_LEFT_BRACKET_deamerreserved_star__function_stmt___RIGHT_BRACKET;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> class_stmt_variable_declaration;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> class_stmt_function_declaration;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> class_stmt_function_implementation;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> enum_stmt_VARNAME;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> function_stmt_logical_stmt;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> logical_stmt_variable_declaration;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> logical_stmt_variable_initialization;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> logical_stmt_condtional_declaration;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> condtional_declaration_IF_LEFT_PARANTHESIS_expression_RIGHT_PARANTHESIS_conditional_block;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> condtional_declaration_ELSE_IF_LEFT_PARANTHESIS_expression_RIGHT_PARANTHESIS_conditional_block;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> condtional_declaration_ELSE_LEFT_PARANTHESIS_expression_RIGHT_PARANTHESIS_conditional_block;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__condtional_stmt___condtional_stmt_deamerreserved_star__condtional_stmt__;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> deamerreserved_star__condtional_stmt___EMPTY;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> conditional_block_LEFT_BRACKET_deamerreserved_star__condtional_stmt___RIGHT_BRACKET;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> condtional_stmt_logical_stmt;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> variable_declaration_type_VARNAME_SEMICOLON;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::ProductionRule> variable_initialization_type_VARNAME_EQ_expression_SEMICOLON;

	
	private:
		// Unknown reference declarations
		
	
	public:
		Grammar(Celeste::Language* language);

		void GenerateObjects() override;
	};
}

#endif // CELESTE_GRAMMAR_H
