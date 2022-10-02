# NonTerminal: **[expression](./expression.md)**

Overview of the nonterminal: **[expression](./expression.md)**



## This

| Name:                | Abstraction:    | Is Inlined |
| -------------------- | --------------- | ---------- |
| expression | Standard | No |



## ProductionRules

| ProductionRule |
| ---- |
| [expression_no_value](./expression_no_value.md)  |




## Who references this

### NonTerminals


#### [assignment](./../Grammar/assignment.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [symbol_reference](./symbol_reference.md) [assignment_operator](./assignment_operator.md) [expression](./expression.md)  |


#### [conditional_if](./../Grammar/conditional_if.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [IF](./../Lexicon/IF.md) [LEFT_PARANTHESIS](./../Lexicon/LEFT_PARANTHESIS.md) [expression](./expression.md) [RIGHT_PARANTHESIS](./../Lexicon/RIGHT_PARANTHESIS.md) [LEFT_BRACKET](./../Lexicon/LEFT_BRACKET.md) [conditional_block](./conditional_block.md) [RIGHT_BRACKET](./../Lexicon/RIGHT_BRACKET.md)  |


#### [conditional_else_if](./../Grammar/conditional_else_if.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [ELSEIF](./../Lexicon/ELSEIF.md) [LEFT_PARANTHESIS](./../Lexicon/LEFT_PARANTHESIS.md) [expression](./expression.md) [RIGHT_PARANTHESIS](./../Lexicon/RIGHT_PARANTHESIS.md) [LEFT_BRACKET](./../Lexicon/LEFT_BRACKET.md) [conditional_block](./conditional_block.md) [RIGHT_BRACKET](./../Lexicon/RIGHT_BRACKET.md)  |
| [ELSE](./../Lexicon/ELSE.md) [IF](./../Lexicon/IF.md) [LEFT_PARANTHESIS](./../Lexicon/LEFT_PARANTHESIS.md) [expression](./expression.md) [RIGHT_PARANTHESIS](./../Lexicon/RIGHT_PARANTHESIS.md) [LEFT_BRACKET](./../Lexicon/LEFT_BRACKET.md) [conditional_block](./conditional_block.md) [RIGHT_BRACKET](./../Lexicon/RIGHT_BRACKET.md)  |


#### [return_statement](./../Grammar/return_statement.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [RETURN](./../Lexicon/RETURN.md) [expression](./expression.md)  |


#### [for_iteration_loop](./../Grammar/for_iteration_loop.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [FOR](./../Lexicon/FOR.md) [expression](./expression.md) [LEFT_BRACKET](./../Lexicon/LEFT_BRACKET.md) [for_block](./for_block.md) [RIGHT_BRACKET](./../Lexicon/RIGHT_BRACKET.md)  |


#### [array_declaration](./../Grammar/array_declaration.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [LEFT_SQUARE_BRACKET](./../Lexicon/LEFT_SQUARE_BRACKET.md) [expression](./expression.md) [RIGHT_SQUARE_BRACKET](./../Lexicon/RIGHT_SQUARE_BRACKET.md)  |


#### [attribute_argument](./../Grammar/attribute_argument.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [expression](./expression.md)  |


#### [attribute_template_argument](./../Grammar/attribute_template_argument.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [expression](./expression.md)  |


#### [deamerreserved_arrow__expression__](./../Grammar/deamerreserved_arrow__expression__.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [expression](./expression.md) [deamerreserved_star__COMMA__expression__](./deamerreserved_star__COMMA__expression__.md)  |


#### [deamerreserved_star__COMMA__expression__](./../Grammar/deamerreserved_star__COMMA__expression__.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [COMMA](./../Lexicon/COMMA.md) [expression](./expression.md) [deamerreserved_star__COMMA__expression__](./deamerreserved_star__COMMA__expression__.md)  |


#### [index_access](./../Grammar/index_access.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [LEFT_SQUARE_BRACKET](./../Lexicon/LEFT_SQUARE_BRACKET.md) [expression](./expression.md) [RIGHT_SQUARE_BRACKET](./../Lexicon/RIGHT_SQUARE_BRACKET.md)  |


#### [anonymous_access](./../Grammar/anonymous_access.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [LEFT_BRACKET](./../Lexicon/LEFT_BRACKET.md) [expression](./expression.md) [RIGHT_BRACKET](./../Lexicon/RIGHT_BRACKET.md)  |


#### [full_value](./../Grammar/full_value.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [expression](./expression.md)  |



