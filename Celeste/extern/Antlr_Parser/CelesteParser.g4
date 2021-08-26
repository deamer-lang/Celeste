parser grammar CelesteParser;
options
{
	tokenVocab = CelesteLexer;
}


program:
	deamerreserved_star__stmt__ 

	;

deamerreserved_star__stmt__:
	stmt deamerreserved_star__stmt__ 
	| 

	;

stmt:
	class_declaration 
	| enum_declaration 
	| function_declaration 
	| function_implementation 
	| meta_declaration 

	;

meta_declaration:
	LEFT_SQUARE_BRACKET deamerreserved_star__expression__ deamerreserved_arrow__RIGHT_SQUARE_BRACKET__ 
	| LEFT_SQUARE_BRACKET deamerreserved_star__expression__ RIGHT_SQUARE_BRACKET class_declaration 
	| LEFT_SQUARE_BRACKET deamerreserved_star__expression__ RIGHT_SQUARE_BRACKET enum_declaration 
	| LEFT_SQUARE_BRACKET deamerreserved_star__expression__ RIGHT_SQUARE_BRACKET function_declaration 

	;

deamerreserved_star__expression__:
	expression deamerreserved_star__expression__ 
	| 

	;

deamerreserved_arrow__RIGHT_SQUARE_BRACKET__:
	RIGHT_SQUARE_BRACKET deamerreserved_star__meta_declaration__ 

	;

deamerreserved_star__meta_declaration__:
	meta_declaration deamerreserved_star__meta_declaration__ 
	| 

	;

expression:
	expression PLUS expression 
	| expression MINUS expression 
	| expression DIVIDE expression 
	| expression MULTIPLY expression 
	| expression USERDEFINED_OPERATOR expression 
	| VARNAME 
	| NUMBER 
	| DECIMAL 
	| TEXT 

	;

class_declaration:
	CLASS VARNAME COLON deamerreserved_arrow__base_type__ base_type class_block 
	| CLASS VARNAME class_block 

	;

deamerreserved_arrow__base_type__:
	base_type deamerreserved_star__COMMA__ 

	;

deamerreserved_star__COMMA__:
	COMMA deamerreserved_star__COMMA__ 
	| 

	;

base_type:
	VARNAME 

	;

class_block:
	LEFT_BRACKET deamerreserved_star__class_stmt__ RIGHT_BRACKET 

	;

deamerreserved_star__class_stmt__:
	class_stmt deamerreserved_star__class_stmt__ 
	| 

	;

enum_declaration:
	ENUM VARNAME enum_block 

	;

enum_block:
	LEFT_BRACKET deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____ RIGHT_BRACKET 

	;

deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____:
	enum_stmt deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____ 
	| COMMA deamerreserved_star__deamerreserved_or__enum_stmt__COMMA____ 
	| 

	;

function_declaration:
	FUNCTION function_name LEFT_PARANTHESIS deamerreserved_arrow__deamerreserved_optional__function_argument____ RIGHT_PARANTHESIS return_type SEMICOLON 
	| FUNCTION function_name LEFT_PARANTHESIS deamerreserved_arrow__deamerreserved_optional__function_argument____ RIGHT_PARANTHESIS SEMICOLON 

	;

deamerreserved_arrow__deamerreserved_optional__function_argument____:
	function_argument deamerreserved_star__COMMA__function_argument__ 
	| 

	;

deamerreserved_star__COMMA__function_argument__:
	COMMA function_argument deamerreserved_star__COMMA__function_argument__ 
	| 

	;

function_implementation:
	FUNCTION function_name LEFT_PARANTHESIS deamerreserved_arrow__deamerreserved_optional__function_argument____ RIGHT_PARANTHESIS return_type function_block 
	| FUNCTION function_name LEFT_PARANTHESIS deamerreserved_arrow__deamerreserved_optional__function_argument____ RIGHT_PARANTHESIS function_block 

	;

function_argument:
	type VARNAME EQ expression 
	| type VARNAME 

	;

type:
	VARNAME 

	;

function_name:
	VARNAME 

	;

return_type:
	VARNAME 

	;

function_block:
	LEFT_BRACKET deamerreserved_star__function_stmt__ RIGHT_BRACKET 

	;

deamerreserved_star__function_stmt__:
	function_stmt deamerreserved_star__function_stmt__ 
	| 

	;

class_stmt:
	function_declaration 
	| function_implementation 

	;

enum_stmt:
	VARNAME 

	;

function_stmt:
	logical_stmt 

	;

logical_stmt:
	variable_declaration 
	| variable_initialization 
	| condtional_declaration 

	;

condtional_declaration:
	IF LEFT_PARANTHESIS expression RIGHT_PARANTHESIS conditional_block 
	| ELSE IF LEFT_PARANTHESIS expression RIGHT_PARANTHESIS conditional_block 
	| ELSE LEFT_PARANTHESIS expression RIGHT_PARANTHESIS conditional_block 

	;

conditional_block:
	LEFT_BRACKET deamerreserved_star__condtional_stmt__ RIGHT_BRACKET 

	;

deamerreserved_star__condtional_stmt__:
	condtional_stmt deamerreserved_star__condtional_stmt__ 
	| 

	;

condtional_stmt:
	logical_stmt 

	;

variable_declaration:
	type VARNAME SEMICOLON 

	;

variable_initialization:
	type VARNAME EQ expression SEMICOLON 

	;
