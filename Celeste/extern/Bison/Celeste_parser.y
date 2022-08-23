%define parse.error verbose

%glr-parser

%{
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <stdio.h>
#include <Deamer/External/Cpp/Lexer/TerminalObject.h>
#include <Deamer/External/Cpp/Ast/Node.h>
#include "Celeste/Bison/Parser.h"
#define YY_NO_UNISTD_H
#include "Flex/Celeste_lexer.h"
#undef YY_NO_UNISTD_H
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


#ifndef YY_parse_NERRS
#define YY_parse_NERRS Celestenerrs
#endif //YY_parse_NERRS
#ifndef YY_parse_LLOC
#define YY_parse_LLOC Celestelloc
#endif //YY_parse_LLOC
#define YYERROR_VERBOSE 1

#define YYDEBUG 1

void Celesteerror(const char* s);
int Celestelex();
static ::deamer::external::cpp::ast::Tree* outputTree = nullptr;

extern int Celestelineno;
extern int Celeste_column;

static const std::string* Celeste_input_text = nullptr;
%}

%token<Terminal> SINGLE_COMMENT
%token<Terminal> CONSTANT
%token<Terminal> FUNCTION
%token<Terminal> CLASS
%token<Terminal> ENUM
%token<Terminal> CONDITIONAL
%token<Terminal> CODE
%token<Terminal> RUNTIME
%token<Terminal> STATIC
%token<Terminal> AUTO
%token<Terminal> AUTOTYPE
%token<Terminal> TEMPLATE
%token<Terminal> NAMESPACE
%token<Terminal> OVERRIDE
%token<Terminal> VIRTUAL
%token<Terminal> PURE
%token<Terminal> AS
%token<Terminal> IN
%token<Terminal> DISPLAY
%token<Terminal> RETURN
%token<Terminal> FOR
%token<Terminal> IF
%token<Terminal> ELSEIF
%token<Terminal> ELSE
%token<Terminal> INLINE
%token<Terminal> CONSTRUCTOR
%token<Terminal> FILE_
%token<Terminal> PROGRAM_
%token<Terminal> IMPORT
%token<Terminal> PUBLIC
%token<Terminal> PROTECTED
%token<Terminal> PRIVATE
%token<Terminal> INHERIT
%token<Terminal> COMPOSITE
%token<Terminal> LEFT_BRACKET
%token<Terminal> RIGHT_BRACKET
%token<Terminal> LEFT_SQUARE_BRACKET
%token<Terminal> RIGHT_SQUARE_BRACKET
%token<Terminal> LEFT_PARANTHESIS
%token<Terminal> RIGHT_PARANTHESIS
%token<Terminal> COLON
%token<Terminal> SEMICOLON
%token<Terminal> COMMA
%token<Terminal> DOT
%token<Terminal> LTEQ
%token<Terminal> GTEQ
%token<Terminal> LT
%token<Terminal> GT
%token<Terminal> PLUSEQ
%token<Terminal> MINUSEQ
%token<Terminal> MULTIPLYEQ
%token<Terminal> DIVIDEEQ
%token<Terminal> EQEQ
%token<Terminal> EQ
%token<Terminal> NOTEQ
%token<Terminal> NOT
%token<Terminal> PLUSPLUS
%token<Terminal> PLUS
%token<Terminal> MINUSMINUS
%token<Terminal> MINUS
%token<Terminal> DIVIDE
%token<Terminal> MULTIPLY
%token<Terminal> VARNAME
%token<Terminal> NUMBER
%token<Terminal> DECIMAL
%token<Terminal> TEXT
%token<Terminal> ESCAPE_CHARS


%nterm<Celeste_program> program
%nterm<Celeste_root_program> root_program
%nterm<Celeste_standard_block> standard_block
%nterm<Celeste_deamerreserved_star__stmt__> deamerreserved_star__stmt__
%nterm<Celeste_stmt> stmt
%nterm<Celeste_import_statement> import_statement
%nterm<Celeste_file_import> file_import
%nterm<Celeste_mutation_group> mutation_group
%nterm<Celeste_deamerreserved_arrow__symbol_reference__> deamerreserved_arrow__symbol_reference__
%nterm<Celeste_deamerreserved_star__COMMA__symbol_reference__> deamerreserved_star__COMMA__symbol_reference__
%nterm<Celeste_assignment> assignment
%nterm<Celeste_assignment_operator> assignment_operator
%nterm<Celeste_conditional_if> conditional_if
%nterm<Celeste_conditional_else_if> conditional_else_if
%nterm<Celeste_conditional_else> conditional_else
%nterm<Celeste_conditional_block> conditional_block
%nterm<Celeste_template_conditional_function_declaration> template_conditional_function_declaration
%nterm<Celeste_deamerreserved_arrow__template_parameter__> deamerreserved_arrow__template_parameter__
%nterm<Celeste_deamerreserved_star__COMMA__template_parameter__> deamerreserved_star__COMMA__template_parameter__
%nterm<Celeste_deamerreserved_arrow__conditional_function_argument__> deamerreserved_arrow__conditional_function_argument__
%nterm<Celeste_deamerreserved_star__COMMA__conditional_function_argument__> deamerreserved_star__COMMA__conditional_function_argument__
%nterm<Celeste_deamerreserved_arrow__function_argument__> deamerreserved_arrow__function_argument__
%nterm<Celeste_deamerreserved_star__COMMA__function_argument__> deamerreserved_star__COMMA__function_argument__
%nterm<Celeste_conditional_function_declaration> conditional_function_declaration
%nterm<Celeste_template_code_function_declaration> template_code_function_declaration
%nterm<Celeste_code_function_declaration> code_function_declaration
%nterm<Celeste_return_statement> return_statement
%nterm<Celeste_symbol_increase> symbol_increase
%nterm<Celeste_symbol_decrease> symbol_decrease
%nterm<Celeste_expression> expression
%nterm<Celeste_expression_no_value> expression_no_value
%nterm<Celeste_t_expression> t_expression
%nterm<Celeste_f_expression> f_expression
%nterm<Celeste_display_call> display_call
%nterm<Celeste_for_loop> for_loop
%nterm<Celeste_for_iteration_loop> for_iteration_loop
%nterm<Celeste_for_each_loop> for_each_loop
%nterm<Celeste_for_variable> for_variable
%nterm<Celeste_iterator> iterator
%nterm<Celeste_for_block> for_block
%nterm<Celeste_namespace_declaration> namespace_declaration
%nterm<Celeste_deamerreserved_arrow__namespace_name__> deamerreserved_arrow__namespace_name__
%nterm<Celeste_deamerreserved_star__DOT__namespace_name__> deamerreserved_star__DOT__namespace_name__
%nterm<Celeste_namespace_block> namespace_block
%nterm<Celeste_namespace_name> namespace_name
%nterm<Celeste_inline_class_declaration> inline_class_declaration
%nterm<Celeste_deamerreserved_arrow__inline_class_declaration_composite__> deamerreserved_arrow__inline_class_declaration_composite__
%nterm<Celeste_deamerreserved_star__COMMA__inline_class_declaration_composite__> deamerreserved_star__COMMA__inline_class_declaration_composite__
%nterm<Celeste_inline_class_declaration_composite> inline_class_declaration_composite
%nterm<Celeste_deamerreserved_arrow__inline_class_declaration_composite_alias__> deamerreserved_arrow__inline_class_declaration_composite_alias__
%nterm<Celeste_deamerreserved_star__COMMA__inline_class_declaration_composite_alias__> deamerreserved_star__COMMA__inline_class_declaration_composite_alias__
%nterm<Celeste_inline_class_declaration_composite_alias> inline_class_declaration_composite_alias
%nterm<Celeste_inline_class_declaration_composite_name> inline_class_declaration_composite_name
%nterm<Celeste_created_class_name> created_class_name
%nterm<Celeste_code_block> code_block
%nterm<Celeste_deamerreserved_arrow__code_block_input_argument__> deamerreserved_arrow__code_block_input_argument__
%nterm<Celeste_deamerreserved_star__COMMA__code_block_input_argument__> deamerreserved_star__COMMA__code_block_input_argument__
%nterm<Celeste_code_block_input_argument> code_block_input_argument
%nterm<Celeste_code_block_argument> code_block_argument
%nterm<Celeste_code_block_argument_name> code_block_argument_name
%nterm<Celeste_code_block_program> code_block_program
%nterm<Celeste_variable_declaration> variable_declaration
%nterm<Celeste_array_declaration> array_declaration
%nterm<Celeste_variable_name> variable_name
%nterm<Celeste_template_function_declaration> template_function_declaration
%nterm<Celeste_function_declaration> function_declaration
%nterm<Celeste_trailing_return_type> trailing_return_type
%nterm<Celeste_return_type> return_type
%nterm<Celeste_conditional_function_argument> conditional_function_argument
%nterm<Celeste_function_argument> function_argument
%nterm<Celeste_function_argument_type> function_argument_type
%nterm<Celeste_function_argument_name> function_argument_name
%nterm<Celeste_condition_modifier_function_call> condition_modifier_function_call
%nterm<Celeste_deamerreserved_arrow__condition_modifier_argument__> deamerreserved_arrow__condition_modifier_argument__
%nterm<Celeste_deamerreserved_star__COMMA__condition_modifier_argument__> deamerreserved_star__COMMA__condition_modifier_argument__
%nterm<Celeste_condition_modifier_name> condition_modifier_name
%nterm<Celeste_condition_modifier_argument> condition_modifier_argument
%nterm<Celeste_function_body> function_body
%nterm<Celeste_function_name> function_name
%nterm<Celeste_template_class_declaration> template_class_declaration
%nterm<Celeste_template_parameter> template_parameter
%nterm<Celeste_template_parameter_name> template_parameter_name
%nterm<Celeste_class_declaration> class_declaration
%nterm<Celeste_deamerreserved_arrow__class_inherit_base__> deamerreserved_arrow__class_inherit_base__
%nterm<Celeste_deamerreserved_star__COMMA__class_inherit_base__> deamerreserved_star__COMMA__class_inherit_base__
%nterm<Celeste_class_name> class_name
%nterm<Celeste_execution_keyword_permutation> execution_keyword_permutation
%nterm<Celeste_class_body> class_body
%nterm<Celeste_deamerreserved_star__class_stmt__> deamerreserved_star__class_stmt__
%nterm<Celeste_class_stmt> class_stmt
%nterm<Celeste_class_stmt_member_field_declaration> class_stmt_member_field_declaration
%nterm<Celeste_member_field_name> member_field_name
%nterm<Celeste_class_stmt_member_function> class_stmt_member_function
%nterm<Celeste_class_stmt_member_template_function> class_stmt_member_template_function
%nterm<Celeste_template_class_stmt_constructor> template_class_stmt_constructor
%nterm<Celeste_class_stmt_constructor> class_stmt_constructor
%nterm<Celeste_accessibility> accessibility
%nterm<Celeste_class_inherit_base> class_inherit_base
%nterm<Celeste_inherit_base> inherit_base
%nterm<Celeste_inherit_base_name> inherit_base_name
%nterm<Celeste_compound_base> compound_base
%nterm<Celeste_deamerreserved_arrow__compound_base_alias__> deamerreserved_arrow__compound_base_alias__
%nterm<Celeste_deamerreserved_star__COMMA__compound_base_alias__> deamerreserved_star__COMMA__compound_base_alias__
%nterm<Celeste_compound_base_name> compound_base_name
%nterm<Celeste_compound_base_alias> compound_base_alias
%nterm<Celeste_enum_declaration> enum_declaration
%nterm<Celeste_deamerreserved_star__enumeration__> deamerreserved_star__enumeration__
%nterm<Celeste_enum_name> enum_name
%nterm<Celeste_enumeration> enumeration
%nterm<Celeste_enumeration_name> enumeration_name
%nterm<Celeste_enumeration_value> enumeration_value
%nterm<Celeste_symbol_reference> symbol_reference
%nterm<Celeste_deamerreserved_arrow__symbol__> deamerreserved_arrow__symbol__
%nterm<Celeste_deamerreserved_star__DOT__symbol_secondary__> deamerreserved_star__DOT__symbol_secondary__
%nterm<Celeste_symbol_secondary> symbol_secondary
%nterm<Celeste_deamerreserved_star__symbol_access__> deamerreserved_star__symbol_access__
%nterm<Celeste_symbol> symbol
%nterm<Celeste_symbol_access> symbol_access
%nterm<Celeste_auto_deduce_array> auto_deduce_array
%nterm<Celeste_symbol_name_secondary> symbol_name_secondary
%nterm<Celeste_symbol_name> symbol_name
%nterm<Celeste_function_access> function_access
%nterm<Celeste_deamerreserved_arrow__expression__> deamerreserved_arrow__expression__
%nterm<Celeste_deamerreserved_star__COMMA__expression__> deamerreserved_star__COMMA__expression__
%nterm<Celeste_index_access> index_access
%nterm<Celeste_anonymous_access> anonymous_access
%nterm<Celeste_type> type
%nterm<Celeste_deamerreserved_star__type_modifier__> deamerreserved_star__type_modifier__
%nterm<Celeste_type_modifier> type_modifier
%nterm<Celeste_value_list> value_list
%nterm<Celeste_deamerreserved_arrow__full_value__> deamerreserved_arrow__full_value__
%nterm<Celeste_deamerreserved_star__COMMA__full_value__> deamerreserved_star__COMMA__full_value__
%nterm<Celeste_full_value> full_value
%nterm<Celeste_value> value
%nterm<Celeste_tuple> tuple


%union{
	::deamer::external::cpp::lexer::TerminalObject* Terminal;
	::Celeste::ast::node::SINGLE_COMMENT* Celeste_SINGLE_COMMENT;
	::Celeste::ast::node::CONSTANT* Celeste_CONSTANT;
	::Celeste::ast::node::FUNCTION* Celeste_FUNCTION;
	::Celeste::ast::node::CLASS* Celeste_CLASS;
	::Celeste::ast::node::ENUM* Celeste_ENUM;
	::Celeste::ast::node::CONDITIONAL* Celeste_CONDITIONAL;
	::Celeste::ast::node::CODE* Celeste_CODE;
	::Celeste::ast::node::RUNTIME* Celeste_RUNTIME;
	::Celeste::ast::node::STATIC* Celeste_STATIC;
	::Celeste::ast::node::AUTO* Celeste_AUTO;
	::Celeste::ast::node::AUTOTYPE* Celeste_AUTOTYPE;
	::Celeste::ast::node::TEMPLATE* Celeste_TEMPLATE;
	::Celeste::ast::node::NAMESPACE* Celeste_NAMESPACE;
	::Celeste::ast::node::OVERRIDE* Celeste_OVERRIDE;
	::Celeste::ast::node::VIRTUAL* Celeste_VIRTUAL;
	::Celeste::ast::node::PURE* Celeste_PURE;
	::Celeste::ast::node::AS* Celeste_AS;
	::Celeste::ast::node::IN* Celeste_IN;
	::Celeste::ast::node::DISPLAY* Celeste_DISPLAY;
	::Celeste::ast::node::RETURN* Celeste_RETURN;
	::Celeste::ast::node::FOR* Celeste_FOR;
	::Celeste::ast::node::IF* Celeste_IF;
	::Celeste::ast::node::ELSEIF* Celeste_ELSEIF;
	::Celeste::ast::node::ELSE* Celeste_ELSE;
	::Celeste::ast::node::INLINE* Celeste_INLINE;
	::Celeste::ast::node::CONSTRUCTOR* Celeste_CONSTRUCTOR;
	::Celeste::ast::node::FILE_* Celeste_FILE_;
	::Celeste::ast::node::PROGRAM_* Celeste_PROGRAM_;
	::Celeste::ast::node::IMPORT* Celeste_IMPORT;
	::Celeste::ast::node::PUBLIC* Celeste_PUBLIC;
	::Celeste::ast::node::PROTECTED* Celeste_PROTECTED;
	::Celeste::ast::node::PRIVATE* Celeste_PRIVATE;
	::Celeste::ast::node::INHERIT* Celeste_INHERIT;
	::Celeste::ast::node::COMPOSITE* Celeste_COMPOSITE;
	::Celeste::ast::node::LEFT_BRACKET* Celeste_LEFT_BRACKET;
	::Celeste::ast::node::RIGHT_BRACKET* Celeste_RIGHT_BRACKET;
	::Celeste::ast::node::LEFT_SQUARE_BRACKET* Celeste_LEFT_SQUARE_BRACKET;
	::Celeste::ast::node::RIGHT_SQUARE_BRACKET* Celeste_RIGHT_SQUARE_BRACKET;
	::Celeste::ast::node::LEFT_PARANTHESIS* Celeste_LEFT_PARANTHESIS;
	::Celeste::ast::node::RIGHT_PARANTHESIS* Celeste_RIGHT_PARANTHESIS;
	::Celeste::ast::node::COLON* Celeste_COLON;
	::Celeste::ast::node::SEMICOLON* Celeste_SEMICOLON;
	::Celeste::ast::node::COMMA* Celeste_COMMA;
	::Celeste::ast::node::DOT* Celeste_DOT;
	::Celeste::ast::node::LTEQ* Celeste_LTEQ;
	::Celeste::ast::node::GTEQ* Celeste_GTEQ;
	::Celeste::ast::node::LT* Celeste_LT;
	::Celeste::ast::node::GT* Celeste_GT;
	::Celeste::ast::node::PLUSEQ* Celeste_PLUSEQ;
	::Celeste::ast::node::MINUSEQ* Celeste_MINUSEQ;
	::Celeste::ast::node::MULTIPLYEQ* Celeste_MULTIPLYEQ;
	::Celeste::ast::node::DIVIDEEQ* Celeste_DIVIDEEQ;
	::Celeste::ast::node::EQEQ* Celeste_EQEQ;
	::Celeste::ast::node::EQ* Celeste_EQ;
	::Celeste::ast::node::NOTEQ* Celeste_NOTEQ;
	::Celeste::ast::node::NOT* Celeste_NOT;
	::Celeste::ast::node::PLUSPLUS* Celeste_PLUSPLUS;
	::Celeste::ast::node::PLUS* Celeste_PLUS;
	::Celeste::ast::node::MINUSMINUS* Celeste_MINUSMINUS;
	::Celeste::ast::node::MINUS* Celeste_MINUS;
	::Celeste::ast::node::DIVIDE* Celeste_DIVIDE;
	::Celeste::ast::node::MULTIPLY* Celeste_MULTIPLY;
	::Celeste::ast::node::VARNAME* Celeste_VARNAME;
	::Celeste::ast::node::NUMBER* Celeste_NUMBER;
	::Celeste::ast::node::DECIMAL* Celeste_DECIMAL;
	::Celeste::ast::node::TEXT* Celeste_TEXT;
	::Celeste::ast::node::ESCAPE_CHARS* Celeste_ESCAPE_CHARS;
	::Celeste::ast::node::program* Celeste_program;
	::Celeste::ast::node::root_program* Celeste_root_program;
	::Celeste::ast::node::standard_block* Celeste_standard_block;
	::Celeste::ast::node::deamerreserved_star__stmt__* Celeste_deamerreserved_star__stmt__;
	::Celeste::ast::node::stmt* Celeste_stmt;
	::Celeste::ast::node::import_statement* Celeste_import_statement;
	::Celeste::ast::node::file_import* Celeste_file_import;
	::Celeste::ast::node::mutation_group* Celeste_mutation_group;
	::Celeste::ast::node::deamerreserved_arrow__symbol_reference__* Celeste_deamerreserved_arrow__symbol_reference__;
	::Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__* Celeste_deamerreserved_star__COMMA__symbol_reference__;
	::Celeste::ast::node::assignment* Celeste_assignment;
	::Celeste::ast::node::assignment_operator* Celeste_assignment_operator;
	::Celeste::ast::node::conditional_if* Celeste_conditional_if;
	::Celeste::ast::node::conditional_else_if* Celeste_conditional_else_if;
	::Celeste::ast::node::conditional_else* Celeste_conditional_else;
	::Celeste::ast::node::conditional_block* Celeste_conditional_block;
	::Celeste::ast::node::template_conditional_function_declaration* Celeste_template_conditional_function_declaration;
	::Celeste::ast::node::deamerreserved_arrow__template_parameter__* Celeste_deamerreserved_arrow__template_parameter__;
	::Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__* Celeste_deamerreserved_star__COMMA__template_parameter__;
	::Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__* Celeste_deamerreserved_arrow__conditional_function_argument__;
	::Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__* Celeste_deamerreserved_star__COMMA__conditional_function_argument__;
	::Celeste::ast::node::deamerreserved_arrow__function_argument__* Celeste_deamerreserved_arrow__function_argument__;
	::Celeste::ast::node::deamerreserved_star__COMMA__function_argument__* Celeste_deamerreserved_star__COMMA__function_argument__;
	::Celeste::ast::node::conditional_function_declaration* Celeste_conditional_function_declaration;
	::Celeste::ast::node::template_code_function_declaration* Celeste_template_code_function_declaration;
	::Celeste::ast::node::code_function_declaration* Celeste_code_function_declaration;
	::Celeste::ast::node::return_statement* Celeste_return_statement;
	::Celeste::ast::node::symbol_increase* Celeste_symbol_increase;
	::Celeste::ast::node::symbol_decrease* Celeste_symbol_decrease;
	::Celeste::ast::node::expression* Celeste_expression;
	::Celeste::ast::node::expression_no_value* Celeste_expression_no_value;
	::Celeste::ast::node::t_expression* Celeste_t_expression;
	::Celeste::ast::node::f_expression* Celeste_f_expression;
	::Celeste::ast::node::display_call* Celeste_display_call;
	::Celeste::ast::node::for_loop* Celeste_for_loop;
	::Celeste::ast::node::for_iteration_loop* Celeste_for_iteration_loop;
	::Celeste::ast::node::for_each_loop* Celeste_for_each_loop;
	::Celeste::ast::node::for_variable* Celeste_for_variable;
	::Celeste::ast::node::iterator* Celeste_iterator;
	::Celeste::ast::node::for_block* Celeste_for_block;
	::Celeste::ast::node::namespace_declaration* Celeste_namespace_declaration;
	::Celeste::ast::node::deamerreserved_arrow__namespace_name__* Celeste_deamerreserved_arrow__namespace_name__;
	::Celeste::ast::node::deamerreserved_star__DOT__namespace_name__* Celeste_deamerreserved_star__DOT__namespace_name__;
	::Celeste::ast::node::namespace_block* Celeste_namespace_block;
	::Celeste::ast::node::namespace_name* Celeste_namespace_name;
	::Celeste::ast::node::inline_class_declaration* Celeste_inline_class_declaration;
	::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__* Celeste_deamerreserved_arrow__inline_class_declaration_composite__;
	::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__* Celeste_deamerreserved_star__COMMA__inline_class_declaration_composite__;
	::Celeste::ast::node::inline_class_declaration_composite* Celeste_inline_class_declaration_composite;
	::Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__* Celeste_deamerreserved_arrow__inline_class_declaration_composite_alias__;
	::Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__* Celeste_deamerreserved_star__COMMA__inline_class_declaration_composite_alias__;
	::Celeste::ast::node::inline_class_declaration_composite_alias* Celeste_inline_class_declaration_composite_alias;
	::Celeste::ast::node::inline_class_declaration_composite_name* Celeste_inline_class_declaration_composite_name;
	::Celeste::ast::node::created_class_name* Celeste_created_class_name;
	::Celeste::ast::node::code_block* Celeste_code_block;
	::Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__* Celeste_deamerreserved_arrow__code_block_input_argument__;
	::Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__* Celeste_deamerreserved_star__COMMA__code_block_input_argument__;
	::Celeste::ast::node::code_block_input_argument* Celeste_code_block_input_argument;
	::Celeste::ast::node::code_block_argument* Celeste_code_block_argument;
	::Celeste::ast::node::code_block_argument_name* Celeste_code_block_argument_name;
	::Celeste::ast::node::code_block_program* Celeste_code_block_program;
	::Celeste::ast::node::variable_declaration* Celeste_variable_declaration;
	::Celeste::ast::node::array_declaration* Celeste_array_declaration;
	::Celeste::ast::node::variable_name* Celeste_variable_name;
	::Celeste::ast::node::template_function_declaration* Celeste_template_function_declaration;
	::Celeste::ast::node::function_declaration* Celeste_function_declaration;
	::Celeste::ast::node::trailing_return_type* Celeste_trailing_return_type;
	::Celeste::ast::node::return_type* Celeste_return_type;
	::Celeste::ast::node::conditional_function_argument* Celeste_conditional_function_argument;
	::Celeste::ast::node::function_argument* Celeste_function_argument;
	::Celeste::ast::node::function_argument_type* Celeste_function_argument_type;
	::Celeste::ast::node::function_argument_name* Celeste_function_argument_name;
	::Celeste::ast::node::condition_modifier_function_call* Celeste_condition_modifier_function_call;
	::Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__* Celeste_deamerreserved_arrow__condition_modifier_argument__;
	::Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__* Celeste_deamerreserved_star__COMMA__condition_modifier_argument__;
	::Celeste::ast::node::condition_modifier_name* Celeste_condition_modifier_name;
	::Celeste::ast::node::condition_modifier_argument* Celeste_condition_modifier_argument;
	::Celeste::ast::node::function_body* Celeste_function_body;
	::Celeste::ast::node::function_name* Celeste_function_name;
	::Celeste::ast::node::template_class_declaration* Celeste_template_class_declaration;
	::Celeste::ast::node::template_parameter* Celeste_template_parameter;
	::Celeste::ast::node::template_parameter_name* Celeste_template_parameter_name;
	::Celeste::ast::node::class_declaration* Celeste_class_declaration;
	::Celeste::ast::node::deamerreserved_arrow__class_inherit_base__* Celeste_deamerreserved_arrow__class_inherit_base__;
	::Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__* Celeste_deamerreserved_star__COMMA__class_inherit_base__;
	::Celeste::ast::node::class_name* Celeste_class_name;
	::Celeste::ast::node::execution_keyword_permutation* Celeste_execution_keyword_permutation;
	::Celeste::ast::node::class_body* Celeste_class_body;
	::Celeste::ast::node::deamerreserved_star__class_stmt__* Celeste_deamerreserved_star__class_stmt__;
	::Celeste::ast::node::class_stmt* Celeste_class_stmt;
	::Celeste::ast::node::class_stmt_member_field_declaration* Celeste_class_stmt_member_field_declaration;
	::Celeste::ast::node::member_field_name* Celeste_member_field_name;
	::Celeste::ast::node::class_stmt_member_function* Celeste_class_stmt_member_function;
	::Celeste::ast::node::class_stmt_member_template_function* Celeste_class_stmt_member_template_function;
	::Celeste::ast::node::template_class_stmt_constructor* Celeste_template_class_stmt_constructor;
	::Celeste::ast::node::class_stmt_constructor* Celeste_class_stmt_constructor;
	::Celeste::ast::node::accessibility* Celeste_accessibility;
	::Celeste::ast::node::class_inherit_base* Celeste_class_inherit_base;
	::Celeste::ast::node::inherit_base* Celeste_inherit_base;
	::Celeste::ast::node::inherit_base_name* Celeste_inherit_base_name;
	::Celeste::ast::node::compound_base* Celeste_compound_base;
	::Celeste::ast::node::deamerreserved_arrow__compound_base_alias__* Celeste_deamerreserved_arrow__compound_base_alias__;
	::Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__* Celeste_deamerreserved_star__COMMA__compound_base_alias__;
	::Celeste::ast::node::compound_base_name* Celeste_compound_base_name;
	::Celeste::ast::node::compound_base_alias* Celeste_compound_base_alias;
	::Celeste::ast::node::enum_declaration* Celeste_enum_declaration;
	::Celeste::ast::node::deamerreserved_star__enumeration__* Celeste_deamerreserved_star__enumeration__;
	::Celeste::ast::node::enum_name* Celeste_enum_name;
	::Celeste::ast::node::enumeration* Celeste_enumeration;
	::Celeste::ast::node::enumeration_name* Celeste_enumeration_name;
	::Celeste::ast::node::enumeration_value* Celeste_enumeration_value;
	::Celeste::ast::node::symbol_reference* Celeste_symbol_reference;
	::Celeste::ast::node::deamerreserved_arrow__symbol__* Celeste_deamerreserved_arrow__symbol__;
	::Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__* Celeste_deamerreserved_star__DOT__symbol_secondary__;
	::Celeste::ast::node::symbol_secondary* Celeste_symbol_secondary;
	::Celeste::ast::node::deamerreserved_star__symbol_access__* Celeste_deamerreserved_star__symbol_access__;
	::Celeste::ast::node::symbol* Celeste_symbol;
	::Celeste::ast::node::symbol_access* Celeste_symbol_access;
	::Celeste::ast::node::auto_deduce_array* Celeste_auto_deduce_array;
	::Celeste::ast::node::symbol_name_secondary* Celeste_symbol_name_secondary;
	::Celeste::ast::node::symbol_name* Celeste_symbol_name;
	::Celeste::ast::node::function_access* Celeste_function_access;
	::Celeste::ast::node::deamerreserved_arrow__expression__* Celeste_deamerreserved_arrow__expression__;
	::Celeste::ast::node::deamerreserved_star__COMMA__expression__* Celeste_deamerreserved_star__COMMA__expression__;
	::Celeste::ast::node::index_access* Celeste_index_access;
	::Celeste::ast::node::anonymous_access* Celeste_anonymous_access;
	::Celeste::ast::node::type* Celeste_type;
	::Celeste::ast::node::deamerreserved_star__type_modifier__* Celeste_deamerreserved_star__type_modifier__;
	::Celeste::ast::node::type_modifier* Celeste_type_modifier;
	::Celeste::ast::node::value_list* Celeste_value_list;
	::Celeste::ast::node::deamerreserved_arrow__full_value__* Celeste_deamerreserved_arrow__full_value__;
	::Celeste::ast::node::deamerreserved_star__COMMA__full_value__* Celeste_deamerreserved_star__COMMA__full_value__;
	::Celeste::ast::node::full_value* Celeste_full_value;
	::Celeste::ast::node::value* Celeste_value;
	::Celeste::ast::node::tuple* Celeste_tuple;

}

%%


program:
	root_program  {
		auto* const newNode = new Celeste::ast::node::program({::Celeste::ast::Type::program, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		outputTree = new ::deamer::external::cpp::ast::Tree(newNode);
	}
;


root_program:
	standard_block  {
		auto* const newNode = new Celeste::ast::node::root_program({::Celeste::ast::Type::root_program, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


standard_block:
	deamerreserved_star__stmt__  {
		auto* const newNode = new Celeste::ast::node::standard_block({::Celeste::ast::Type::standard_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__stmt__:
	stmt deamerreserved_star__stmt__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__stmt__({::Celeste::ast::Type::deamerreserved_star__stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__stmt__({::Celeste::ast::Type::deamerreserved_star__stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


stmt:
	template_function_declaration  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| template_class_declaration  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| function_declaration  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| class_declaration  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| enum_declaration  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| variable_declaration  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| inline_class_declaration  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 6, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| namespace_declaration  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 7, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| symbol_reference SEMICOLON  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 8, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
	}
	| for_loop  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 9, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| display_call  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 10, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| symbol_increase  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 11, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| symbol_decrease  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 12, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| return_statement  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 13, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| template_code_function_declaration  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 14, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| code_function_declaration  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 15, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| template_conditional_function_declaration  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 16, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| conditional_function_declaration  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 17, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| conditional_if  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 18, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| conditional_else_if  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 19, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| conditional_else  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 20, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| assignment  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 21, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| mutation_group  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 22, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| import_statement  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 23, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| SEMICOLON  {
		auto* const newNode = new Celeste::ast::node::stmt({::Celeste::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 24, ::deamer::external::cpp::ast::ProductionRuleType::user }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
	}
;


import_statement:
	file_import  {
		auto* const newNode = new Celeste::ast::node::import_statement({::Celeste::ast::Type::import_statement, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


file_import:
	IMPORT FILE_ TEXT  {
		auto* const newNode = new Celeste::ast::node::file_import({::Celeste::ast::Type::file_import, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::IMPORT({::Celeste::ast::Type::IMPORT, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), new Celeste::ast::node::FILE_({::Celeste::ast::Type::FILE_, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), new Celeste::ast::node::TEXT({::Celeste::ast::Type::TEXT, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


mutation_group:
	LEFT_PARANTHESIS deamerreserved_arrow__symbol_reference__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET LEFT_SQUARE_BRACKET standard_block RIGHT_SQUARE_BRACKET RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::mutation_group({::Celeste::ast::Type::mutation_group, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $2, $7 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $3;
		delete $4;
		delete $5;
		delete $6;
		delete $8;
		delete $9;
	}
	| LEFT_PARANTHESIS deamerreserved_arrow__symbol_reference__ RIGHT_PARANTHESIS LEFT_BRACKET LEFT_SQUARE_BRACKET standard_block RIGHT_SQUARE_BRACKET RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::mutation_group({::Celeste::ast::Type::mutation_group, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $2, $6 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $3;
		delete $4;
		delete $5;
		delete $7;
		delete $8;
	}
	| LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET LEFT_SQUARE_BRACKET standard_block RIGHT_SQUARE_BRACKET RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::mutation_group({::Celeste::ast::Type::mutation_group, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $6 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $2;
		delete $3;
		delete $4;
		delete $5;
		delete $7;
		delete $8;
	}
	| LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET LEFT_SQUARE_BRACKET standard_block RIGHT_SQUARE_BRACKET RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::mutation_group({::Celeste::ast::Type::mutation_group, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $5 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $2;
		delete $3;
		delete $4;
		delete $6;
		delete $7;
	}
	| LEFT_BRACKET LEFT_SQUARE_BRACKET standard_block RIGHT_SQUARE_BRACKET RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::mutation_group({::Celeste::ast::Type::mutation_group, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $2;
		delete $4;
		delete $5;
	}
;


deamerreserved_arrow__symbol_reference__:
	symbol_reference deamerreserved_star__COMMA__symbol_reference__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__symbol_reference__({::Celeste::ast::Type::deamerreserved_arrow__symbol_reference__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__COMMA__symbol_reference__:
	COMMA symbol_reference deamerreserved_star__COMMA__symbol_reference__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__({::Celeste::ast::Type::deamerreserved_star__COMMA__symbol_reference__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $2, $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__symbol_reference__({::Celeste::ast::Type::deamerreserved_star__COMMA__symbol_reference__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


assignment:
	symbol_reference assignment_operator expression  {
		auto* const newNode = new Celeste::ast::node::assignment({::Celeste::ast::Type::assignment, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $2, $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


assignment_operator:
	PLUSEQ  {
		auto* const newNode = new Celeste::ast::node::assignment_operator({::Celeste::ast::Type::assignment_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::PLUSEQ({::Celeste::ast::Type::PLUSEQ, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| MINUSEQ  {
		auto* const newNode = new Celeste::ast::node::assignment_operator({::Celeste::ast::Type::assignment_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::MINUSEQ({::Celeste::ast::Type::MINUSEQ, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| MULTIPLYEQ  {
		auto* const newNode = new Celeste::ast::node::assignment_operator({::Celeste::ast::Type::assignment_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::MULTIPLYEQ({::Celeste::ast::Type::MULTIPLYEQ, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| DIVIDEEQ  {
		auto* const newNode = new Celeste::ast::node::assignment_operator({::Celeste::ast::Type::assignment_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::DIVIDEEQ({::Celeste::ast::Type::DIVIDEEQ, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| EQ  {
		auto* const newNode = new Celeste::ast::node::assignment_operator({::Celeste::ast::Type::assignment_operator, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


conditional_if:
	IF LEFT_PARANTHESIS expression RIGHT_PARANTHESIS LEFT_BRACKET conditional_block RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::conditional_if({::Celeste::ast::Type::conditional_if, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::IF({::Celeste::ast::Type::IF, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $3, $6 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $4;
		delete $5;
		delete $7;
	}
;


conditional_else_if:
	ELSEIF LEFT_PARANTHESIS expression RIGHT_PARANTHESIS LEFT_BRACKET conditional_block RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::conditional_else_if({::Celeste::ast::Type::conditional_else_if, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::ELSEIF({::Celeste::ast::Type::ELSEIF, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $3, $6 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $4;
		delete $5;
		delete $7;
	}
	| ELSE IF LEFT_PARANTHESIS expression RIGHT_PARANTHESIS LEFT_BRACKET conditional_block RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::conditional_else_if({::Celeste::ast::Type::conditional_else_if, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::ELSE({::Celeste::ast::Type::ELSE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), new Celeste::ast::node::IF({::Celeste::ast::Type::IF, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, $7 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $6;
		delete $8;
	}
;


conditional_else:
	ELSE LEFT_BRACKET conditional_block RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::conditional_else({::Celeste::ast::Type::conditional_else, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::ELSE({::Celeste::ast::Type::ELSE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $4;
	}
;


conditional_block:
	standard_block  {
		auto* const newNode = new Celeste::ast::node::conditional_block({::Celeste::ast::Type::conditional_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


template_conditional_function_declaration:
	execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $8, $11, $13, $17 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $7;
		delete $9;
		delete $10;
		delete $12;
		delete $14;
		delete $15;
		delete $16;
		delete $18;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $8, $11, $13, $16 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $7;
		delete $9;
		delete $10;
		delete $12;
		delete $14;
		delete $15;
		delete $17;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $8, $11, $16 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $7;
		delete $9;
		delete $10;
		delete $12;
		delete $13;
		delete $14;
		delete $15;
		delete $17;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $8, $11, $15 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $7;
		delete $9;
		delete $10;
		delete $12;
		delete $13;
		delete $14;
		delete $16;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $8, $10, $12, $16 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $7;
		delete $9;
		delete $11;
		delete $13;
		delete $14;
		delete $15;
		delete $17;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $8, $10, $12, $15 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $7;
		delete $9;
		delete $11;
		delete $13;
		delete $14;
		delete $16;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 6, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $8, $10, $15 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $7;
		delete $9;
		delete $11;
		delete $12;
		delete $13;
		delete $14;
		delete $16;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 7, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $8, $10, $14 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $7;
		delete $9;
		delete $11;
		delete $12;
		delete $13;
		delete $15;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 8, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $10, $12, $16 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $7;
		delete $8;
		delete $9;
		delete $11;
		delete $13;
		delete $14;
		delete $15;
		delete $17;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 9, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $10, $12, $15 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $7;
		delete $8;
		delete $9;
		delete $11;
		delete $13;
		delete $14;
		delete $16;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 10, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $10, $15 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $7;
		delete $8;
		delete $9;
		delete $11;
		delete $12;
		delete $13;
		delete $14;
		delete $16;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 11, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $10, $14 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $7;
		delete $8;
		delete $9;
		delete $11;
		delete $12;
		delete $13;
		delete $15;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 12, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $9, $11, $15 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $7;
		delete $8;
		delete $10;
		delete $12;
		delete $13;
		delete $14;
		delete $16;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 13, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $9, $11, $14 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $7;
		delete $8;
		delete $10;
		delete $12;
		delete $13;
		delete $15;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 14, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $9, $14 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $7;
		delete $8;
		delete $10;
		delete $11;
		delete $12;
		delete $13;
		delete $15;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 15, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $9, $13 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $7;
		delete $8;
		delete $10;
		delete $11;
		delete $12;
		delete $14;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 16, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $7, $9, $13 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $8;
		delete $10;
		delete $11;
		delete $12;
		delete $14;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 17, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $7, $9, $12 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $8;
		delete $10;
		delete $11;
		delete $13;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 18, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $7, $12 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $8;
		delete $9;
		delete $10;
		delete $11;
		delete $13;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONDITIONAL function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 19, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $7, $11 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $8;
		delete $9;
		delete $10;
		delete $12;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 20, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $7, $10, $12, $16 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $6;
		delete $8;
		delete $9;
		delete $11;
		delete $13;
		delete $14;
		delete $15;
		delete $17;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 21, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $7, $10, $12, $15 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $6;
		delete $8;
		delete $9;
		delete $11;
		delete $13;
		delete $14;
		delete $16;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 22, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $7, $10, $15 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $6;
		delete $8;
		delete $9;
		delete $11;
		delete $12;
		delete $13;
		delete $14;
		delete $16;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 23, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $7, $10, $14 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $6;
		delete $8;
		delete $9;
		delete $11;
		delete $12;
		delete $13;
		delete $15;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 24, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $7, $9, $11, $15 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $6;
		delete $8;
		delete $10;
		delete $12;
		delete $13;
		delete $14;
		delete $16;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 25, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $7, $9, $11, $14 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $6;
		delete $8;
		delete $10;
		delete $12;
		delete $13;
		delete $15;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 26, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $7, $9, $14 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $6;
		delete $8;
		delete $10;
		delete $11;
		delete $12;
		delete $13;
		delete $15;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 27, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $7, $9, $13 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $6;
		delete $8;
		delete $10;
		delete $11;
		delete $12;
		delete $14;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 28, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $9, $11, $15 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $6;
		delete $7;
		delete $8;
		delete $10;
		delete $12;
		delete $13;
		delete $14;
		delete $16;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 29, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $9, $11, $14 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $6;
		delete $7;
		delete $8;
		delete $10;
		delete $12;
		delete $13;
		delete $15;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 30, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $9, $14 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $6;
		delete $7;
		delete $8;
		delete $10;
		delete $11;
		delete $12;
		delete $13;
		delete $15;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 31, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $9, $13 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $6;
		delete $7;
		delete $8;
		delete $10;
		delete $11;
		delete $12;
		delete $14;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 32, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $8, $10, $14 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $6;
		delete $7;
		delete $9;
		delete $11;
		delete $12;
		delete $13;
		delete $15;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 33, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $8, $10, $13 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $6;
		delete $7;
		delete $9;
		delete $11;
		delete $12;
		delete $14;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 34, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $8, $13 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $6;
		delete $7;
		delete $9;
		delete $10;
		delete $11;
		delete $12;
		delete $14;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 35, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $8, $12 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $6;
		delete $7;
		delete $9;
		delete $10;
		delete $11;
		delete $13;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 36, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $6, $8, $12 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $7;
		delete $9;
		delete $10;
		delete $11;
		delete $13;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 37, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $6, $8, $11 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $7;
		delete $9;
		delete $10;
		delete $12;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 38, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $6, $11 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $7;
		delete $8;
		delete $9;
		delete $10;
		delete $12;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONDITIONAL function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_conditional_function_declaration({::Celeste::ast::Type::template_conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 39, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $6, $10 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $7;
		delete $8;
		delete $9;
		delete $11;
	}
;


deamerreserved_arrow__template_parameter__:
	template_parameter deamerreserved_star__COMMA__template_parameter__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__template_parameter__({::Celeste::ast::Type::deamerreserved_arrow__template_parameter__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__COMMA__template_parameter__:
	COMMA template_parameter deamerreserved_star__COMMA__template_parameter__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__({::Celeste::ast::Type::deamerreserved_star__COMMA__template_parameter__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $2, $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__template_parameter__({::Celeste::ast::Type::deamerreserved_star__COMMA__template_parameter__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_arrow__conditional_function_argument__:
	conditional_function_argument deamerreserved_star__COMMA__conditional_function_argument__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__conditional_function_argument__({::Celeste::ast::Type::deamerreserved_arrow__conditional_function_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__COMMA__conditional_function_argument__:
	COMMA conditional_function_argument deamerreserved_star__COMMA__conditional_function_argument__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__({::Celeste::ast::Type::deamerreserved_star__COMMA__conditional_function_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $2, $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__conditional_function_argument__({::Celeste::ast::Type::deamerreserved_star__COMMA__conditional_function_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_arrow__function_argument__:
	function_argument deamerreserved_star__COMMA__function_argument__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__function_argument__({::Celeste::ast::Type::deamerreserved_arrow__function_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__COMMA__function_argument__:
	COMMA function_argument deamerreserved_star__COMMA__function_argument__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__function_argument__({::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $2, $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__function_argument__({::Celeste::ast::Type::deamerreserved_star__COMMA__function_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


conditional_function_declaration:
	CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $3, $6, $8, $12 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $4;
		delete $5;
		delete $7;
		delete $9;
		delete $10;
		delete $11;
		delete $13;
	}
	| CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $3, $6, $8, $11 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $4;
		delete $5;
		delete $7;
		delete $9;
		delete $10;
		delete $12;
	}
	| CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $3, $6, $11 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $4;
		delete $5;
		delete $7;
		delete $8;
		delete $9;
		delete $10;
		delete $12;
	}
	| CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $3, $6, $10 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $4;
		delete $5;
		delete $7;
		delete $8;
		delete $9;
		delete $11;
	}
	| CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $3, $5, $7, $11 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $4;
		delete $6;
		delete $8;
		delete $9;
		delete $10;
		delete $12;
	}
	| CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $3, $5, $7, $10 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $4;
		delete $6;
		delete $8;
		delete $9;
		delete $11;
	}
	| CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 6, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $3, $5, $10 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $4;
		delete $6;
		delete $7;
		delete $8;
		delete $9;
		delete $11;
	}
	| CONDITIONAL LEFT_PARANTHESIS deamerreserved_arrow__conditional_function_argument__ RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 7, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $3, $5, $9 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $4;
		delete $6;
		delete $7;
		delete $8;
		delete $10;
	}
	| CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 8, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $5, $7, $11 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $3;
		delete $4;
		delete $6;
		delete $8;
		delete $9;
		delete $10;
		delete $12;
	}
	| CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 9, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $5, $7, $10 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $3;
		delete $4;
		delete $6;
		delete $8;
		delete $9;
		delete $11;
	}
	| CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 10, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $5, $10 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $3;
		delete $4;
		delete $6;
		delete $7;
		delete $8;
		delete $9;
		delete $11;
	}
	| CONDITIONAL LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 11, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $5, $9 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $3;
		delete $4;
		delete $6;
		delete $7;
		delete $8;
		delete $10;
	}
	| CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 12, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $4, $6, $10 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $3;
		delete $5;
		delete $7;
		delete $8;
		delete $9;
		delete $11;
	}
	| CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 13, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $4, $6, $9 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $3;
		delete $5;
		delete $7;
		delete $8;
		delete $10;
	}
	| CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 14, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $4, $9 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $3;
		delete $5;
		delete $6;
		delete $7;
		delete $8;
		delete $10;
	}
	| CONDITIONAL LEFT_PARANTHESIS RIGHT_PARANTHESIS function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 15, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $4, $8 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $3;
		delete $5;
		delete $6;
		delete $7;
		delete $9;
	}
	| CONDITIONAL function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 16, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, $4, $8 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $6;
		delete $7;
		delete $9;
	}
	| CONDITIONAL function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 17, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, $4, $7 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $6;
		delete $8;
	}
	| CONDITIONAL function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 18, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, $7 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $5;
		delete $6;
		delete $8;
	}
	| CONDITIONAL function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::conditional_function_declaration({::Celeste::ast::Type::conditional_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 19, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONDITIONAL({::Celeste::ast::Type::CONDITIONAL, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, $6 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $5;
		delete $7;
	}
;


template_code_function_declaration:
	execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CODE function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_code_function_declaration({::Celeste::ast::Type::template_code_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $7, $9, $13 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $8;
		delete $10;
		delete $11;
		delete $12;
		delete $14;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CODE function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_code_function_declaration({::Celeste::ast::Type::template_code_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $7, $9, $12 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $8;
		delete $10;
		delete $11;
		delete $13;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CODE function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_code_function_declaration({::Celeste::ast::Type::template_code_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $7, $12 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $8;
		delete $9;
		delete $10;
		delete $11;
		delete $13;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CODE function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_code_function_declaration({::Celeste::ast::Type::template_code_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $7, $11 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $8;
		delete $9;
		delete $10;
		delete $12;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CODE function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_code_function_declaration({::Celeste::ast::Type::template_code_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $6, $8, $12 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $7;
		delete $9;
		delete $10;
		delete $11;
		delete $13;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CODE function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_code_function_declaration({::Celeste::ast::Type::template_code_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $6, $8, $11 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $7;
		delete $9;
		delete $10;
		delete $12;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CODE function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_code_function_declaration({::Celeste::ast::Type::template_code_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 6, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $6, $11 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $7;
		delete $8;
		delete $9;
		delete $10;
		delete $12;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CODE function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_code_function_declaration({::Celeste::ast::Type::template_code_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 7, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $6, $10 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $7;
		delete $8;
		delete $9;
		delete $11;
	}
;


code_function_declaration:
	CODE function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::code_function_declaration({::Celeste::ast::Type::code_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, $4, $8 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $6;
		delete $7;
		delete $9;
	}
	| CODE function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::code_function_declaration({::Celeste::ast::Type::code_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, $4, $7 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $6;
		delete $8;
	}
	| CODE function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::code_function_declaration({::Celeste::ast::Type::code_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, $7 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $5;
		delete $6;
		delete $8;
	}
	| CODE function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::code_function_declaration({::Celeste::ast::Type::code_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, $6 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $5;
		delete $7;
	}
;


return_statement:
	RETURN expression  {
		auto* const newNode = new Celeste::ast::node::return_statement({::Celeste::ast::Type::return_statement, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::RETURN({::Celeste::ast::Type::RETURN, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


symbol_increase:
	symbol_reference PLUSPLUS  {
		auto* const newNode = new Celeste::ast::node::symbol_increase({::Celeste::ast::Type::symbol_increase, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::PLUSPLUS({::Celeste::ast::Type::PLUSPLUS, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


symbol_decrease:
	symbol_reference MINUSMINUS  {
		auto* const newNode = new Celeste::ast::node::symbol_decrease({::Celeste::ast::Type::symbol_decrease, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::MINUSMINUS({::Celeste::ast::Type::MINUSMINUS, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


expression:
	expression_no_value  {
		auto* const newNode = new Celeste::ast::node::expression({::Celeste::ast::Type::expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


expression_no_value:
	expression_no_value PLUS t_expression  {
		auto* const newNode = new Celeste::ast::node::expression_no_value({::Celeste::ast::Type::expression_no_value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::PLUS({::Celeste::ast::Type::PLUS, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| expression_no_value MINUS t_expression  {
		auto* const newNode = new Celeste::ast::node::expression_no_value({::Celeste::ast::Type::expression_no_value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::MINUS({::Celeste::ast::Type::MINUS, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| t_expression  {
		auto* const newNode = new Celeste::ast::node::expression_no_value({::Celeste::ast::Type::expression_no_value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


t_expression:
	t_expression MULTIPLY f_expression  {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::MULTIPLY({::Celeste::ast::Type::MULTIPLY, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| t_expression DIVIDE f_expression  {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::DIVIDE({::Celeste::ast::Type::DIVIDE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| t_expression LTEQ f_expression  {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::LTEQ({::Celeste::ast::Type::LTEQ, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| t_expression GTEQ f_expression  {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::GTEQ({::Celeste::ast::Type::GTEQ, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| t_expression LT f_expression  {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::LT({::Celeste::ast::Type::LT, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| t_expression GT f_expression  {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::GT({::Celeste::ast::Type::GT, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| t_expression EQEQ f_expression  {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 6, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::EQEQ({::Celeste::ast::Type::EQEQ, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| t_expression NOTEQ f_expression  {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 7, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::NOTEQ({::Celeste::ast::Type::NOTEQ, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| NOT f_expression  {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 8, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::NOT({::Celeste::ast::Type::NOT, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| f_expression  {
		auto* const newNode = new Celeste::ast::node::t_expression({::Celeste::ast::Type::t_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 9, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


f_expression:
	LEFT_PARANTHESIS expression_no_value RIGHT_PARANTHESIS  {
		auto* const newNode = new Celeste::ast::node::f_expression({::Celeste::ast::Type::f_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $3;
	}
	| value  {
		auto* const newNode = new Celeste::ast::node::f_expression({::Celeste::ast::Type::f_expression, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


display_call:
	DISPLAY symbol_reference  {
		auto* const newNode = new Celeste::ast::node::display_call({::Celeste::ast::Type::display_call, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::DISPLAY({::Celeste::ast::Type::DISPLAY, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


for_loop:
	for_each_loop  {
		auto* const newNode = new Celeste::ast::node::for_loop({::Celeste::ast::Type::for_loop, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| for_iteration_loop  {
		auto* const newNode = new Celeste::ast::node::for_loop({::Celeste::ast::Type::for_loop, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


for_iteration_loop:
	FOR expression LEFT_BRACKET for_block RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::for_iteration_loop({::Celeste::ast::Type::for_iteration_loop, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::FOR({::Celeste::ast::Type::FOR, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, $4 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
	}
;


for_each_loop:
	FOR LEFT_PARANTHESIS type for_variable IN iterator RIGHT_PARANTHESIS LEFT_BRACKET for_block RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::for_each_loop({::Celeste::ast::Type::for_each_loop, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::FOR({::Celeste::ast::Type::FOR, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $3, $4, new Celeste::ast::node::IN({::Celeste::ast::Type::IN, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $6, $9 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $7;
		delete $8;
		delete $10;
	}
	| FOR LEFT_PARANTHESIS type for_variable COLON iterator RIGHT_PARANTHESIS LEFT_BRACKET for_block RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::for_each_loop({::Celeste::ast::Type::for_each_loop, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::FOR({::Celeste::ast::Type::FOR, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $3, $4, $6, $9 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $5;
		delete $7;
		delete $8;
		delete $10;
	}
;


for_variable:
	VARNAME  {
		auto* const newNode = new Celeste::ast::node::for_variable({::Celeste::ast::Type::for_variable, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


iterator:
	full_value  {
		auto* const newNode = new Celeste::ast::node::iterator({::Celeste::ast::Type::iterator, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


for_block:
	standard_block  {
		auto* const newNode = new Celeste::ast::node::for_block({::Celeste::ast::Type::for_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


namespace_declaration:
	NAMESPACE deamerreserved_arrow__namespace_name__ LEFT_BRACKET namespace_block RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::namespace_declaration({::Celeste::ast::Type::namespace_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::NAMESPACE({::Celeste::ast::Type::NAMESPACE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, $4 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
	}
;


deamerreserved_arrow__namespace_name__:
	namespace_name deamerreserved_star__DOT__namespace_name__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__namespace_name__({::Celeste::ast::Type::deamerreserved_arrow__namespace_name__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__DOT__namespace_name__:
	DOT namespace_name deamerreserved_star__DOT__namespace_name__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__DOT__namespace_name__({::Celeste::ast::Type::deamerreserved_star__DOT__namespace_name__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $2, $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__DOT__namespace_name__({::Celeste::ast::Type::deamerreserved_star__DOT__namespace_name__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


namespace_block:
	standard_block  {
		auto* const newNode = new Celeste::ast::node::namespace_block({::Celeste::ast::Type::namespace_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


namespace_name:
	VARNAME  {
		auto* const newNode = new Celeste::ast::node::namespace_name({::Celeste::ast::Type::namespace_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


inline_class_declaration:
	created_class_name COLON deamerreserved_arrow__inline_class_declaration_composite__ COMMA  {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration({::Celeste::ast::Type::inline_class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $4;
	}
	| created_class_name COLON deamerreserved_arrow__inline_class_declaration_composite__  {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration({::Celeste::ast::Type::inline_class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
	}
	| created_class_name COLON COMMA  {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration({::Celeste::ast::Type::inline_class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $3;
	}
	| created_class_name COLON  {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration({::Celeste::ast::Type::inline_class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
	}
;


deamerreserved_arrow__inline_class_declaration_composite__:
	inline_class_declaration_composite deamerreserved_star__COMMA__inline_class_declaration_composite__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite__({::Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__COMMA__inline_class_declaration_composite__:
	COMMA inline_class_declaration_composite deamerreserved_star__COMMA__inline_class_declaration_composite__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__({::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $2, $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite__({::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


inline_class_declaration_composite:
	inline_class_declaration_composite_name  {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration_composite({::Celeste::ast::Type::inline_class_declaration_composite, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| inline_class_declaration_composite_name AS LEFT_SQUARE_BRACKET inline_class_declaration_composite_alias RIGHT_SQUARE_BRACKET  {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration_composite({::Celeste::ast::Type::inline_class_declaration_composite, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::AS({::Celeste::ast::Type::AS, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
	}
	| LEFT_SQUARE_BRACKET inline_class_declaration_composite_alias COLON inline_class_declaration_composite_name RIGHT_SQUARE_BRACKET  {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration_composite({::Celeste::ast::Type::inline_class_declaration_composite, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $2, $4 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $3;
		delete $5;
	}
	| LEFT_SQUARE_BRACKET LEFT_SQUARE_BRACKET deamerreserved_arrow__inline_class_declaration_composite_alias__ COMMA RIGHT_SQUARE_BRACKET COLON inline_class_declaration_composite_name RIGHT_SQUARE_BRACKET  {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration_composite({::Celeste::ast::Type::inline_class_declaration_composite, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $3, $7 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $2;
		delete $4;
		delete $5;
		delete $6;
		delete $8;
	}
	| LEFT_SQUARE_BRACKET LEFT_SQUARE_BRACKET deamerreserved_arrow__inline_class_declaration_composite_alias__ RIGHT_SQUARE_BRACKET COLON inline_class_declaration_composite_name RIGHT_SQUARE_BRACKET  {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration_composite({::Celeste::ast::Type::inline_class_declaration_composite, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $3, $6 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $2;
		delete $4;
		delete $5;
		delete $7;
	}
	| LEFT_SQUARE_BRACKET LEFT_SQUARE_BRACKET COMMA RIGHT_SQUARE_BRACKET COLON inline_class_declaration_composite_name RIGHT_SQUARE_BRACKET  {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration_composite({::Celeste::ast::Type::inline_class_declaration_composite, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $6 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $2;
		delete $3;
		delete $4;
		delete $5;
		delete $7;
	}
	| LEFT_SQUARE_BRACKET LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET COLON inline_class_declaration_composite_name RIGHT_SQUARE_BRACKET  {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration_composite({::Celeste::ast::Type::inline_class_declaration_composite, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 6, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $5 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $2;
		delete $3;
		delete $4;
		delete $6;
	}
;


deamerreserved_arrow__inline_class_declaration_composite_alias__:
	inline_class_declaration_composite_alias deamerreserved_star__COMMA__inline_class_declaration_composite_alias__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__inline_class_declaration_composite_alias__({::Celeste::ast::Type::deamerreserved_arrow__inline_class_declaration_composite_alias__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__COMMA__inline_class_declaration_composite_alias__:
	COMMA inline_class_declaration_composite_alias deamerreserved_star__COMMA__inline_class_declaration_composite_alias__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__({::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $2, $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__({::Celeste::ast::Type::deamerreserved_star__COMMA__inline_class_declaration_composite_alias__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


inline_class_declaration_composite_alias:
	VARNAME  {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration_composite_alias({::Celeste::ast::Type::inline_class_declaration_composite_alias, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


inline_class_declaration_composite_name:
	symbol_reference  {
		auto* const newNode = new Celeste::ast::node::inline_class_declaration_composite_name({::Celeste::ast::Type::inline_class_declaration_composite_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


created_class_name:
	VARNAME  {
		auto* const newNode = new Celeste::ast::node::created_class_name({::Celeste::ast::Type::created_class_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


code_block:
	LEFT_PARANTHESIS deamerreserved_arrow__code_block_input_argument__ COMMA RIGHT_PARANTHESIS LEFT_SQUARE_BRACKET code_block_program RIGHT_SQUARE_BRACKET  {
		auto* const newNode = new Celeste::ast::node::code_block({::Celeste::ast::Type::code_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $2, $6 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $3;
		delete $4;
		delete $5;
		delete $7;
	}
	| LEFT_PARANTHESIS deamerreserved_arrow__code_block_input_argument__ RIGHT_PARANTHESIS LEFT_SQUARE_BRACKET code_block_program RIGHT_SQUARE_BRACKET  {
		auto* const newNode = new Celeste::ast::node::code_block({::Celeste::ast::Type::code_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $2, $5 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $3;
		delete $4;
		delete $6;
	}
	| LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_SQUARE_BRACKET code_block_program RIGHT_SQUARE_BRACKET  {
		auto* const newNode = new Celeste::ast::node::code_block({::Celeste::ast::Type::code_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $5 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $2;
		delete $3;
		delete $4;
		delete $6;
	}
	| LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_SQUARE_BRACKET code_block_program RIGHT_SQUARE_BRACKET  {
		auto* const newNode = new Celeste::ast::node::code_block({::Celeste::ast::Type::code_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $4 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $2;
		delete $3;
		delete $5;
	}
	| LEFT_SQUARE_BRACKET code_block_program RIGHT_SQUARE_BRACKET  {
		auto* const newNode = new Celeste::ast::node::code_block({::Celeste::ast::Type::code_block, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $3;
	}
;


deamerreserved_arrow__code_block_input_argument__:
	code_block_input_argument deamerreserved_star__COMMA__code_block_input_argument__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__code_block_input_argument__({::Celeste::ast::Type::deamerreserved_arrow__code_block_input_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__COMMA__code_block_input_argument__:
	COMMA code_block_input_argument deamerreserved_star__COMMA__code_block_input_argument__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__({::Celeste::ast::Type::deamerreserved_star__COMMA__code_block_input_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $2, $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__code_block_input_argument__({::Celeste::ast::Type::deamerreserved_star__COMMA__code_block_input_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


code_block_input_argument:
	code_block_argument  {
		auto* const newNode = new Celeste::ast::node::code_block_input_argument({::Celeste::ast::Type::code_block_input_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


code_block_argument:
	type code_block_argument_name  {
		auto* const newNode = new Celeste::ast::node::code_block_argument({::Celeste::ast::Type::code_block_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| type  {
		auto* const newNode = new Celeste::ast::node::code_block_argument({::Celeste::ast::Type::code_block_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


code_block_argument_name:
	VARNAME  {
		auto* const newNode = new Celeste::ast::node::code_block_argument_name({::Celeste::ast::Type::code_block_argument_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


code_block_program:
	standard_block  {
		auto* const newNode = new Celeste::ast::node::code_block_program({::Celeste::ast::Type::code_block_program, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


variable_declaration:
	type variable_name EQ value_list  {
		auto* const newNode = new Celeste::ast::node::variable_declaration({::Celeste::ast::Type::variable_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $2, new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }), $4 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| type variable_name  {
		auto* const newNode = new Celeste::ast::node::variable_declaration({::Celeste::ast::Type::variable_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


array_declaration:
	LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET  {
		auto* const newNode = new Celeste::ast::node::array_declaration({::Celeste::ast::Type::array_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $3;
	}
;


variable_name:
	symbol_reference  {
		auto* const newNode = new Celeste::ast::node::variable_name({::Celeste::ast::Type::variable_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


template_function_declaration:
	execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, $6, new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, $7 }), $8, $9, $11, $14, $16 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $10;
		delete $12;
		delete $13;
		delete $15;
		delete $17;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, $6, new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, $7 }), $8, $9, $11, $15 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $10;
		delete $12;
		delete $13;
		delete $14;
		delete $16;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, $6, new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, $7 }), $8, $9, $11, $13, $15 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $10;
		delete $12;
		delete $14;
		delete $16;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, $6, new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, $7 }), $8, $9, $11, $14 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $10;
		delete $12;
		delete $13;
		delete $15;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, $6, new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, $7 }), $8, $9, $13, $15 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $10;
		delete $11;
		delete $12;
		delete $14;
		delete $16;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, $6, new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, $7 }), $8, $9, $14 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $10;
		delete $11;
		delete $12;
		delete $13;
		delete $15;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 6, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, $6, new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, $7 }), $8, $9, $12, $14 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $10;
		delete $11;
		delete $13;
		delete $15;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 7, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, $6, new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, $7 }), $8, $9, $13 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $10;
		delete $11;
		delete $12;
		delete $14;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 8, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $5, new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $7, $8, $10, $13, $15 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $9;
		delete $11;
		delete $12;
		delete $14;
		delete $16;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 9, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $5, new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $7, $8, $10, $14 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $9;
		delete $11;
		delete $12;
		delete $13;
		delete $15;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 10, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $5, new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $7, $8, $10, $12, $14 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $9;
		delete $11;
		delete $13;
		delete $15;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 11, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $5, new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $7, $8, $10, $13 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $9;
		delete $11;
		delete $12;
		delete $14;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 12, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $5, new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $7, $8, $12, $14 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $9;
		delete $10;
		delete $11;
		delete $13;
		delete $15;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 13, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $5, new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $7, $8, $13 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $9;
		delete $10;
		delete $11;
		delete $12;
		delete $14;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 14, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $5, new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $7, $8, $11, $13 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $9;
		delete $10;
		delete $12;
		delete $14;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_function_declaration({::Celeste::ast::Type::template_function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 15, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $5, new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $7, $8, $12 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $9;
		delete $10;
		delete $11;
		delete $13;
	}
;


function_declaration:
	execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::function_declaration({::Celeste::ast::Type::function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3, $4, $6, $9, $11 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $5;
		delete $7;
		delete $8;
		delete $10;
		delete $12;
	}
	| execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::function_declaration({::Celeste::ast::Type::function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3, $4, $6, $10 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $5;
		delete $7;
		delete $8;
		delete $9;
		delete $11;
	}
	| execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::function_declaration({::Celeste::ast::Type::function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3, $4, $6, $8, $10 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $5;
		delete $7;
		delete $9;
		delete $11;
	}
	| execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::function_declaration({::Celeste::ast::Type::function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3, $4, $6, $9 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $5;
		delete $7;
		delete $8;
		delete $10;
	}
	| execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::function_declaration({::Celeste::ast::Type::function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3, $4, $8, $10 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $5;
		delete $6;
		delete $7;
		delete $9;
		delete $11;
	}
	| execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::function_declaration({::Celeste::ast::Type::function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3, $4, $9 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $5;
		delete $6;
		delete $7;
		delete $8;
		delete $10;
	}
	| execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS trailing_return_type LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::function_declaration({::Celeste::ast::Type::function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 6, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3, $4, $7, $9 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $5;
		delete $6;
		delete $8;
		delete $10;
	}
	| execution_keyword_permutation FUNCTION return_type function_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::function_declaration({::Celeste::ast::Type::function_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 7, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::FUNCTION({::Celeste::ast::Type::FUNCTION, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3, $4, $8 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $5;
		delete $6;
		delete $7;
		delete $9;
	}
;


trailing_return_type:
	return_type  {
		auto* const newNode = new Celeste::ast::node::trailing_return_type({::Celeste::ast::Type::trailing_return_type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


return_type:
	type  {
		auto* const newNode = new Celeste::ast::node::return_type({::Celeste::ast::Type::return_type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


conditional_function_argument:
	function_argument  {
		auto* const newNode = new Celeste::ast::node::conditional_function_argument({::Celeste::ast::Type::conditional_function_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


function_argument:
	function_argument_type function_argument_name condition_modifier_function_call EQ full_value  {
		auto* const newNode = new Celeste::ast::node::function_argument({::Celeste::ast::Type::function_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $2, $3, new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, $4 }), $5 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| function_argument_type function_argument_name condition_modifier_function_call  {
		auto* const newNode = new Celeste::ast::node::function_argument({::Celeste::ast::Type::function_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $2, $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| function_argument_type function_argument_name EQ full_value  {
		auto* const newNode = new Celeste::ast::node::function_argument({::Celeste::ast::Type::function_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $2, new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }), $4 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| function_argument_type function_argument_name  {
		auto* const newNode = new Celeste::ast::node::function_argument({::Celeste::ast::Type::function_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


function_argument_type:
	type  {
		auto* const newNode = new Celeste::ast::node::function_argument_type({::Celeste::ast::Type::function_argument_type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


function_argument_name:
	symbol_reference  {
		auto* const newNode = new Celeste::ast::node::function_argument_name({::Celeste::ast::Type::function_argument_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


condition_modifier_function_call:
	LEFT_PARANTHESIS condition_modifier_name LEFT_SQUARE_BRACKET deamerreserved_arrow__condition_modifier_argument__ COMMA RIGHT_SQUARE_BRACKET RIGHT_PARANTHESIS  {
		auto* const newNode = new Celeste::ast::node::condition_modifier_function_call({::Celeste::ast::Type::condition_modifier_function_call, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $2, $4 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $3;
		delete $5;
		delete $6;
		delete $7;
	}
	| LEFT_PARANTHESIS condition_modifier_name LEFT_SQUARE_BRACKET deamerreserved_arrow__condition_modifier_argument__ RIGHT_SQUARE_BRACKET RIGHT_PARANTHESIS  {
		auto* const newNode = new Celeste::ast::node::condition_modifier_function_call({::Celeste::ast::Type::condition_modifier_function_call, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $2, $4 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $3;
		delete $5;
		delete $6;
	}
	| LEFT_PARANTHESIS condition_modifier_name LEFT_SQUARE_BRACKET COMMA RIGHT_SQUARE_BRACKET RIGHT_PARANTHESIS  {
		auto* const newNode = new Celeste::ast::node::condition_modifier_function_call({::Celeste::ast::Type::condition_modifier_function_call, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $3;
		delete $4;
		delete $5;
		delete $6;
	}
	| LEFT_PARANTHESIS condition_modifier_name LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET RIGHT_PARANTHESIS  {
		auto* const newNode = new Celeste::ast::node::condition_modifier_function_call({::Celeste::ast::Type::condition_modifier_function_call, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $3;
		delete $4;
		delete $5;
	}
	| LEFT_PARANTHESIS condition_modifier_name RIGHT_PARANTHESIS  {
		auto* const newNode = new Celeste::ast::node::condition_modifier_function_call({::Celeste::ast::Type::condition_modifier_function_call, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $3;
	}
;


deamerreserved_arrow__condition_modifier_argument__:
	condition_modifier_argument deamerreserved_star__COMMA__condition_modifier_argument__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__condition_modifier_argument__({::Celeste::ast::Type::deamerreserved_arrow__condition_modifier_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__COMMA__condition_modifier_argument__:
	COMMA condition_modifier_argument deamerreserved_star__COMMA__condition_modifier_argument__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__({::Celeste::ast::Type::deamerreserved_star__COMMA__condition_modifier_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $2, $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__condition_modifier_argument__({::Celeste::ast::Type::deamerreserved_star__COMMA__condition_modifier_argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


condition_modifier_name:
	symbol_reference  {
		auto* const newNode = new Celeste::ast::node::condition_modifier_name({::Celeste::ast::Type::condition_modifier_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


condition_modifier_argument:
	full_value  {
		auto* const newNode = new Celeste::ast::node::condition_modifier_argument({::Celeste::ast::Type::condition_modifier_argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


function_body:
	standard_block  {
		auto* const newNode = new Celeste::ast::node::function_body({::Celeste::ast::Type::function_body, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


function_name:
	symbol_reference  {
		auto* const newNode = new Celeste::ast::node::function_name({::Celeste::ast::Type::function_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


template_class_declaration:
	execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation CLASS class_name class_inherit_base LEFT_BRACKET class_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_class_declaration({::Celeste::ast::Type::template_class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, $6, new Celeste::ast::node::CLASS({::Celeste::ast::Type::CLASS, ::deamer::external::cpp::ast::NodeValue::terminal, $7 }), $8, $9, $11 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $10;
		delete $12;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET execution_keyword_permutation CLASS class_name LEFT_BRACKET class_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_class_declaration({::Celeste::ast::Type::template_class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $4, $6, new Celeste::ast::node::CLASS({::Celeste::ast::Type::CLASS, ::deamer::external::cpp::ast::NodeValue::terminal, $7 }), $8, $10 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $9;
		delete $11;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation CLASS class_name class_inherit_base LEFT_BRACKET class_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_class_declaration({::Celeste::ast::Type::template_class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $5, new Celeste::ast::node::CLASS({::Celeste::ast::Type::CLASS, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $7, $8, $10 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $9;
		delete $11;
	}
	| execution_keyword_permutation TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET execution_keyword_permutation CLASS class_name LEFT_BRACKET class_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_class_declaration({::Celeste::ast::Type::template_class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $5, new Celeste::ast::node::CLASS({::Celeste::ast::Type::CLASS, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $7, $9 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $8;
		delete $10;
	}
;


template_parameter:
	type template_parameter_name  {
		auto* const newNode = new Celeste::ast::node::template_parameter({::Celeste::ast::Type::template_parameter, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


template_parameter_name:
	VARNAME  {
		auto* const newNode = new Celeste::ast::node::template_parameter_name({::Celeste::ast::Type::template_parameter_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


class_declaration:
	execution_keyword_permutation CLASS class_name deamerreserved_arrow__class_inherit_base__ LEFT_BRACKET class_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::class_declaration({::Celeste::ast::Type::class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::CLASS({::Celeste::ast::Type::CLASS, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3, $4, $6 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $5;
		delete $7;
	}
	| execution_keyword_permutation CLASS class_name LEFT_BRACKET class_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::class_declaration({::Celeste::ast::Type::class_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::CLASS({::Celeste::ast::Type::CLASS, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3, $5 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $4;
		delete $6;
	}
;


deamerreserved_arrow__class_inherit_base__:
	class_inherit_base deamerreserved_star__COMMA__class_inherit_base__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__class_inherit_base__({::Celeste::ast::Type::deamerreserved_arrow__class_inherit_base__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__COMMA__class_inherit_base__:
	COMMA class_inherit_base deamerreserved_star__COMMA__class_inherit_base__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__({::Celeste::ast::Type::deamerreserved_star__COMMA__class_inherit_base__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $2, $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__class_inherit_base__({::Celeste::ast::Type::deamerreserved_star__COMMA__class_inherit_base__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


class_name:
	symbol_reference  {
		auto* const newNode = new Celeste::ast::node::class_name({::Celeste::ast::Type::class_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


execution_keyword_permutation:
	CODE  {
		auto* const newNode = new Celeste::ast::node::execution_keyword_permutation({::Celeste::ast::Type::execution_keyword_permutation, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| RUNTIME  {
		auto* const newNode = new Celeste::ast::node::execution_keyword_permutation({::Celeste::ast::Type::execution_keyword_permutation, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::RUNTIME({::Celeste::ast::Type::RUNTIME, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| CODE RUNTIME  {
		auto* const newNode = new Celeste::ast::node::execution_keyword_permutation({::Celeste::ast::Type::execution_keyword_permutation, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), new Celeste::ast::node::RUNTIME({::Celeste::ast::Type::RUNTIME, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| RUNTIME CODE  {
		auto* const newNode = new Celeste::ast::node::execution_keyword_permutation({::Celeste::ast::Type::execution_keyword_permutation, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::RUNTIME({::Celeste::ast::Type::RUNTIME, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), new Celeste::ast::node::CODE({::Celeste::ast::Type::CODE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	|  {
		auto* const newNode = new Celeste::ast::node::execution_keyword_permutation({::Celeste::ast::Type::execution_keyword_permutation, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


class_body:
	deamerreserved_star__class_stmt__  {
		auto* const newNode = new Celeste::ast::node::class_body({::Celeste::ast::Type::class_body, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__class_stmt__:
	class_stmt deamerreserved_star__class_stmt__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__class_stmt__({::Celeste::ast::Type::deamerreserved_star__class_stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__class_stmt__({::Celeste::ast::Type::deamerreserved_star__class_stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


class_stmt:
	accessibility  {
		auto* const newNode = new Celeste::ast::node::class_stmt({::Celeste::ast::Type::class_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| class_stmt_member_field_declaration  {
		auto* const newNode = new Celeste::ast::node::class_stmt({::Celeste::ast::Type::class_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| class_stmt_member_function  {
		auto* const newNode = new Celeste::ast::node::class_stmt({::Celeste::ast::Type::class_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| class_stmt_member_template_function  {
		auto* const newNode = new Celeste::ast::node::class_stmt({::Celeste::ast::Type::class_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| class_stmt_constructor  {
		auto* const newNode = new Celeste::ast::node::class_stmt({::Celeste::ast::Type::class_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| template_class_stmt_constructor  {
		auto* const newNode = new Celeste::ast::node::class_stmt({::Celeste::ast::Type::class_stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


class_stmt_member_field_declaration:
	type member_field_name EQ value_list COMMA  {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_field_declaration({::Celeste::ast::Type::class_stmt_member_field_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $2, new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }), $4 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $5;
	}
	| type member_field_name COMMA  {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_field_declaration({::Celeste::ast::Type::class_stmt_member_field_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
	}
	| type member_field_name EQ value_list SEMICOLON  {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_field_declaration({::Celeste::ast::Type::class_stmt_member_field_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $2, new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }), $4 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $5;
	}
	| type member_field_name SEMICOLON  {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_field_declaration({::Celeste::ast::Type::class_stmt_member_field_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
	}
	| type member_field_name EQ value_list  {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_field_declaration({::Celeste::ast::Type::class_stmt_member_field_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $2, new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }), $4 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| type member_field_name  {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_field_declaration({::Celeste::ast::Type::class_stmt_member_field_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


member_field_name:
	VARNAME  {
		auto* const newNode = new Celeste::ast::node::member_field_name({::Celeste::ast::Type::member_field_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


class_stmt_member_function:
	VIRTUAL function_declaration OVERRIDE  {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_function({::Celeste::ast::Type::class_stmt_member_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VIRTUAL({::Celeste::ast::Type::VIRTUAL, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, new Celeste::ast::node::OVERRIDE({::Celeste::ast::Type::OVERRIDE, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| VIRTUAL function_declaration  {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_function({::Celeste::ast::Type::class_stmt_member_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VIRTUAL({::Celeste::ast::Type::VIRTUAL, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| PURE function_declaration OVERRIDE  {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_function({::Celeste::ast::Type::class_stmt_member_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::PURE({::Celeste::ast::Type::PURE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, new Celeste::ast::node::OVERRIDE({::Celeste::ast::Type::OVERRIDE, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| PURE function_declaration  {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_function({::Celeste::ast::Type::class_stmt_member_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::PURE({::Celeste::ast::Type::PURE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| function_declaration OVERRIDE  {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_function({::Celeste::ast::Type::class_stmt_member_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::OVERRIDE({::Celeste::ast::Type::OVERRIDE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| function_declaration  {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_function({::Celeste::ast::Type::class_stmt_member_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


class_stmt_member_template_function:
	VIRTUAL template_function_declaration OVERRIDE  {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_template_function({::Celeste::ast::Type::class_stmt_member_template_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VIRTUAL({::Celeste::ast::Type::VIRTUAL, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, new Celeste::ast::node::OVERRIDE({::Celeste::ast::Type::OVERRIDE, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| VIRTUAL template_function_declaration  {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_template_function({::Celeste::ast::Type::class_stmt_member_template_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VIRTUAL({::Celeste::ast::Type::VIRTUAL, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| PURE template_function_declaration OVERRIDE  {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_template_function({::Celeste::ast::Type::class_stmt_member_template_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::PURE({::Celeste::ast::Type::PURE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, new Celeste::ast::node::OVERRIDE({::Celeste::ast::Type::OVERRIDE, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| PURE template_function_declaration  {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_template_function({::Celeste::ast::Type::class_stmt_member_template_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::PURE({::Celeste::ast::Type::PURE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| template_function_declaration OVERRIDE  {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_template_function({::Celeste::ast::Type::class_stmt_member_template_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::OVERRIDE({::Celeste::ast::Type::OVERRIDE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| template_function_declaration  {
		auto* const newNode = new Celeste::ast::node::class_stmt_member_template_function({::Celeste::ast::Type::class_stmt_member_template_function, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


template_class_stmt_constructor:
	TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $3, $5, $7, $11 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $4;
		delete $6;
		delete $8;
		delete $9;
		delete $10;
		delete $12;
	}
	| TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $3, $5, $7, $10 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $4;
		delete $6;
		delete $8;
		delete $9;
		delete $11;
	}
	| TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET class_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $3, $5, $10 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $4;
		delete $6;
		delete $7;
		delete $8;
		delete $9;
		delete $11;
	}
	| TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET class_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $3, $5, $9 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $4;
		delete $6;
		delete $7;
		delete $8;
		delete $10;
	}
	| TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $4, $6, $10 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $3;
		delete $5;
		delete $7;
		delete $8;
		delete $9;
		delete $11;
	}
	| TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $4, $6, $9 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $3;
		delete $5;
		delete $7;
		delete $8;
		delete $10;
	}
	| TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET class_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 6, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $4, $9 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $3;
		delete $5;
		delete $6;
		delete $7;
		delete $8;
		delete $10;
	}
	| TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET class_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 7, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $4, $8 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $3;
		delete $5;
		delete $6;
		delete $7;
		delete $9;
	}
	| TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONSTRUCTOR class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 8, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $3, new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $6, $8, $12 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $4;
		delete $7;
		delete $9;
		delete $10;
		delete $11;
		delete $13;
	}
	| TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONSTRUCTOR class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 9, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $3, new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $6, $8, $11 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $4;
		delete $7;
		delete $9;
		delete $10;
		delete $12;
	}
	| TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONSTRUCTOR class_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 10, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $3, new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $6, $11 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $4;
		delete $7;
		delete $8;
		delete $9;
		delete $10;
		delete $12;
	}
	| TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONSTRUCTOR class_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 11, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $3, new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $6, $10 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $4;
		delete $7;
		delete $8;
		delete $9;
		delete $11;
	}
	| TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONSTRUCTOR LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 12, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $3, new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $7, $11 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $4;
		delete $6;
		delete $8;
		delete $9;
		delete $10;
		delete $12;
	}
	| TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONSTRUCTOR LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 13, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $3, new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $7, $10 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $4;
		delete $6;
		delete $8;
		delete $9;
		delete $11;
	}
	| TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONSTRUCTOR LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 14, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $3, new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $10 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $4;
		delete $6;
		delete $7;
		delete $8;
		delete $9;
		delete $11;
	}
	| TEMPLATE LEFT_SQUARE_BRACKET deamerreserved_arrow__template_parameter__ RIGHT_SQUARE_BRACKET CONSTRUCTOR LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 15, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $3, new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), $9 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $4;
		delete $6;
		delete $7;
		delete $8;
		delete $10;
	}
	| TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONSTRUCTOR class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 16, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, $4 }), $5, $7, $11 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $3;
		delete $6;
		delete $8;
		delete $9;
		delete $10;
		delete $12;
	}
	| TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONSTRUCTOR class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 17, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, $4 }), $5, $7, $10 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $3;
		delete $6;
		delete $8;
		delete $9;
		delete $11;
	}
	| TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONSTRUCTOR class_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 18, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, $4 }), $5, $10 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $3;
		delete $6;
		delete $7;
		delete $8;
		delete $9;
		delete $11;
	}
	| TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONSTRUCTOR class_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 19, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, $4 }), $5, $9 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $3;
		delete $6;
		delete $7;
		delete $8;
		delete $10;
	}
	| TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONSTRUCTOR LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 20, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, $4 }), $6, $10 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $3;
		delete $5;
		delete $7;
		delete $8;
		delete $9;
		delete $11;
	}
	| TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONSTRUCTOR LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 21, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, $4 }), $6, $9 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $3;
		delete $5;
		delete $7;
		delete $8;
		delete $10;
	}
	| TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONSTRUCTOR LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 22, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, $4 }), $9 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $3;
		delete $5;
		delete $6;
		delete $7;
		delete $8;
		delete $10;
	}
	| TEMPLATE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET CONSTRUCTOR LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::template_class_stmt_constructor({::Celeste::ast::Type::template_class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 23, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEMPLATE({::Celeste::ast::Type::TEMPLATE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, $4 }), $8 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $3;
		delete $5;
		delete $6;
		delete $7;
		delete $9;
	}
;


class_stmt_constructor:
	class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $3, $7 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $4;
		delete $5;
		delete $6;
		delete $8;
	}
	| class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $3, $6 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $4;
		delete $5;
		delete $7;
	}
	| class_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $6 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $3;
		delete $4;
		delete $5;
		delete $7;
	}
	| class_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $5 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $3;
		delete $4;
		delete $6;
	}
	| CONSTRUCTOR class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, $4, $8 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $6;
		delete $7;
		delete $9;
	}
	| CONSTRUCTOR class_name LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, $4, $7 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
		delete $6;
		delete $8;
	}
	| CONSTRUCTOR class_name LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 6, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, $7 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $5;
		delete $6;
		delete $8;
	}
	| CONSTRUCTOR class_name LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 7, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, $6 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $4;
		delete $5;
		delete $7;
	}
	| CONSTRUCTOR LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 8, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $3, $7 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $4;
		delete $5;
		delete $6;
		delete $8;
	}
	| CONSTRUCTOR LEFT_PARANTHESIS deamerreserved_arrow__function_argument__ RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 9, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $3, $6 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $4;
		delete $5;
		delete $7;
	}
	| CONSTRUCTOR LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 10, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $6 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $3;
		delete $4;
		delete $5;
		delete $7;
	}
	| CONSTRUCTOR LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_BRACKET function_body RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::class_stmt_constructor({::Celeste::ast::Type::class_stmt_constructor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 11, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONSTRUCTOR({::Celeste::ast::Type::CONSTRUCTOR, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $5 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
		delete $3;
		delete $4;
		delete $6;
	}
;


accessibility:
	PUBLIC  {
		auto* const newNode = new Celeste::ast::node::accessibility({::Celeste::ast::Type::accessibility, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::PUBLIC({::Celeste::ast::Type::PUBLIC, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| PROTECTED  {
		auto* const newNode = new Celeste::ast::node::accessibility({::Celeste::ast::Type::accessibility, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::PROTECTED({::Celeste::ast::Type::PROTECTED, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| PRIVATE  {
		auto* const newNode = new Celeste::ast::node::accessibility({::Celeste::ast::Type::accessibility, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::PRIVATE({::Celeste::ast::Type::PRIVATE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


class_inherit_base:
	inherit_base  {
		auto* const newNode = new Celeste::ast::node::class_inherit_base({::Celeste::ast::Type::class_inherit_base, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| compound_base  {
		auto* const newNode = new Celeste::ast::node::class_inherit_base({::Celeste::ast::Type::class_inherit_base, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


inherit_base:
	INHERIT inherit_base_name  {
		auto* const newNode = new Celeste::ast::node::inherit_base({::Celeste::ast::Type::inherit_base, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::INHERIT({::Celeste::ast::Type::INHERIT, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


inherit_base_name:
	symbol_reference  {
		auto* const newNode = new Celeste::ast::node::inherit_base_name({::Celeste::ast::Type::inherit_base_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


compound_base:
	COMPOSITE compound_base_name  {
		auto* const newNode = new Celeste::ast::node::compound_base({::Celeste::ast::Type::compound_base, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::COMPOSITE({::Celeste::ast::Type::COMPOSITE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| COMPOSITE compound_base_name AS compound_base_alias  {
		auto* const newNode = new Celeste::ast::node::compound_base({::Celeste::ast::Type::compound_base, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::COMPOSITE({::Celeste::ast::Type::COMPOSITE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, new Celeste::ast::node::AS({::Celeste::ast::Type::AS, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }), $4 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| COMPOSITE compound_base_name AS LEFT_SQUARE_BRACKET deamerreserved_arrow__compound_base_alias__ COMMA RIGHT_SQUARE_BRACKET  {
		auto* const newNode = new Celeste::ast::node::compound_base({::Celeste::ast::Type::compound_base, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::COMPOSITE({::Celeste::ast::Type::COMPOSITE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, new Celeste::ast::node::AS({::Celeste::ast::Type::AS, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }), $5 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $4;
		delete $6;
		delete $7;
	}
	| COMPOSITE compound_base_name AS LEFT_SQUARE_BRACKET deamerreserved_arrow__compound_base_alias__ RIGHT_SQUARE_BRACKET  {
		auto* const newNode = new Celeste::ast::node::compound_base({::Celeste::ast::Type::compound_base, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::COMPOSITE({::Celeste::ast::Type::COMPOSITE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, new Celeste::ast::node::AS({::Celeste::ast::Type::AS, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }), $5 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $4;
		delete $6;
	}
	| COMPOSITE compound_base_name AS LEFT_SQUARE_BRACKET COMMA RIGHT_SQUARE_BRACKET  {
		auto* const newNode = new Celeste::ast::node::compound_base({::Celeste::ast::Type::compound_base, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::COMPOSITE({::Celeste::ast::Type::COMPOSITE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, new Celeste::ast::node::AS({::Celeste::ast::Type::AS, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $4;
		delete $5;
		delete $6;
	}
	| COMPOSITE compound_base_name AS LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET  {
		auto* const newNode = new Celeste::ast::node::compound_base({::Celeste::ast::Type::compound_base, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::COMPOSITE({::Celeste::ast::Type::COMPOSITE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, new Celeste::ast::node::AS({::Celeste::ast::Type::AS, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $4;
		delete $5;
	}
;


deamerreserved_arrow__compound_base_alias__:
	compound_base_alias deamerreserved_star__COMMA__compound_base_alias__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__compound_base_alias__({::Celeste::ast::Type::deamerreserved_arrow__compound_base_alias__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__COMMA__compound_base_alias__:
	COMMA compound_base_alias deamerreserved_star__COMMA__compound_base_alias__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__({::Celeste::ast::Type::deamerreserved_star__COMMA__compound_base_alias__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $2, $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__compound_base_alias__({::Celeste::ast::Type::deamerreserved_star__COMMA__compound_base_alias__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


compound_base_name:
	symbol_reference  {
		auto* const newNode = new Celeste::ast::node::compound_base_name({::Celeste::ast::Type::compound_base_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


compound_base_alias:
	VARNAME  {
		auto* const newNode = new Celeste::ast::node::compound_base_alias({::Celeste::ast::Type::compound_base_alias, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


enum_declaration:
	ENUM enum_name LEFT_BRACKET deamerreserved_star__enumeration__ RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::enum_declaration({::Celeste::ast::Type::enum_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::ENUM({::Celeste::ast::Type::ENUM, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, $4 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $3;
		delete $5;
	}
;


deamerreserved_star__enumeration__:
	enumeration deamerreserved_star__enumeration__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__enumeration__({::Celeste::ast::Type::deamerreserved_star__enumeration__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__enumeration__({::Celeste::ast::Type::deamerreserved_star__enumeration__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


enum_name:
	symbol_reference  {
		auto* const newNode = new Celeste::ast::node::enum_name({::Celeste::ast::Type::enum_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


enumeration:
	enumeration_name EQ enumeration_value COMMA  {
		auto* const newNode = new Celeste::ast::node::enumeration({::Celeste::ast::Type::enumeration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $4;
	}
	| enumeration_name EQ enumeration_value  {
		auto* const newNode = new Celeste::ast::node::enumeration({::Celeste::ast::Type::enumeration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::EQ({::Celeste::ast::Type::EQ, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| enumeration_name COMMA  {
		auto* const newNode = new Celeste::ast::node::enumeration({::Celeste::ast::Type::enumeration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
	}
	| enumeration_name  {
		auto* const newNode = new Celeste::ast::node::enumeration({::Celeste::ast::Type::enumeration, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


enumeration_name:
	symbol_reference  {
		auto* const newNode = new Celeste::ast::node::enumeration_name({::Celeste::ast::Type::enumeration_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


enumeration_value:
	full_value  {
		auto* const newNode = new Celeste::ast::node::enumeration_value({::Celeste::ast::Type::enumeration_value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


symbol_reference:
	deamerreserved_arrow__symbol__  {
		auto* const newNode = new Celeste::ast::node::symbol_reference({::Celeste::ast::Type::symbol_reference, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_arrow__symbol__:
	symbol deamerreserved_star__DOT__symbol_secondary__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__symbol__({::Celeste::ast::Type::deamerreserved_arrow__symbol__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__DOT__symbol_secondary__:
	DOT symbol_secondary deamerreserved_star__DOT__symbol_secondary__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__({::Celeste::ast::Type::deamerreserved_star__DOT__symbol_secondary__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $2, $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__DOT__symbol_secondary__({::Celeste::ast::Type::deamerreserved_star__DOT__symbol_secondary__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


symbol_secondary:
	symbol_name_secondary deamerreserved_star__symbol_access__  {
		auto* const newNode = new Celeste::ast::node::symbol_secondary({::Celeste::ast::Type::symbol_secondary, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__symbol_access__:
	symbol_access deamerreserved_star__symbol_access__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__symbol_access__({::Celeste::ast::Type::deamerreserved_star__symbol_access__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__symbol_access__({::Celeste::ast::Type::deamerreserved_star__symbol_access__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


symbol:
	symbol_name deamerreserved_star__symbol_access__  {
		auto* const newNode = new Celeste::ast::node::symbol({::Celeste::ast::Type::symbol, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


symbol_access:
	index_access  {
		auto* const newNode = new Celeste::ast::node::symbol_access({::Celeste::ast::Type::symbol_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| anonymous_access  {
		auto* const newNode = new Celeste::ast::node::symbol_access({::Celeste::ast::Type::symbol_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| function_access  {
		auto* const newNode = new Celeste::ast::node::symbol_access({::Celeste::ast::Type::symbol_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| auto_deduce_array  {
		auto* const newNode = new Celeste::ast::node::symbol_access({::Celeste::ast::Type::symbol_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


auto_deduce_array:
	LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET  {
		auto* const newNode = new Celeste::ast::node::auto_deduce_array({::Celeste::ast::Type::auto_deduce_array, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $2;
	}
;


symbol_name_secondary:
	VARNAME  {
		auto* const newNode = new Celeste::ast::node::symbol_name_secondary({::Celeste::ast::Type::symbol_name_secondary, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| FOR  {
		auto* const newNode = new Celeste::ast::node::symbol_name_secondary({::Celeste::ast::Type::symbol_name_secondary, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::FOR({::Celeste::ast::Type::FOR, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| CLASS  {
		auto* const newNode = new Celeste::ast::node::symbol_name_secondary({::Celeste::ast::Type::symbol_name_secondary, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CLASS({::Celeste::ast::Type::CLASS, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| IF  {
		auto* const newNode = new Celeste::ast::node::symbol_name_secondary({::Celeste::ast::Type::symbol_name_secondary, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::IF({::Celeste::ast::Type::IF, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| ELSEIF  {
		auto* const newNode = new Celeste::ast::node::symbol_name_secondary({::Celeste::ast::Type::symbol_name_secondary, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::ELSEIF({::Celeste::ast::Type::ELSEIF, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| ELSE  {
		auto* const newNode = new Celeste::ast::node::symbol_name_secondary({::Celeste::ast::Type::symbol_name_secondary, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::ELSE({::Celeste::ast::Type::ELSE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


symbol_name:
	VARNAME  {
		auto* const newNode = new Celeste::ast::node::symbol_name({::Celeste::ast::Type::symbol_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::VARNAME({::Celeste::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| FOR  {
		auto* const newNode = new Celeste::ast::node::symbol_name({::Celeste::ast::Type::symbol_name, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::FOR({::Celeste::ast::Type::FOR, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


function_access:
	LEFT_PARANTHESIS deamerreserved_arrow__expression__ COMMA RIGHT_PARANTHESIS  {
		auto* const newNode = new Celeste::ast::node::function_access({::Celeste::ast::Type::function_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $3;
		delete $4;
	}
	| LEFT_PARANTHESIS deamerreserved_arrow__expression__ RIGHT_PARANTHESIS  {
		auto* const newNode = new Celeste::ast::node::function_access({::Celeste::ast::Type::function_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $3;
	}
	| LEFT_PARANTHESIS COMMA RIGHT_PARANTHESIS  {
		auto* const newNode = new Celeste::ast::node::function_access({::Celeste::ast::Type::function_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $2;
		delete $3;
	}
	| LEFT_PARANTHESIS RIGHT_PARANTHESIS  {
		auto* const newNode = new Celeste::ast::node::function_access({::Celeste::ast::Type::function_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $2;
	}
;


deamerreserved_arrow__expression__:
	expression deamerreserved_star__COMMA__expression__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__expression__({::Celeste::ast::Type::deamerreserved_arrow__expression__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__COMMA__expression__:
	COMMA expression deamerreserved_star__COMMA__expression__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__expression__({::Celeste::ast::Type::deamerreserved_star__COMMA__expression__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $2, $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__expression__({::Celeste::ast::Type::deamerreserved_star__COMMA__expression__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


index_access:
	LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET  {
		auto* const newNode = new Celeste::ast::node::index_access({::Celeste::ast::Type::index_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $3;
	}
;


anonymous_access:
	LEFT_BRACKET expression RIGHT_BRACKET  {
		auto* const newNode = new Celeste::ast::node::anonymous_access({::Celeste::ast::Type::anonymous_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $3;
	}
;


type:
	deamerreserved_star__type_modifier__ symbol_reference  {
		auto* const newNode = new Celeste::ast::node::type({::Celeste::ast::Type::type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| deamerreserved_star__type_modifier__ AUTOTYPE array_declaration  {
		auto* const newNode = new Celeste::ast::node::type({::Celeste::ast::Type::type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::AUTOTYPE({::Celeste::ast::Type::AUTOTYPE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| deamerreserved_star__type_modifier__ AUTOTYPE  {
		auto* const newNode = new Celeste::ast::node::type({::Celeste::ast::Type::type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::AUTOTYPE({::Celeste::ast::Type::AUTOTYPE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| deamerreserved_star__type_modifier__ AUTO array_declaration  {
		auto* const newNode = new Celeste::ast::node::type({::Celeste::ast::Type::type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::AUTO({::Celeste::ast::Type::AUTO, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| deamerreserved_star__type_modifier__ AUTO  {
		auto* const newNode = new Celeste::ast::node::type({::Celeste::ast::Type::type, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new Celeste::ast::node::AUTO({::Celeste::ast::Type::AUTO, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__type_modifier__:
	type_modifier deamerreserved_star__type_modifier__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__type_modifier__({::Celeste::ast::Type::deamerreserved_star__type_modifier__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__type_modifier__({::Celeste::ast::Type::deamerreserved_star__type_modifier__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


type_modifier:
	STATIC  {
		auto* const newNode = new Celeste::ast::node::type_modifier({::Celeste::ast::Type::type_modifier, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::STATIC({::Celeste::ast::Type::STATIC, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| CONSTANT  {
		auto* const newNode = new Celeste::ast::node::type_modifier({::Celeste::ast::Type::type_modifier, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::CONSTANT({::Celeste::ast::Type::CONSTANT, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| INLINE  {
		auto* const newNode = new Celeste::ast::node::type_modifier({::Celeste::ast::Type::type_modifier, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::INLINE({::Celeste::ast::Type::INLINE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


value_list:
	deamerreserved_arrow__full_value__ COMMA  {
		auto* const newNode = new Celeste::ast::node::value_list({::Celeste::ast::Type::value_list, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $2;
	}
	| deamerreserved_arrow__full_value__  {
		auto* const newNode = new Celeste::ast::node::value_list({::Celeste::ast::Type::value_list, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_arrow__full_value__:
	full_value deamerreserved_star__COMMA__full_value__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_arrow__full_value__({::Celeste::ast::Type::deamerreserved_arrow__full_value__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__COMMA__full_value__:
	COMMA full_value deamerreserved_star__COMMA__full_value__  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__full_value__({::Celeste::ast::Type::deamerreserved_star__COMMA__full_value__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $2, $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
	}
	|  {
		auto* const newNode = new Celeste::ast::node::deamerreserved_star__COMMA__full_value__({::Celeste::ast::Type::deamerreserved_star__COMMA__full_value__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


full_value:
	expression  {
		auto* const newNode = new Celeste::ast::node::full_value({::Celeste::ast::Type::full_value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


value:
	NUMBER  {
		auto* const newNode = new Celeste::ast::node::value({::Celeste::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::NUMBER({::Celeste::ast::Type::NUMBER, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| DECIMAL  {
		auto* const newNode = new Celeste::ast::node::value({::Celeste::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::DECIMAL({::Celeste::ast::Type::DECIMAL, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| TEXT  {
		auto* const newNode = new Celeste::ast::node::value({::Celeste::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new Celeste::ast::node::TEXT({::Celeste::ast::Type::TEXT, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| symbol_reference  {
		auto* const newNode = new Celeste::ast::node::value({::Celeste::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| code_block  {
		auto* const newNode = new Celeste::ast::node::value({::Celeste::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| tuple  {
		auto* const newNode = new Celeste::ast::node::value({::Celeste::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


tuple:
	LEFT_PARANTHESIS deamerreserved_arrow__full_value__ COMMA RIGHT_PARANTHESIS  {
		auto* const newNode = new Celeste::ast::node::tuple({::Celeste::ast::Type::tuple, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $3;
		delete $4;
	}
	| LEFT_PARANTHESIS deamerreserved_arrow__full_value__ RIGHT_PARANTHESIS  {
		auto* const newNode = new Celeste::ast::node::tuple({::Celeste::ast::Type::tuple, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		delete $1;
		delete $3;
	}
;



%%

void Celesteerror(const char* s)
{
	std::cout << "Error: " << s << "\n";
	std::cout << "In line: " << Celestelineno << ", Column: " << Celeste_column << '\n';

	std::size_t currentLineCount = 1;
	auto index = 0;
	static constexpr auto offsetShow = 2;

	while (index < Celeste_input_text->size())
	{
		if ((*Celeste_input_text)[index] == '\n')
		{
			currentLineCount += 1;
		}
		index++;

		if (currentLineCount + offsetShow >= Celestelineno)
		{
			break;
		}

	}

	bool donePreShow = false;
	while (!donePreShow && offsetShow > 0)
	{
		if ((*Celeste_input_text)[index] == '\t')
		{
			std::cout << ' ';
		}
		else if ((*Celeste_input_text)[index] == '\r')
		{
			// skip
		}
		else
		{
			std::cout << (*Celeste_input_text)[index];
		}

		if ((*Celeste_input_text)[index] == '\n')
		{
			if (currentLineCount + 1 == Celestelineno)
			{
				donePreShow = true;
			}
			currentLineCount += 1;
		}

		index++;
	}
	
	bool endLine = false;
	while (!endLine && index < Celeste_input_text->size())
	{
		if ((*Celeste_input_text)[index] == '\t')
		{
			std::cout << ' ';
		}
		else if ((*Celeste_input_text)[index] == '\r')
		{
			// skip
		}
		else
		{
			std::cout << (*Celeste_input_text)[index];
		}
		
		if ((*Celeste_input_text)[index] == '\n')
		{
			endLine = true;
		}
		
		index++;
	}

    for(int i = 0; i < Celeste_column - 1; i++)
	{
		std::cout << "_";
	}
	std::cout << "^\n";
}

deamer::external::cpp::ast::Tree* Celeste::bison::parser::Parser::Parse(const std::string& text) const
{
	Celeste_input_text = &text;
	outputTree = nullptr;
	YY_BUFFER_STATE buf;
	buf = Celeste_scan_string(text.c_str());
	Celesteparse();
	Celeste_delete_buffer(buf);
	Celestelex_destroy();

	return outputTree;
}
