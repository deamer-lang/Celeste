# NonTerminal: **[expression](./expression.md)**

Overview of the nonterminal: **[expression](./expression.md)**



## This

| Name:                | Abstraction:    | Is Inlined |
| -------------------- | --------------- | ---------- |
| expression | Standard | No |



## ProductionRules

| ProductionRule |
| ---- |
| [expression](./expression.md) [PLUS](./../Lexicon/PLUS.md) [expression](./expression.md)  |
| [expression](./expression.md) [MINUS](./../Lexicon/MINUS.md) [expression](./expression.md)  |
| [expression](./expression.md) [DIVIDE](./../Lexicon/DIVIDE.md) [expression](./expression.md)  |
| [expression](./expression.md) [MULTIPLY](./../Lexicon/MULTIPLY.md) [expression](./expression.md)  |
| [expression](./expression.md) [USERDEFINED_OPERATOR](./../Lexicon/USERDEFINED_OPERATOR.md) [expression](./expression.md)  |
| [VARNAME](./../Lexicon/VARNAME.md)  |
| [NUMBER](./../Lexicon/NUMBER.md)  |
| [DECIMAL](./../Lexicon/DECIMAL.md)  |
| [TEXT](./../Lexicon/TEXT.md)  |




## Who references this

### NonTerminals


#### [deamerreserved_star__expression__](./../Grammar/deamerreserved_star__expression__.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [expression](./expression.md) [deamerreserved_star__expression__](./deamerreserved_star__expression__.md)  |


#### [expression](./../Grammar/expression.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [expression](./expression.md) [PLUS](./../Lexicon/PLUS.md) [expression](./expression.md)  |
| [expression](./expression.md) [MINUS](./../Lexicon/MINUS.md) [expression](./expression.md)  |
| [expression](./expression.md) [DIVIDE](./../Lexicon/DIVIDE.md) [expression](./expression.md)  |
| [expression](./expression.md) [MULTIPLY](./../Lexicon/MULTIPLY.md) [expression](./expression.md)  |
| [expression](./expression.md) [USERDEFINED_OPERATOR](./../Lexicon/USERDEFINED_OPERATOR.md) [expression](./expression.md)  |


#### [function_argument](./../Grammar/function_argument.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [function_arg_type](./function_arg_type.md) [function_arg_name](./function_arg_name.md) [EQ](./../Lexicon/EQ.md) [expression](./expression.md)  |


#### [condtional_declaration](./../Grammar/condtional_declaration.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [IF](./../Lexicon/IF.md) [LEFT_PARANTHESIS](./../Lexicon/LEFT_PARANTHESIS.md) [expression](./expression.md) [RIGHT_PARANTHESIS](./../Lexicon/RIGHT_PARANTHESIS.md) [conditional_block](./conditional_block.md)  |
| [ELSE](./../Lexicon/ELSE.md) [IF](./../Lexicon/IF.md) [LEFT_PARANTHESIS](./../Lexicon/LEFT_PARANTHESIS.md) [expression](./expression.md) [RIGHT_PARANTHESIS](./../Lexicon/RIGHT_PARANTHESIS.md) [conditional_block](./conditional_block.md)  |
| [ELSE](./../Lexicon/ELSE.md) [LEFT_PARANTHESIS](./../Lexicon/LEFT_PARANTHESIS.md) [expression](./expression.md) [RIGHT_PARANTHESIS](./../Lexicon/RIGHT_PARANTHESIS.md) [conditional_block](./conditional_block.md)  |


#### [variable_initialization](./../Grammar/variable_initialization.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [type](./type.md) [VARNAME](./../Lexicon/VARNAME.md) [EQ](./../Lexicon/EQ.md) [expression](./expression.md) [SEMICOLON](./../Lexicon/SEMICOLON.md)  |



