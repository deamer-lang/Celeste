# NonTerminal: **[type](./type.md)**

Overview of the nonterminal: **[type](./type.md)**



## This

| Name:                | Abstraction:    | Is Inlined |
| -------------------- | --------------- | ---------- |
| type | Standard | No |



## ProductionRules

| ProductionRule |
| ---- |
| [deamerreserved_star__type_modifier__](./deamerreserved_star__type_modifier__.md) [symbol_reference](./symbol_reference.md)  |
| [deamerreserved_star__type_modifier__](./deamerreserved_star__type_modifier__.md) [AUTOTYPE](./../Lexicon/AUTOTYPE.md) [array_declaration](./array_declaration.md)  |
| [deamerreserved_star__type_modifier__](./deamerreserved_star__type_modifier__.md) [AUTOTYPE](./../Lexicon/AUTOTYPE.md)  |
| [deamerreserved_star__type_modifier__](./deamerreserved_star__type_modifier__.md) [AUTO](./../Lexicon/AUTO.md) [array_declaration](./array_declaration.md)  |
| [deamerreserved_star__type_modifier__](./deamerreserved_star__type_modifier__.md) [AUTO](./../Lexicon/AUTO.md)  |




## Who references this

### NonTerminals


#### [for_each_loop](./../Grammar/for_each_loop.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [FOR](./../Lexicon/FOR.md) [LEFT_PARANTHESIS](./../Lexicon/LEFT_PARANTHESIS.md) [type](./type.md) [for_variable](./for_variable.md) [IN](./../Lexicon/IN.md) [iterator](./iterator.md) [RIGHT_PARANTHESIS](./../Lexicon/RIGHT_PARANTHESIS.md) [LEFT_BRACKET](./../Lexicon/LEFT_BRACKET.md) [for_block](./for_block.md) [RIGHT_BRACKET](./../Lexicon/RIGHT_BRACKET.md)  |
| [FOR](./../Lexicon/FOR.md) [LEFT_PARANTHESIS](./../Lexicon/LEFT_PARANTHESIS.md) [type](./type.md) [for_variable](./for_variable.md) [COLON](./../Lexicon/COLON.md) [iterator](./iterator.md) [RIGHT_PARANTHESIS](./../Lexicon/RIGHT_PARANTHESIS.md) [LEFT_BRACKET](./../Lexicon/LEFT_BRACKET.md) [for_block](./for_block.md) [RIGHT_BRACKET](./../Lexicon/RIGHT_BRACKET.md)  |


#### [code_block_argument](./../Grammar/code_block_argument.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [type](./type.md) [code_block_argument_name](./code_block_argument_name.md)  |
| [type](./type.md)  |


#### [variable_declaration](./../Grammar/variable_declaration.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [attribute_section](./attribute_section.md) [type](./type.md) [variable_name](./variable_name.md) [EQ](./../Lexicon/EQ.md) [value_list](./value_list.md)  |
| [attribute_section](./attribute_section.md) [type](./type.md) [variable_name](./variable_name.md)  |
| [type](./type.md) [variable_name](./variable_name.md) [EQ](./../Lexicon/EQ.md) [value_list](./value_list.md)  |
| [type](./type.md) [variable_name](./variable_name.md)  |


#### [return_type](./../Grammar/return_type.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [type](./type.md)  |


#### [function_argument_type](./../Grammar/function_argument_type.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [type](./type.md)  |


#### [template_parameter](./../Grammar/template_parameter.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [type](./type.md) [template_parameter_name](./template_parameter_name.md)  |


#### [class_stmt_member_field_declaration](./../Grammar/class_stmt_member_field_declaration.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [attribute_section](./attribute_section.md) [type](./type.md) [member_field_name](./member_field_name.md) [EQ](./../Lexicon/EQ.md) [value_list](./value_list.md) [COMMA](./../Lexicon/COMMA.md)  |
| [attribute_section](./attribute_section.md) [type](./type.md) [member_field_name](./member_field_name.md) [COMMA](./../Lexicon/COMMA.md)  |
| [type](./type.md) [member_field_name](./member_field_name.md) [EQ](./../Lexicon/EQ.md) [value_list](./value_list.md) [COMMA](./../Lexicon/COMMA.md)  |
| [type](./type.md) [member_field_name](./member_field_name.md) [COMMA](./../Lexicon/COMMA.md)  |
| [attribute_section](./attribute_section.md) [type](./type.md) [member_field_name](./member_field_name.md) [EQ](./../Lexicon/EQ.md) [value_list](./value_list.md) [SEMICOLON](./../Lexicon/SEMICOLON.md)  |
| [attribute_section](./attribute_section.md) [type](./type.md) [member_field_name](./member_field_name.md) [SEMICOLON](./../Lexicon/SEMICOLON.md)  |
| [type](./type.md) [member_field_name](./member_field_name.md) [EQ](./../Lexicon/EQ.md) [value_list](./value_list.md) [SEMICOLON](./../Lexicon/SEMICOLON.md)  |
| [type](./type.md) [member_field_name](./member_field_name.md) [SEMICOLON](./../Lexicon/SEMICOLON.md)  |
| [attribute_section](./attribute_section.md) [type](./type.md) [member_field_name](./member_field_name.md) [EQ](./../Lexicon/EQ.md) [value_list](./value_list.md)  |
| [attribute_section](./attribute_section.md) [type](./type.md) [member_field_name](./member_field_name.md)  |
| [type](./type.md) [member_field_name](./member_field_name.md) [EQ](./../Lexicon/EQ.md) [value_list](./value_list.md)  |
| [type](./type.md) [member_field_name](./member_field_name.md)  |



