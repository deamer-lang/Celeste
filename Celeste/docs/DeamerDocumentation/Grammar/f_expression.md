# NonTerminal: **[f_expression](./f_expression.md)**

Overview of the nonterminal: **[f_expression](./f_expression.md)**



## This

| Name:                | Abstraction:    | Is Inlined |
| -------------------- | --------------- | ---------- |
| f_expression | Standard | No |



## ProductionRules

| ProductionRule |
| ---- |
| [LEFT_PARANTHESIS](./../Lexicon/LEFT_PARANTHESIS.md) [expression_no_value](./expression_no_value.md) [RIGHT_PARANTHESIS](./../Lexicon/RIGHT_PARANTHESIS.md)  |
| [value](./value.md)  |




## Who references this

### NonTerminals


#### [t_expression](./../Grammar/t_expression.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [t_expression](./t_expression.md) [MULTIPLY](./../Lexicon/MULTIPLY.md) [f_expression](./f_expression.md)  |
| [t_expression](./t_expression.md) [DIVIDE](./../Lexicon/DIVIDE.md) [f_expression](./f_expression.md)  |
| [t_expression](./t_expression.md) [LTEQ](./../Lexicon/LTEQ.md) [f_expression](./f_expression.md)  |
| [t_expression](./t_expression.md) [GTEQ](./../Lexicon/GTEQ.md) [f_expression](./f_expression.md)  |
| [t_expression](./t_expression.md) [LT](./../Lexicon/LT.md) [f_expression](./f_expression.md)  |
| [t_expression](./t_expression.md) [GT](./../Lexicon/GT.md) [f_expression](./f_expression.md)  |
| [t_expression](./t_expression.md) [EQEQ](./../Lexicon/EQEQ.md) [f_expression](./f_expression.md)  |
| [t_expression](./t_expression.md) [NOTEQ](./../Lexicon/NOTEQ.md) [f_expression](./f_expression.md)  |
| [NOT](./../Lexicon/NOT.md) [f_expression](./f_expression.md)  |
| [f_expression](./f_expression.md)  |



