# NonTerminal: **[expression_no_value](./expression_no_value.md)**

Overview of the nonterminal: **[expression_no_value](./expression_no_value.md)**



## This

| Name:                | Abstraction:    | Is Inlined |
| -------------------- | --------------- | ---------- |
| expression_no_value | Standard | No |



## ProductionRules

| ProductionRule |
| ---- |
| [expression_no_value](./expression_no_value.md) [PLUS](./../Lexicon/PLUS.md) [t_expression](./t_expression.md)  |
| [expression_no_value](./expression_no_value.md) [MINUS](./../Lexicon/MINUS.md) [t_expression](./t_expression.md)  |
| [t_expression](./t_expression.md)  |




## Who references this

### NonTerminals


#### [expression](./../Grammar/expression.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [expression_no_value](./expression_no_value.md)  |


#### [expression_no_value](./../Grammar/expression_no_value.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [expression_no_value](./expression_no_value.md) [PLUS](./../Lexicon/PLUS.md) [t_expression](./t_expression.md)  |
| [expression_no_value](./expression_no_value.md) [MINUS](./../Lexicon/MINUS.md) [t_expression](./t_expression.md)  |


#### [f_expression](./../Grammar/f_expression.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [LEFT_PARANTHESIS](./../Lexicon/LEFT_PARANTHESIS.md) [expression_no_value](./expression_no_value.md) [RIGHT_PARANTHESIS](./../Lexicon/RIGHT_PARANTHESIS.md)  |



