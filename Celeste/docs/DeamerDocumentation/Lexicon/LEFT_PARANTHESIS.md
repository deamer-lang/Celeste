# Terminal: **[LEFT_PARANTHESIS](./LEFT_PARANTHESIS.md)**

Overview of the terminal: **[LEFT_PARANTHESIS](./LEFT_PARANTHESIS.md)**.



## **Neighbours**

| Relative position | Name                                          |
| ----------------- | --------------------------------------------- |
| Above             | [RIGHT_SQUARE_BRACKET](./RIGHT_SQUARE_BRACKET.md) |
| This              | **[LEFT_PARANTHESIS](./LEFT_PARANTHESIS.md)** |
| Below             | [RIGHT_PARANTHESIS](./RIGHT_PARANTHESIS.md) |



## **This**

| Name:                                       | Value:          | Abstraction:    |
| ------------------------------------------- | --------------- | --------------- |
| **[LEFT_PARANTHESIS](./LEFT_PARANTHESIS.md)** | [(] | Ignore |



## **Who references this**

### NonTerminals


#### [function_declaration](./../Grammar/function_declaration.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [FUNCTION](./FUNCTION.md) [function_name](./../Grammar/function_name.md) [LEFT_PARANTHESIS](./LEFT_PARANTHESIS.md) [deamerreserved_arrow__deamerreserved_optional__function_argument____](./../Grammar/deamerreserved_arrow__deamerreserved_optional__function_argument____.md) [RIGHT_PARANTHESIS](./RIGHT_PARANTHESIS.md) [return_type](./../Grammar/return_type.md) [SEMICOLON](./SEMICOLON.md)  |
| [FUNCTION](./FUNCTION.md) [function_name](./../Grammar/function_name.md) [LEFT_PARANTHESIS](./LEFT_PARANTHESIS.md) [deamerreserved_arrow__deamerreserved_optional__function_argument____](./../Grammar/deamerreserved_arrow__deamerreserved_optional__function_argument____.md) [RIGHT_PARANTHESIS](./RIGHT_PARANTHESIS.md) [SEMICOLON](./SEMICOLON.md)  |


#### [function_implementation](./../Grammar/function_implementation.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [FUNCTION](./FUNCTION.md) [function_name](./../Grammar/function_name.md) [LEFT_PARANTHESIS](./LEFT_PARANTHESIS.md) [deamerreserved_arrow__deamerreserved_optional__function_argument____](./../Grammar/deamerreserved_arrow__deamerreserved_optional__function_argument____.md) [RIGHT_PARANTHESIS](./RIGHT_PARANTHESIS.md) [return_type](./../Grammar/return_type.md) [function_block](./../Grammar/function_block.md)  |
| [FUNCTION](./FUNCTION.md) [function_name](./../Grammar/function_name.md) [LEFT_PARANTHESIS](./LEFT_PARANTHESIS.md) [deamerreserved_arrow__deamerreserved_optional__function_argument____](./../Grammar/deamerreserved_arrow__deamerreserved_optional__function_argument____.md) [RIGHT_PARANTHESIS](./RIGHT_PARANTHESIS.md) [function_block](./../Grammar/function_block.md)  |


#### [condtional_declaration](./../Grammar/condtional_declaration.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [IF](./IF.md) [LEFT_PARANTHESIS](./LEFT_PARANTHESIS.md) [expression](./../Grammar/expression.md) [RIGHT_PARANTHESIS](./RIGHT_PARANTHESIS.md) [conditional_block](./../Grammar/conditional_block.md)  |
| [ELSE](./ELSE.md) [IF](./IF.md) [LEFT_PARANTHESIS](./LEFT_PARANTHESIS.md) [expression](./../Grammar/expression.md) [RIGHT_PARANTHESIS](./RIGHT_PARANTHESIS.md) [conditional_block](./../Grammar/conditional_block.md)  |
| [ELSE](./ELSE.md) [LEFT_PARANTHESIS](./LEFT_PARANTHESIS.md) [expression](./../Grammar/expression.md) [RIGHT_PARANTHESIS](./RIGHT_PARANTHESIS.md) [conditional_block](./../Grammar/conditional_block.md)  |



