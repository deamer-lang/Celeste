# Terminal: **[FOR](./FOR.md)**

Overview of the terminal: **[FOR](./FOR.md)**.



## **Neighbours**

| Relative position | Name                                          |
| ----------------- | --------------------------------------------- |
| Above             | [RETURN](./RETURN.md) |
| This              | **[FOR](./FOR.md)** |
| Below             | [IF](./IF.md) |



## **This**

| Name:                                       | Value:          | Abstraction:    |
| ------------------------------------------- | --------------- | --------------- |
| **[FOR](./FOR.md)** | [Ff][Oo][Rr] | Standard |



## **Who references this**

### NonTerminals


#### [for_iteration_loop](./../Grammar/for_iteration_loop.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [FOR](./FOR.md) [expression](./../Grammar/expression.md) [LEFT_BRACKET](./LEFT_BRACKET.md) [for_block](./../Grammar/for_block.md) [RIGHT_BRACKET](./RIGHT_BRACKET.md)  |


#### [for_each_loop](./../Grammar/for_each_loop.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [FOR](./FOR.md) [LEFT_PARANTHESIS](./LEFT_PARANTHESIS.md) [type](./../Grammar/type.md) [for_variable](./../Grammar/for_variable.md) [IN](./IN.md) [iterator](./../Grammar/iterator.md) [RIGHT_PARANTHESIS](./RIGHT_PARANTHESIS.md) [LEFT_BRACKET](./LEFT_BRACKET.md) [for_block](./../Grammar/for_block.md) [RIGHT_BRACKET](./RIGHT_BRACKET.md)  |
| [FOR](./FOR.md) [LEFT_PARANTHESIS](./LEFT_PARANTHESIS.md) [type](./../Grammar/type.md) [for_variable](./../Grammar/for_variable.md) [COLON](./COLON.md) [iterator](./../Grammar/iterator.md) [RIGHT_PARANTHESIS](./RIGHT_PARANTHESIS.md) [LEFT_BRACKET](./LEFT_BRACKET.md) [for_block](./../Grammar/for_block.md) [RIGHT_BRACKET](./RIGHT_BRACKET.md)  |


#### [symbol_name_secondary](./../Grammar/symbol_name_secondary.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [FOR](./FOR.md)  |


#### [symbol_name](./../Grammar/symbol_name.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [FOR](./FOR.md)  |



