# Terminal: **[IF](./IF.md)**

Overview of the terminal: **[IF](./IF.md)**.



## **Neighbours**

| Relative position | Name                                          |
| ----------------- | --------------------------------------------- |
| Above             | [FOR](./FOR.md) |
| This              | **[IF](./IF.md)** |
| Below             | [ELSEIF](./ELSEIF.md) |



## **This**

| Name:                                       | Value:          | Abstraction:    |
| ------------------------------------------- | --------------- | --------------- |
| **[IF](./IF.md)** | [Ii][Ff] | Standard |



## **Who references this**

### NonTerminals


#### [conditional_if](./../Grammar/conditional_if.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [IF](./IF.md) [LEFT_PARANTHESIS](./LEFT_PARANTHESIS.md) [expression](./../Grammar/expression.md) [RIGHT_PARANTHESIS](./RIGHT_PARANTHESIS.md) [LEFT_BRACKET](./LEFT_BRACKET.md) [conditional_block](./../Grammar/conditional_block.md) [RIGHT_BRACKET](./RIGHT_BRACKET.md)  |


#### [conditional_else_if](./../Grammar/conditional_else_if.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [ELSE](./ELSE.md) [IF](./IF.md) [LEFT_PARANTHESIS](./LEFT_PARANTHESIS.md) [expression](./../Grammar/expression.md) [RIGHT_PARANTHESIS](./RIGHT_PARANTHESIS.md) [LEFT_BRACKET](./LEFT_BRACKET.md) [conditional_block](./../Grammar/conditional_block.md) [RIGHT_BRACKET](./RIGHT_BRACKET.md)  |


#### [symbol_name_secondary](./../Grammar/symbol_name_secondary.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [IF](./IF.md)  |



