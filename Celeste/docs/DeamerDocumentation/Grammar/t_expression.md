# NonTerminal: **[t_expression](./t_expression.md)**

Overview of the nonterminal: **[t_expression](./t_expression.md)**



## This

| Name:                | Abstraction:    | Is Inlined |
| -------------------- | --------------- | ---------- |
| t_expression | Standard | No |



## ProductionRules

| ProductionRule |
| ---- |
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




## Who references this

### NonTerminals


#### [expression_no_value](./../Grammar/expression_no_value.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [expression_no_value](./expression_no_value.md) [PLUS](./../Lexicon/PLUS.md) [t_expression](./t_expression.md)  |
| [expression_no_value](./expression_no_value.md) [MINUS](./../Lexicon/MINUS.md) [t_expression](./t_expression.md)  |
| [t_expression](./t_expression.md)  |


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



