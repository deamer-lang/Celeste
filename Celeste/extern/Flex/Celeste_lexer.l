%option yylineno
%option noyywrap
%option never-interactive
%option nounistd

%{
#include <iostream>
#include <sstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <clocale>
#include <cwchar>
#include <Deamer/External/Cpp/Lexer/TerminalObject.h>
#include "Celeste/Flex/Lexer.h"

#include "Celeste/Ast/Enum/Type.h"

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
#include "Celeste/Ast/Node/OPERATORNAME.h"
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


#include "Bison/Celeste_parser.tab.h"
void showError();
extern int Celestelex();

static bool local_store     = false;
static bool include_deleted = false;

int Celeste_column    = 1;
static int next_column = 1;

static std::size_t min(std::size_t a, std::size_t b);

static void handleColumn();
static void store(const deamer::external::cpp::lexer::TerminalObject* const newObject);
static std::vector<const deamer::external::cpp::lexer::TerminalObject*> 
local_objects;


#ifndef yyval
#define yyval yytext
#endif // yyval
%}

SINGLE_COMMENT	([/][^\n\r]*[\n\r]{0,1})
CONSTANT	([Cc][Oo][Nn][Ss][Tt]([Aa][Nn][Tt]){0,1})
FUNCTION	([Ff][Uu][Nn][Cc][Tt][Ii][Oo][Nn])
CLASS	([Cc][Ll][Aa][Ss][Ss])
ENUM	([Ee][Nn][Uu][Mm])
CONDITIONAL	([Cc][Oo][Nn][Dd][Ii][Tt][Ii][Oo][Nn][Aa][Ll])
CODE	([Cc][Oo][Dd][Ee])
RUNTIME	([Rr][Uu][Nn][Tt][Ii][Mm][Ee])
STATIC	([Ss][Tt][Aa][Tt][Ii][Cc])
AUTO	([Aa][Uu][Tt][Oo])
AUTOTYPE	([Aa][Uu][Tt][Oo][Tt][Yy][Pp][Ee])
TEMPLATE	([Tt][Ee][Mm][Pp][Ll][Aa][Tt][Ee])
NAMESPACE	([Nn][Aa][Mm][Ee][Ss][Pp][Aa][Cc][Ee])
OPERATORNAME	([Oo][Pp][Ee][Rr][Aa][Tt][Oo][Rr][\\+\-?!*^%@#$^<>=:|]+)
OVERRIDE	([Oo][Vv][Ee][Rr][Rr][Ii][Dd][Ee])
VIRTUAL	([Vv][Ii][Rr][Tt][Uu][Aa][Ll])
PURE	((([Pp][Uu][Rr][Ee])|([Aa][Bb][Ss][Tt][Rr][Aa][Cc][Tt])))
AS	([Aa][Ss])
IN	([Ii][Nn])
DISPLAY	([Dd][Ii][Ss][Pp][Ll][Aa][Yy])
RETURN	([Rr][Ee][Tt][Uu][Rr][Nn])
FOR	([Ff][Oo][Rr])
IF	([Ii][Ff])
ELSEIF	([Ee][Ll]([Ss][Ee][ ]*){0,1}[Ii][Ff])
ELSE	([Ee][Ll][Ss][Ee])
INLINE	([Ii][Nn][Ll][Ii][Nn][Ee])
CONSTRUCTOR	([Cc][Oo][Nn][Ss][Tt][Rr][Uu][Cc][Tt][Oo][Rr])
FILE_	([Ff][Ii][Ll][Ee])
PROGRAM_	([Pp][Rr][Oo][Gg][Rr][Aa][Mm])
IMPORT	([Ii][Mm][Pp][Oo][Rr][Tt])
PUBLIC	([Pp][Uu][Bb][Ll][Ii][Cc])
PROTECTED	([Pp][Rr][Oo][Tt][Ee][Cc][Tt][Ee][Dd])
PRIVATE	([Pp][Rr][Ii][Vv][Aa][Tt][Ee])
INHERIT	([Ii][Nn][Hh][Ee][Rr][Ii][Tt])
COMPOSITE	([Cc][Oo][Mm][Pp][Oo][Ss][Ii][Tt][Ee])
LEFT_BRACKET	([{])
RIGHT_BRACKET	([}])
LEFT_SQUARE_BRACKET	([\[])
RIGHT_SQUARE_BRACKET	([\]])
LEFT_PARANTHESIS	([(])
RIGHT_PARANTHESIS	([)])
COLON	([:])
SEMICOLON	([;])
COMMA	([,])
DOT	([.])
LTEQ	([<][=])
GTEQ	([>][=])
LT	([<])
GT	([>])
PLUSEQ	([+][=])
MINUSEQ	([-][=])
MULTIPLYEQ	([*][=])
DIVIDEEQ	([\\][=])
EQEQ	([=][=])
EQ	([=])
NOTEQ	([!][=])
NOT	([!])
PLUSPLUS	([+][+])
PLUS	([+])
MINUSMINUS	([\-][\-])
MINUS	([\-])
DIVIDE	([\\])
MULTIPLY	([*])
VARNAME	([a-zA-Z_][a-zA-Z_0-9]*)
NUMBER	([0-9]+)
DECIMAL	([0-9]+[\.][0-9]+)
TEXT	(["]([\\]["]|[\\][\\]|[^"])*["])
ESCAPE_CHARS	([\n\r\t ]+)

DEAMER_RESERVED_UNRECOGNIZED_RULE_MATCH	(.)

%%

{SINGLE_COMMENT}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(1))); else if (local_store && false) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(1))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(1)); else if (false) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(1)); if ((!local_store && false) || (!local_store && include_deleted)) return (SINGLE_COMMENT); }
{CONSTANT}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(2))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(2))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(2)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(2)); if ((!local_store && true) || (!local_store && include_deleted)) return (CONSTANT); }
{FUNCTION}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(3))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(3))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(3)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(3)); if ((!local_store && true) || (!local_store && include_deleted)) return (FUNCTION); }
{CLASS}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(4))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(4))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(4)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(4)); if ((!local_store && true) || (!local_store && include_deleted)) return (CLASS); }
{ENUM}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(5))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(5))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(5)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(5)); if ((!local_store && true) || (!local_store && include_deleted)) return (ENUM); }
{CONDITIONAL}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(6))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(6))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(6)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(6)); if ((!local_store && true) || (!local_store && include_deleted)) return (CONDITIONAL); }
{CODE}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(7))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(7))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(7)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(7)); if ((!local_store && true) || (!local_store && include_deleted)) return (CODE); }
{RUNTIME}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(8))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(8))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(8)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(8)); if ((!local_store && true) || (!local_store && include_deleted)) return (RUNTIME); }
{STATIC}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(9))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(9))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(9)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(9)); if ((!local_store && true) || (!local_store && include_deleted)) return (STATIC); }
{AUTO}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(10))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(10))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(10)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(10)); if ((!local_store && true) || (!local_store && include_deleted)) return (AUTO); }
{AUTOTYPE}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(11))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(11))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(11)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(11)); if ((!local_store && true) || (!local_store && include_deleted)) return (AUTOTYPE); }
{TEMPLATE}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(12))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(12))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(12)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(12)); if ((!local_store && true) || (!local_store && include_deleted)) return (TEMPLATE); }
{NAMESPACE}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(13))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(13))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(13)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(13)); if ((!local_store && true) || (!local_store && include_deleted)) return (NAMESPACE); }
{OPERATORNAME}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(14))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(14))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(14)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(14)); if ((!local_store && true) || (!local_store && include_deleted)) return (OPERATORNAME); }
{OVERRIDE}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(15))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(15))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(15)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(15)); if ((!local_store && true) || (!local_store && include_deleted)) return (OVERRIDE); }
{VIRTUAL}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(16))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(16))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(16)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(16)); if ((!local_store && true) || (!local_store && include_deleted)) return (VIRTUAL); }
{PURE}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(17))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(17))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(17)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(17)); if ((!local_store && true) || (!local_store && include_deleted)) return (PURE); }
{AS}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(18))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(18))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(18)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(18)); if ((!local_store && true) || (!local_store && include_deleted)) return (AS); }
{IN}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(19))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(19))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(19)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(19)); if ((!local_store && true) || (!local_store && include_deleted)) return (IN); }
{DISPLAY}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(20))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(20))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(20)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(20)); if ((!local_store && true) || (!local_store && include_deleted)) return (DISPLAY); }
{RETURN}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(21))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(21))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(21)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(21)); if ((!local_store && true) || (!local_store && include_deleted)) return (RETURN); }
{FOR}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(22))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(22))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(22)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(22)); if ((!local_store && true) || (!local_store && include_deleted)) return (FOR); }
{IF}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(23))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(23))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(23)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(23)); if ((!local_store && true) || (!local_store && include_deleted)) return (IF); }
{ELSEIF}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(24))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(24))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(24)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(24)); if ((!local_store && true) || (!local_store && include_deleted)) return (ELSEIF); }
{ELSE}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(25))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(25))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(25)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(25)); if ((!local_store && true) || (!local_store && include_deleted)) return (ELSE); }
{INLINE}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(26))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(26))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(26)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(26)); if ((!local_store && true) || (!local_store && include_deleted)) return (INLINE); }
{CONSTRUCTOR}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(27))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(27))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(27)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(27)); if ((!local_store && true) || (!local_store && include_deleted)) return (CONSTRUCTOR); }
{FILE_}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(28))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(28))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(28)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(28)); if ((!local_store && true) || (!local_store && include_deleted)) return (FILE_); }
{PROGRAM_}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(29))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(29))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(29)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(29)); if ((!local_store && true) || (!local_store && include_deleted)) return (PROGRAM_); }
{IMPORT}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(30))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(30))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(30)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(30)); if ((!local_store && true) || (!local_store && include_deleted)) return (IMPORT); }
{PUBLIC}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(31))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(31))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(31)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(31)); if ((!local_store && true) || (!local_store && include_deleted)) return (PUBLIC); }
{PROTECTED}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(32))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(32))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(32)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(32)); if ((!local_store && true) || (!local_store && include_deleted)) return (PROTECTED); }
{PRIVATE}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(33))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(33))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(33)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(33)); if ((!local_store && true) || (!local_store && include_deleted)) return (PRIVATE); }
{INHERIT}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(34))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(34))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(34)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(34)); if ((!local_store && true) || (!local_store && include_deleted)) return (INHERIT); }
{COMPOSITE}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(35))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(35))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(35)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(35)); if ((!local_store && true) || (!local_store && include_deleted)) return (COMPOSITE); }
{LEFT_BRACKET}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(36))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(36))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(36)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(36)); if ((!local_store && true) || (!local_store && include_deleted)) return (LEFT_BRACKET); }
{RIGHT_BRACKET}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(37))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(37))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(37)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(37)); if ((!local_store && true) || (!local_store && include_deleted)) return (RIGHT_BRACKET); }
{LEFT_SQUARE_BRACKET}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(38))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(38))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(38)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(38)); if ((!local_store && true) || (!local_store && include_deleted)) return (LEFT_SQUARE_BRACKET); }
{RIGHT_SQUARE_BRACKET}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(39))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(39))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(39)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(39)); if ((!local_store && true) || (!local_store && include_deleted)) return (RIGHT_SQUARE_BRACKET); }
{LEFT_PARANTHESIS}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(40))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(40))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(40)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(40)); if ((!local_store && true) || (!local_store && include_deleted)) return (LEFT_PARANTHESIS); }
{RIGHT_PARANTHESIS}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(41))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(41))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(41)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(41)); if ((!local_store && true) || (!local_store && include_deleted)) return (RIGHT_PARANTHESIS); }
{COLON}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(42))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(42))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(42)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(42)); if ((!local_store && true) || (!local_store && include_deleted)) return (COLON); }
{SEMICOLON}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(43))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(43))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(43)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(43)); if ((!local_store && true) || (!local_store && include_deleted)) return (SEMICOLON); }
{COMMA}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(44))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(44))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(44)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(44)); if ((!local_store && true) || (!local_store && include_deleted)) return (COMMA); }
{DOT}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(45))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(45))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(45)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(45)); if ((!local_store && true) || (!local_store && include_deleted)) return (DOT); }
{LTEQ}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(46))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(46))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(46)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(46)); if ((!local_store && true) || (!local_store && include_deleted)) return (LTEQ); }
{GTEQ}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(47))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(47))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(47)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(47)); if ((!local_store && true) || (!local_store && include_deleted)) return (GTEQ); }
{LT}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(48))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(48))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(48)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(48)); if ((!local_store && true) || (!local_store && include_deleted)) return (LT); }
{GT}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(49))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(49))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(49)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(49)); if ((!local_store && true) || (!local_store && include_deleted)) return (GT); }
{PLUSEQ}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(50))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(50))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(50)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(50)); if ((!local_store && true) || (!local_store && include_deleted)) return (PLUSEQ); }
{MINUSEQ}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(51))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(51))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(51)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(51)); if ((!local_store && true) || (!local_store && include_deleted)) return (MINUSEQ); }
{MULTIPLYEQ}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(52))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(52))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(52)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(52)); if ((!local_store && true) || (!local_store && include_deleted)) return (MULTIPLYEQ); }
{DIVIDEEQ}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(53))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(53))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(53)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(53)); if ((!local_store && true) || (!local_store && include_deleted)) return (DIVIDEEQ); }
{EQEQ}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(54))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(54))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(54)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(54)); if ((!local_store && true) || (!local_store && include_deleted)) return (EQEQ); }
{EQ}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(55))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(55))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(55)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(55)); if ((!local_store && true) || (!local_store && include_deleted)) return (EQ); }
{NOTEQ}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(56))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(56))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(56)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(56)); if ((!local_store && true) || (!local_store && include_deleted)) return (NOTEQ); }
{NOT}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(57))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(57))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(57)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(57)); if ((!local_store && true) || (!local_store && include_deleted)) return (NOT); }
{PLUSPLUS}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(58))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(58))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(58)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(58)); if ((!local_store && true) || (!local_store && include_deleted)) return (PLUSPLUS); }
{PLUS}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(59))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(59))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(59)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(59)); if ((!local_store && true) || (!local_store && include_deleted)) return (PLUS); }
{MINUSMINUS}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(60))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(60))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(60)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(60)); if ((!local_store && true) || (!local_store && include_deleted)) return (MINUSMINUS); }
{MINUS}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(61))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(61))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(61)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(61)); if ((!local_store && true) || (!local_store && include_deleted)) return (MINUS); }
{DIVIDE}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(62))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(62))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(62)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(62)); if ((!local_store && true) || (!local_store && include_deleted)) return (DIVIDE); }
{MULTIPLY}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(63))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(63))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(63)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(63)); if ((!local_store && true) || (!local_store && include_deleted)) return (MULTIPLY); }
{VARNAME}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(64))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(64))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(64)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(64)); if ((!local_store && true) || (!local_store && include_deleted)) return (VARNAME); }
{NUMBER}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(65))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(65))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(65)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(65)); if ((!local_store && true) || (!local_store && include_deleted)) return (NUMBER); }
{DECIMAL}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(66))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(66))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(66)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(66)); if ((!local_store && true) || (!local_store && include_deleted)) return (DECIMAL); }
{TEXT}	{ handleColumn();  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(67))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(67))); else if (local_store && false); else if (!false || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(67)); else if (true) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(67)); if ((!local_store && true) || (!local_store && include_deleted)) return (TEXT); }
{ESCAPE_CHARS}	{ handleColumn();  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(68))); else if (local_store && false) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(68))); else if (local_store && true); else if (!true || include_deleted) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(68)); else if (false) Celestelval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, Celeste_column, std::size_t(68)); if ((!local_store && false) || (!local_store && include_deleted)) return (ESCAPE_CHARS); }

{DEAMER_RESERVED_UNRECOGNIZED_RULE_MATCH} { if (local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, Celeste_column, std::size_t(0))); }

%%

static void store(const deamer::external::cpp::lexer::TerminalObject* const newObject)
{
	local_objects.push_back(newObject);
}

static void clear()
{
	local_objects.clear();
}

static void handleColumn()
{
	const std::string text = yytext;
	Celeste_column = next_column;

	for (auto character : text)
	{
		next_column++;
		if (character == '\n')
		{
			next_column = 1;
		}
	}
}

static std::size_t min(std::size_t a, std::size_t b) {
    if (b < a)
	{
		return b;
	}
	else
	{
		return a;
	}
}

std::vector<const ::deamer::external::cpp::lexer::TerminalObject*> Celeste::flex::lexer::Lexer::Tokenize(const std::string& text, ::deamer::external::cpp::lexer::TerminalConstructionPolicy constructionPolicy) const
{
	if (constructionPolicy == ::deamer::external::cpp::lexer::TerminalConstructionPolicy::include_deleted_terminals)
	{
		include_deleted = true;
	}
	else
	{
		include_deleted = false;
	}

	local_store = true;
	Celeste_column = 0;

	YY_BUFFER_STATE buf;
	buf = yy_scan_string(text.c_str());
	yylex();
	yy_delete_buffer(buf);
	yylex_destroy();

	local_store = false;
	include_deleted = false;

	auto local_objects_copy = local_objects;
	clear();

	return local_objects_copy;
}