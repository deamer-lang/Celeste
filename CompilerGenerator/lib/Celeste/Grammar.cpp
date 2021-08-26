#include "Celeste/Grammar.h"
#include "Celeste/Language.h"

Celeste::Grammar::Grammar(Celeste::Language* language)
			:	::deamer::language::generator::definition::property::user::Grammar<
					Celeste::Language>(language)
{
}

void Celeste::Grammar::GenerateObjects()
{
	// Non-Terminal initialization
	program.Set(::deamer::language::type::definition::object::main::NonTerminal("program", { program_deamerreserved_star__stmt__.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));
deamerreserved_star__stmt__.Set(::deamer::language::type::definition::object::main::NonTerminal("deamerreserved_star__stmt__", { deamerreserved_star__stmt___stmt_deamerreserved_star__stmt__.Pointer(),deamerreserved_star__stmt___EMPTY.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , true));
stmt.Set(::deamer::language::type::definition::object::main::NonTerminal("stmt", { stmt_class_declaration.Pointer(),stmt_enum_declaration.Pointer(),stmt_function_declaration.Pointer(),stmt_function_implementation.Pointer(),stmt_meta_declaration.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Group , false));
meta_declaration.Set(::deamer::language::type::definition::object::main::NonTerminal("meta_declaration", { meta_declaration_LEFT_SQUARE_BRACKET_deamerreserved_star__expression___deamerreserved_arrow__RIGHT_SQUARE_BRACKET__.Pointer(),meta_declaration_LEFT_SQUARE_BRACKET_deamerreserved_star__expression___RIGHT_SQUARE_BRACKET_class_declaration.Pointer(),meta_declaration_LEFT_SQUARE_BRACKET_deamerreserved_star__expression___RIGHT_SQUARE_BRACKET_enum_declaration.Pointer(),meta_declaration_LEFT_SQUARE_BRACKET_deamerreserved_star__expression___RIGHT_SQUARE_BRACKET_function_declaration.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));
deamerreserved_star__expression__.Set(::deamer::language::type::definition::object::main::NonTerminal("deamerreserved_star__expression__", { deamerreserved_star__expression___expression_deamerreserved_star__expression__.Pointer(),deamerreserved_star__expression___EMPTY.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , true));
deamerreserved_arrow__RIGHT_SQUARE_BRACKET__.Set(::deamer::language::type::definition::object::main::NonTerminal("deamerreserved_arrow__RIGHT_SQUARE_BRACKET__", { deamerreserved_arrow__RIGHT_SQUARE_BRACKET___RIGHT_SQUARE_BRACKET_deamerreserved_star__meta_declaration__.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , true));
deamerreserved_star__meta_declaration__.Set(::deamer::language::type::definition::object::main::NonTerminal("deamerreserved_star__meta_declaration__", { deamerreserved_star__meta_declaration___meta_declaration_deamerreserved_star__meta_declaration__.Pointer(),deamerreserved_star__meta_declaration___EMPTY.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , true));
expression.Set(::deamer::language::type::definition::object::main::NonTerminal("expression", { expression_expression_PLUS_expression.Pointer(),expression_expression_MINUS_expression.Pointer(),expression_expression_DIVIDE_expression.Pointer(),expression_expression_MULTIPLY_expression.Pointer(),expression_expression_USERDEFINED_OPERATOR_expression.Pointer(),expression_VARNAME.Pointer(),expression_NUMBER.Pointer(),expression_DECIMAL.Pointer(),expression_TEXT.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));
class_declaration.Set(::deamer::language::type::definition::object::main::NonTerminal("class_declaration", { class_declaration_CLASS_VARNAME_COLON_deamerreserved_arrow__base_type___base_type_class_block.Pointer(),class_declaration_CLASS_VARNAME_class_block.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));
deamerreserved_arrow__base_type__.Set(::deamer::language::type::definition::object::main::NonTerminal("deamerreserved_arrow__base_type__", { deamerreserved_arrow__base_type___base_type_deamerreserved_star__COMMA__.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , true));
deamerreserved_star__COMMA__.Set(::deamer::language::type::definition::object::main::NonTerminal("deamerreserved_star__COMMA__", { deamerreserved_star__COMMA___COMMA_deamerreserved_star__COMMA__.Pointer(),deamerreserved_star__COMMA___EMPTY.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , true));
base_type.Set(::deamer::language::type::definition::object::main::NonTerminal("base_type", { base_type_VARNAME.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));
class_block.Set(::deamer::language::type::definition::object::main::NonTerminal("class_block", { class_block_LEFT_BRACKET_deamerreserved_star__class_stmt___RIGHT_BRACKET.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));
deamerreserved_star__class_stmt__.Set(::deamer::language::type::definition::object::main::NonTerminal("deamerreserved_star__class_stmt__", { deamerreserved_star__class_stmt___class_stmt_deamerreserved_star__class_stmt__.Pointer(),deamerreserved_star__class_stmt___EMPTY.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , true));
enum_declaration.Set(::deamer::language::type::definition::object::main::NonTerminal("enum_declaration", { enum_declaration_ENUM_VARNAME_enum_block.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));
enum_block.Set(::deamer::language::type::definition::object::main::NonTerminal("enum_block", { enum_block_LEFT_BRACKET_deamerreserved_star__deamerreserved_or__enum_stmt__COMMA_____RIGHT_BRACKET.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));
deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____.Set(::deamer::language::type::definition::object::main::NonTerminal("deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____", { deamerreserved_star__deamerreserved_or__enum_stmt__COMMA_____enum_stmt_deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____.Pointer(),deamerreserved_star__deamerreserved_or__enum_stmt__COMMA_____COMMA_deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____.Pointer(),deamerreserved_star__deamerreserved_or__enum_stmt__COMMA_____EMPTY.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , true));
function_declaration.Set(::deamer::language::type::definition::object::main::NonTerminal("function_declaration", { function_declaration_FUNCTION_function_name_LEFT_PARANTHESIS_deamerreserved_arrow__deamerreserved_optional__function_argument_____RIGHT_PARANTHESIS_return_type_SEMICOLON.Pointer(),function_declaration_FUNCTION_function_name_LEFT_PARANTHESIS_deamerreserved_arrow__deamerreserved_optional__function_argument_____RIGHT_PARANTHESIS_SEMICOLON.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));
deamerreserved_arrow__deamerreserved_optional__function_argument____.Set(::deamer::language::type::definition::object::main::NonTerminal("deamerreserved_arrow__deamerreserved_optional__function_argument____", { deamerreserved_arrow__deamerreserved_optional__function_argument_____function_argument_deamerreserved_star__COMMA__function_argument__.Pointer(),deamerreserved_arrow__deamerreserved_optional__function_argument_____EMPTY.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , true));
deamerreserved_star__COMMA__function_argument__.Set(::deamer::language::type::definition::object::main::NonTerminal("deamerreserved_star__COMMA__function_argument__", { deamerreserved_star__COMMA__function_argument___COMMA_function_argument_deamerreserved_star__COMMA__function_argument__.Pointer(),deamerreserved_star__COMMA__function_argument___EMPTY.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , true));
function_implementation.Set(::deamer::language::type::definition::object::main::NonTerminal("function_implementation", { function_implementation_FUNCTION_function_name_LEFT_PARANTHESIS_deamerreserved_arrow__deamerreserved_optional__function_argument_____RIGHT_PARANTHESIS_return_type_function_block.Pointer(),function_implementation_FUNCTION_function_name_LEFT_PARANTHESIS_deamerreserved_arrow__deamerreserved_optional__function_argument_____RIGHT_PARANTHESIS_function_block.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));
function_argument.Set(::deamer::language::type::definition::object::main::NonTerminal("function_argument", { function_argument_type_VARNAME_EQ_expression.Pointer(),function_argument_type_VARNAME.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));
type.Set(::deamer::language::type::definition::object::main::NonTerminal("type", { type_VARNAME.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Group , false));
function_name.Set(::deamer::language::type::definition::object::main::NonTerminal("function_name", { function_name_VARNAME.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Group , false));
return_type.Set(::deamer::language::type::definition::object::main::NonTerminal("return_type", { return_type_VARNAME.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Group , false));
function_block.Set(::deamer::language::type::definition::object::main::NonTerminal("function_block", { function_block_LEFT_BRACKET_deamerreserved_star__function_stmt___RIGHT_BRACKET.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));
deamerreserved_star__function_stmt__.Set(::deamer::language::type::definition::object::main::NonTerminal("deamerreserved_star__function_stmt__", { deamerreserved_star__function_stmt___function_stmt_deamerreserved_star__function_stmt__.Pointer(),deamerreserved_star__function_stmt___EMPTY.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , true));
class_stmt.Set(::deamer::language::type::definition::object::main::NonTerminal("class_stmt", { class_stmt_function_declaration.Pointer(),class_stmt_function_implementation.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Group , false));
enum_stmt.Set(::deamer::language::type::definition::object::main::NonTerminal("enum_stmt", { enum_stmt_VARNAME.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Group , false));
function_stmt.Set(::deamer::language::type::definition::object::main::NonTerminal("function_stmt", { function_stmt_logical_stmt.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Group , false));
logical_stmt.Set(::deamer::language::type::definition::object::main::NonTerminal("logical_stmt", { logical_stmt_variable_declaration.Pointer(),logical_stmt_variable_initialization.Pointer(),logical_stmt_condtional_declaration.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Group , false));
condtional_declaration.Set(::deamer::language::type::definition::object::main::NonTerminal("condtional_declaration", { condtional_declaration_IF_LEFT_PARANTHESIS_expression_RIGHT_PARANTHESIS_conditional_block.Pointer(),condtional_declaration_ELSE_IF_LEFT_PARANTHESIS_expression_RIGHT_PARANTHESIS_conditional_block.Pointer(),condtional_declaration_ELSE_LEFT_PARANTHESIS_expression_RIGHT_PARANTHESIS_conditional_block.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Group , false));
conditional_block.Set(::deamer::language::type::definition::object::main::NonTerminal("conditional_block", { conditional_block_LEFT_BRACKET_deamerreserved_star__condtional_stmt___RIGHT_BRACKET.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));
deamerreserved_star__condtional_stmt__.Set(::deamer::language::type::definition::object::main::NonTerminal("deamerreserved_star__condtional_stmt__", { deamerreserved_star__condtional_stmt___condtional_stmt_deamerreserved_star__condtional_stmt__.Pointer(),deamerreserved_star__condtional_stmt___EMPTY.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , true));
condtional_stmt.Set(::deamer::language::type::definition::object::main::NonTerminal("condtional_stmt", { condtional_stmt_logical_stmt.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Group , false));
variable_declaration.Set(::deamer::language::type::definition::object::main::NonTerminal("variable_declaration", { variable_declaration_type_VARNAME_SEMICOLON.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));
variable_initialization.Set(::deamer::language::type::definition::object::main::NonTerminal("variable_initialization", { variable_initialization_type_VARNAME_EQ_expression_SEMICOLON.Pointer() } , ::deamer::language::type::definition::object::main::NonTerminalAbstraction::Standard , false));


	// Production-Rule initialization
	deamerreserved_star__stmt___stmt_deamerreserved_star__stmt__.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->stmt.Pointer(),Language->deamerreserved_star__stmt__.Pointer() }));
deamerreserved_star__stmt___EMPTY.Set(::deamer::language::type::definition::object::main::ProductionRule());
program_deamerreserved_star__stmt__.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->deamerreserved_star__stmt__.Pointer() }));
stmt_class_declaration.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->class_declaration.Pointer() }));
stmt_enum_declaration.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->enum_declaration.Pointer() }));
stmt_function_declaration.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->function_declaration.Pointer() }));
stmt_function_implementation.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->function_implementation.Pointer() }));
stmt_meta_declaration.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->meta_declaration.Pointer() }));
deamerreserved_star__expression___expression_deamerreserved_star__expression__.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->expression.Pointer(),Language->deamerreserved_star__expression__.Pointer() }));
deamerreserved_star__expression___EMPTY.Set(::deamer::language::type::definition::object::main::ProductionRule());
deamerreserved_arrow__RIGHT_SQUARE_BRACKET___RIGHT_SQUARE_BRACKET_deamerreserved_star__meta_declaration__.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->RIGHT_SQUARE_BRACKET.Pointer(),Language->deamerreserved_star__meta_declaration__.Pointer() }));
deamerreserved_star__meta_declaration___meta_declaration_deamerreserved_star__meta_declaration__.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->meta_declaration.Pointer(),Language->deamerreserved_star__meta_declaration__.Pointer() }));
deamerreserved_star__meta_declaration___EMPTY.Set(::deamer::language::type::definition::object::main::ProductionRule());
meta_declaration_LEFT_SQUARE_BRACKET_deamerreserved_star__expression___deamerreserved_arrow__RIGHT_SQUARE_BRACKET__.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->LEFT_SQUARE_BRACKET.Pointer(),Language->deamerreserved_star__expression__.Pointer(),Language->deamerreserved_arrow__RIGHT_SQUARE_BRACKET__.Pointer() }));
meta_declaration_LEFT_SQUARE_BRACKET_deamerreserved_star__expression___RIGHT_SQUARE_BRACKET_class_declaration.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->LEFT_SQUARE_BRACKET.Pointer(),Language->deamerreserved_star__expression__.Pointer(),Language->RIGHT_SQUARE_BRACKET.Pointer(),Language->class_declaration.Pointer() }));
meta_declaration_LEFT_SQUARE_BRACKET_deamerreserved_star__expression___RIGHT_SQUARE_BRACKET_enum_declaration.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->LEFT_SQUARE_BRACKET.Pointer(),Language->deamerreserved_star__expression__.Pointer(),Language->RIGHT_SQUARE_BRACKET.Pointer(),Language->enum_declaration.Pointer() }));
meta_declaration_LEFT_SQUARE_BRACKET_deamerreserved_star__expression___RIGHT_SQUARE_BRACKET_function_declaration.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->LEFT_SQUARE_BRACKET.Pointer(),Language->deamerreserved_star__expression__.Pointer(),Language->RIGHT_SQUARE_BRACKET.Pointer(),Language->function_declaration.Pointer() }));
expression_expression_PLUS_expression.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->expression.Pointer(),Language->PLUS.Pointer(),Language->expression.Pointer() }));
expression_expression_MINUS_expression.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->expression.Pointer(),Language->MINUS.Pointer(),Language->expression.Pointer() }));
expression_expression_DIVIDE_expression.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->expression.Pointer(),Language->DIVIDE.Pointer(),Language->expression.Pointer() }));
expression_expression_MULTIPLY_expression.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->expression.Pointer(),Language->MULTIPLY.Pointer(),Language->expression.Pointer() }));
expression_expression_USERDEFINED_OPERATOR_expression.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->expression.Pointer(),Language->USERDEFINED_OPERATOR.Pointer(),Language->expression.Pointer() }));
expression_VARNAME.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->VARNAME.Pointer() }));
expression_NUMBER.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->NUMBER.Pointer() }));
expression_DECIMAL.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->DECIMAL.Pointer() }));
expression_TEXT.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->TEXT.Pointer() }));
deamerreserved_arrow__base_type___base_type_deamerreserved_star__COMMA__.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->base_type.Pointer(),Language->deamerreserved_star__COMMA__.Pointer() }));
deamerreserved_star__COMMA___COMMA_deamerreserved_star__COMMA__.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->COMMA.Pointer(),Language->deamerreserved_star__COMMA__.Pointer() }));
deamerreserved_star__COMMA___EMPTY.Set(::deamer::language::type::definition::object::main::ProductionRule());
class_declaration_CLASS_VARNAME_COLON_deamerreserved_arrow__base_type___base_type_class_block.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->CLASS.Pointer(),Language->VARNAME.Pointer(),Language->COLON.Pointer(),Language->deamerreserved_arrow__base_type__.Pointer(),Language->base_type.Pointer(),Language->class_block.Pointer() }));
class_declaration_CLASS_VARNAME_class_block.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->CLASS.Pointer(),Language->VARNAME.Pointer(),Language->class_block.Pointer() }));
base_type_VARNAME.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->VARNAME.Pointer() }));
deamerreserved_star__class_stmt___class_stmt_deamerreserved_star__class_stmt__.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->class_stmt.Pointer(),Language->deamerreserved_star__class_stmt__.Pointer() }));
deamerreserved_star__class_stmt___EMPTY.Set(::deamer::language::type::definition::object::main::ProductionRule());
class_block_LEFT_BRACKET_deamerreserved_star__class_stmt___RIGHT_BRACKET.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->LEFT_BRACKET.Pointer(),Language->deamerreserved_star__class_stmt__.Pointer(),Language->RIGHT_BRACKET.Pointer() }));
enum_declaration_ENUM_VARNAME_enum_block.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->ENUM.Pointer(),Language->VARNAME.Pointer(),Language->enum_block.Pointer() }));
deamerreserved_star__deamerreserved_or__enum_stmt__COMMA_____enum_stmt_deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->enum_stmt.Pointer(),Language->deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____.Pointer() }));
deamerreserved_star__deamerreserved_or__enum_stmt__COMMA_____COMMA_deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->COMMA.Pointer(),Language->deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____.Pointer() }));
deamerreserved_star__deamerreserved_or__enum_stmt__COMMA_____EMPTY.Set(::deamer::language::type::definition::object::main::ProductionRule());
enum_block_LEFT_BRACKET_deamerreserved_star__deamerreserved_or__enum_stmt__COMMA_____RIGHT_BRACKET.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->LEFT_BRACKET.Pointer(),Language->deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____.Pointer(),Language->RIGHT_BRACKET.Pointer() }));
deamerreserved_arrow__deamerreserved_optional__function_argument_____function_argument_deamerreserved_star__COMMA__function_argument__.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->function_argument.Pointer(),Language->deamerreserved_star__COMMA__function_argument__.Pointer() }));
deamerreserved_arrow__deamerreserved_optional__function_argument_____EMPTY.Set(::deamer::language::type::definition::object::main::ProductionRule());
deamerreserved_star__COMMA__function_argument___COMMA_function_argument_deamerreserved_star__COMMA__function_argument__.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->COMMA.Pointer(),Language->function_argument.Pointer(),Language->deamerreserved_star__COMMA__function_argument__.Pointer() }));
deamerreserved_star__COMMA__function_argument___EMPTY.Set(::deamer::language::type::definition::object::main::ProductionRule());
function_declaration_FUNCTION_function_name_LEFT_PARANTHESIS_deamerreserved_arrow__deamerreserved_optional__function_argument_____RIGHT_PARANTHESIS_return_type_SEMICOLON.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->FUNCTION.Pointer(),Language->function_name.Pointer(),Language->LEFT_PARANTHESIS.Pointer(),Language->deamerreserved_arrow__deamerreserved_optional__function_argument____.Pointer(),Language->RIGHT_PARANTHESIS.Pointer(),Language->return_type.Pointer(),Language->SEMICOLON.Pointer() }));
function_declaration_FUNCTION_function_name_LEFT_PARANTHESIS_deamerreserved_arrow__deamerreserved_optional__function_argument_____RIGHT_PARANTHESIS_SEMICOLON.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->FUNCTION.Pointer(),Language->function_name.Pointer(),Language->LEFT_PARANTHESIS.Pointer(),Language->deamerreserved_arrow__deamerreserved_optional__function_argument____.Pointer(),Language->RIGHT_PARANTHESIS.Pointer(),Language->SEMICOLON.Pointer() }));
function_implementation_FUNCTION_function_name_LEFT_PARANTHESIS_deamerreserved_arrow__deamerreserved_optional__function_argument_____RIGHT_PARANTHESIS_return_type_function_block.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->FUNCTION.Pointer(),Language->function_name.Pointer(),Language->LEFT_PARANTHESIS.Pointer(),Language->deamerreserved_arrow__deamerreserved_optional__function_argument____.Pointer(),Language->RIGHT_PARANTHESIS.Pointer(),Language->return_type.Pointer(),Language->function_block.Pointer() }));
function_implementation_FUNCTION_function_name_LEFT_PARANTHESIS_deamerreserved_arrow__deamerreserved_optional__function_argument_____RIGHT_PARANTHESIS_function_block.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->FUNCTION.Pointer(),Language->function_name.Pointer(),Language->LEFT_PARANTHESIS.Pointer(),Language->deamerreserved_arrow__deamerreserved_optional__function_argument____.Pointer(),Language->RIGHT_PARANTHESIS.Pointer(),Language->function_block.Pointer() }));
function_argument_type_VARNAME_EQ_expression.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->type.Pointer(),Language->VARNAME.Pointer(),Language->EQ.Pointer(),Language->expression.Pointer() }));
function_argument_type_VARNAME.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->type.Pointer(),Language->VARNAME.Pointer() }));
type_VARNAME.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->VARNAME.Pointer() }));
function_name_VARNAME.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->VARNAME.Pointer() }));
return_type_VARNAME.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->VARNAME.Pointer() }));
deamerreserved_star__function_stmt___function_stmt_deamerreserved_star__function_stmt__.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->function_stmt.Pointer(),Language->deamerreserved_star__function_stmt__.Pointer() }));
deamerreserved_star__function_stmt___EMPTY.Set(::deamer::language::type::definition::object::main::ProductionRule());
function_block_LEFT_BRACKET_deamerreserved_star__function_stmt___RIGHT_BRACKET.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->LEFT_BRACKET.Pointer(),Language->deamerreserved_star__function_stmt__.Pointer(),Language->RIGHT_BRACKET.Pointer() }));
class_stmt_function_declaration.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->function_declaration.Pointer() }));
class_stmt_function_implementation.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->function_implementation.Pointer() }));
enum_stmt_VARNAME.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->VARNAME.Pointer() }));
function_stmt_logical_stmt.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->logical_stmt.Pointer() }));
logical_stmt_variable_declaration.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->variable_declaration.Pointer() }));
logical_stmt_variable_initialization.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->variable_initialization.Pointer() }));
logical_stmt_condtional_declaration.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->condtional_declaration.Pointer() }));
condtional_declaration_IF_LEFT_PARANTHESIS_expression_RIGHT_PARANTHESIS_conditional_block.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->IF.Pointer(),Language->LEFT_PARANTHESIS.Pointer(),Language->expression.Pointer(),Language->RIGHT_PARANTHESIS.Pointer(),Language->conditional_block.Pointer() }));
condtional_declaration_ELSE_IF_LEFT_PARANTHESIS_expression_RIGHT_PARANTHESIS_conditional_block.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->ELSE.Pointer(),Language->IF.Pointer(),Language->LEFT_PARANTHESIS.Pointer(),Language->expression.Pointer(),Language->RIGHT_PARANTHESIS.Pointer(),Language->conditional_block.Pointer() }));
condtional_declaration_ELSE_LEFT_PARANTHESIS_expression_RIGHT_PARANTHESIS_conditional_block.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->ELSE.Pointer(),Language->LEFT_PARANTHESIS.Pointer(),Language->expression.Pointer(),Language->RIGHT_PARANTHESIS.Pointer(),Language->conditional_block.Pointer() }));
deamerreserved_star__condtional_stmt___condtional_stmt_deamerreserved_star__condtional_stmt__.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->condtional_stmt.Pointer(),Language->deamerreserved_star__condtional_stmt__.Pointer() }));
deamerreserved_star__condtional_stmt___EMPTY.Set(::deamer::language::type::definition::object::main::ProductionRule());
conditional_block_LEFT_BRACKET_deamerreserved_star__condtional_stmt___RIGHT_BRACKET.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->LEFT_BRACKET.Pointer(),Language->deamerreserved_star__condtional_stmt__.Pointer(),Language->RIGHT_BRACKET.Pointer() }));
condtional_stmt_logical_stmt.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->logical_stmt.Pointer() }));
variable_declaration_type_VARNAME_SEMICOLON.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->type.Pointer(),Language->VARNAME.Pointer(),Language->SEMICOLON.Pointer() }));
variable_initialization_type_VARNAME_EQ_expression_SEMICOLON.Set(::deamer::language::type::definition::object::main::ProductionRule({ Language->type.Pointer(),Language->VARNAME.Pointer(),Language->EQ.Pointer(),Language->expression.Pointer(),Language->SEMICOLON.Pointer() }));


	// Unknown references
	

	// Add object calls
	// AddObject(...)
	AddObject(program);
AddObject(deamerreserved_star__stmt__);
AddObject(stmt);
AddObject(meta_declaration);
AddObject(deamerreserved_star__expression__);
AddObject(deamerreserved_arrow__RIGHT_SQUARE_BRACKET__);
AddObject(deamerreserved_star__meta_declaration__);
AddObject(expression);
AddObject(class_declaration);
AddObject(deamerreserved_arrow__base_type__);
AddObject(deamerreserved_star__COMMA__);
AddObject(base_type);
AddObject(class_block);
AddObject(deamerreserved_star__class_stmt__);
AddObject(enum_declaration);
AddObject(enum_block);
AddObject(deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____);
AddObject(function_declaration);
AddObject(deamerreserved_arrow__deamerreserved_optional__function_argument____);
AddObject(deamerreserved_star__COMMA__function_argument__);
AddObject(function_implementation);
AddObject(function_argument);
AddObject(type);
AddObject(function_name);
AddObject(return_type);
AddObject(function_block);
AddObject(deamerreserved_star__function_stmt__);
AddObject(class_stmt);
AddObject(enum_stmt);
AddObject(function_stmt);
AddObject(logical_stmt);
AddObject(condtional_declaration);
AddObject(conditional_block);
AddObject(deamerreserved_star__condtional_stmt__);
AddObject(condtional_stmt);
AddObject(variable_declaration);
AddObject(variable_initialization);


	AddObject(deamerreserved_star__stmt___stmt_deamerreserved_star__stmt__);
AddObject(deamerreserved_star__stmt___EMPTY);
AddObject(program_deamerreserved_star__stmt__);
AddObject(stmt_class_declaration);
AddObject(stmt_enum_declaration);
AddObject(stmt_function_declaration);
AddObject(stmt_function_implementation);
AddObject(stmt_meta_declaration);
AddObject(deamerreserved_star__expression___expression_deamerreserved_star__expression__);
AddObject(deamerreserved_star__expression___EMPTY);
AddObject(deamerreserved_arrow__RIGHT_SQUARE_BRACKET___RIGHT_SQUARE_BRACKET_deamerreserved_star__meta_declaration__);
AddObject(deamerreserved_star__meta_declaration___meta_declaration_deamerreserved_star__meta_declaration__);
AddObject(deamerreserved_star__meta_declaration___EMPTY);
AddObject(meta_declaration_LEFT_SQUARE_BRACKET_deamerreserved_star__expression___deamerreserved_arrow__RIGHT_SQUARE_BRACKET__);
AddObject(meta_declaration_LEFT_SQUARE_BRACKET_deamerreserved_star__expression___RIGHT_SQUARE_BRACKET_class_declaration);
AddObject(meta_declaration_LEFT_SQUARE_BRACKET_deamerreserved_star__expression___RIGHT_SQUARE_BRACKET_enum_declaration);
AddObject(meta_declaration_LEFT_SQUARE_BRACKET_deamerreserved_star__expression___RIGHT_SQUARE_BRACKET_function_declaration);
AddObject(expression_expression_PLUS_expression);
AddObject(expression_expression_MINUS_expression);
AddObject(expression_expression_DIVIDE_expression);
AddObject(expression_expression_MULTIPLY_expression);
AddObject(expression_expression_USERDEFINED_OPERATOR_expression);
AddObject(expression_VARNAME);
AddObject(expression_NUMBER);
AddObject(expression_DECIMAL);
AddObject(expression_TEXT);
AddObject(deamerreserved_arrow__base_type___base_type_deamerreserved_star__COMMA__);
AddObject(deamerreserved_star__COMMA___COMMA_deamerreserved_star__COMMA__);
AddObject(deamerreserved_star__COMMA___EMPTY);
AddObject(class_declaration_CLASS_VARNAME_COLON_deamerreserved_arrow__base_type___base_type_class_block);
AddObject(class_declaration_CLASS_VARNAME_class_block);
AddObject(base_type_VARNAME);
AddObject(deamerreserved_star__class_stmt___class_stmt_deamerreserved_star__class_stmt__);
AddObject(deamerreserved_star__class_stmt___EMPTY);
AddObject(class_block_LEFT_BRACKET_deamerreserved_star__class_stmt___RIGHT_BRACKET);
AddObject(enum_declaration_ENUM_VARNAME_enum_block);
AddObject(deamerreserved_star__deamerreserved_or__enum_stmt__COMMA_____enum_stmt_deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____);
AddObject(deamerreserved_star__deamerreserved_or__enum_stmt__COMMA_____COMMA_deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____);
AddObject(deamerreserved_star__deamerreserved_or__enum_stmt__COMMA_____EMPTY);
AddObject(enum_block_LEFT_BRACKET_deamerreserved_star__deamerreserved_or__enum_stmt__COMMA_____RIGHT_BRACKET);
AddObject(deamerreserved_arrow__deamerreserved_optional__function_argument_____function_argument_deamerreserved_star__COMMA__function_argument__);
AddObject(deamerreserved_arrow__deamerreserved_optional__function_argument_____EMPTY);
AddObject(deamerreserved_star__COMMA__function_argument___COMMA_function_argument_deamerreserved_star__COMMA__function_argument__);
AddObject(deamerreserved_star__COMMA__function_argument___EMPTY);
AddObject(function_declaration_FUNCTION_function_name_LEFT_PARANTHESIS_deamerreserved_arrow__deamerreserved_optional__function_argument_____RIGHT_PARANTHESIS_return_type_SEMICOLON);
AddObject(function_declaration_FUNCTION_function_name_LEFT_PARANTHESIS_deamerreserved_arrow__deamerreserved_optional__function_argument_____RIGHT_PARANTHESIS_SEMICOLON);
AddObject(function_implementation_FUNCTION_function_name_LEFT_PARANTHESIS_deamerreserved_arrow__deamerreserved_optional__function_argument_____RIGHT_PARANTHESIS_return_type_function_block);
AddObject(function_implementation_FUNCTION_function_name_LEFT_PARANTHESIS_deamerreserved_arrow__deamerreserved_optional__function_argument_____RIGHT_PARANTHESIS_function_block);
AddObject(function_argument_type_VARNAME_EQ_expression);
AddObject(function_argument_type_VARNAME);
AddObject(type_VARNAME);
AddObject(function_name_VARNAME);
AddObject(return_type_VARNAME);
AddObject(deamerreserved_star__function_stmt___function_stmt_deamerreserved_star__function_stmt__);
AddObject(deamerreserved_star__function_stmt___EMPTY);
AddObject(function_block_LEFT_BRACKET_deamerreserved_star__function_stmt___RIGHT_BRACKET);
AddObject(class_stmt_function_declaration);
AddObject(class_stmt_function_implementation);
AddObject(enum_stmt_VARNAME);
AddObject(function_stmt_logical_stmt);
AddObject(logical_stmt_variable_declaration);
AddObject(logical_stmt_variable_initialization);
AddObject(logical_stmt_condtional_declaration);
AddObject(condtional_declaration_IF_LEFT_PARANTHESIS_expression_RIGHT_PARANTHESIS_conditional_block);
AddObject(condtional_declaration_ELSE_IF_LEFT_PARANTHESIS_expression_RIGHT_PARANTHESIS_conditional_block);
AddObject(condtional_declaration_ELSE_LEFT_PARANTHESIS_expression_RIGHT_PARANTHESIS_conditional_block);
AddObject(deamerreserved_star__condtional_stmt___condtional_stmt_deamerreserved_star__condtional_stmt__);
AddObject(deamerreserved_star__condtional_stmt___EMPTY);
AddObject(conditional_block_LEFT_BRACKET_deamerreserved_star__condtional_stmt___RIGHT_BRACKET);
AddObject(condtional_stmt_logical_stmt);
AddObject(variable_declaration_type_VARNAME_SEMICOLON);
AddObject(variable_initialization_type_VARNAME_EQ_expression_SEMICOLON);


	


	// Place higher level operations here.
	// ReplaceObject(..., ...)
	// DeleteObject(..., ...)
	
}
