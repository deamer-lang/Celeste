# Terminal: **[SEMICOLON](./SEMICOLON.md)**

Overview of the terminal: **[SEMICOLON](./SEMICOLON.md)**.



## **Neighbours**

| Relative position | Name                                          |
| ----------------- | --------------------------------------------- |
| Above             | [COLON](./COLON.md) |
| This              | **[SEMICOLON](./SEMICOLON.md)** |
| Below             | [COMMA](./COMMA.md) |



## **This**

| Name:                                       | Value:          | Abstraction:    |
| ------------------------------------------- | --------------- | --------------- |
| **[SEMICOLON](./SEMICOLON.md)** | [;] | Standard |



## **Who references this**

### NonTerminals


#### [function_declaration](./../Grammar/function_declaration.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [FUNCTION](./FUNCTION.md) [function_name](./../Grammar/function_name.md) [LEFT_PARANTHESIS](./LEFT_PARANTHESIS.md) [deamerreserved_arrow__deamerreserved_optional__function_argument____](./../Grammar/deamerreserved_arrow__deamerreserved_optional__function_argument____.md) [RIGHT_PARANTHESIS](./RIGHT_PARANTHESIS.md) [return_type](./../Grammar/return_type.md) [SEMICOLON](./SEMICOLON.md)  |
| [FUNCTION](./FUNCTION.md) [function_name](./../Grammar/function_name.md) [LEFT_PARANTHESIS](./LEFT_PARANTHESIS.md) [deamerreserved_arrow__deamerreserved_optional__function_argument____](./../Grammar/deamerreserved_arrow__deamerreserved_optional__function_argument____.md) [RIGHT_PARANTHESIS](./RIGHT_PARANTHESIS.md) [SEMICOLON](./SEMICOLON.md)  |


#### [variable_declaration](./../Grammar/variable_declaration.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [type](./../Grammar/type.md) [VARNAME](./VARNAME.md) [SEMICOLON](./SEMICOLON.md)  |


#### [variable_initialization](./../Grammar/variable_initialization.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [type](./../Grammar/type.md) [VARNAME](./VARNAME.md) [EQ](./EQ.md) [expression](./../Grammar/expression.md) [SEMICOLON](./SEMICOLON.md)  |



