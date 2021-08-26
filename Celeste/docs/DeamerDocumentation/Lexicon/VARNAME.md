# Terminal: **[VARNAME](./VARNAME.md)**

Overview of the terminal: **[VARNAME](./VARNAME.md)**.



## **Neighbours**

| Relative position | Name                                          |
| ----------------- | --------------------------------------------- |
| Above             | [USERDEFINED_OPERATOR](./USERDEFINED_OPERATOR.md) |
| This              | **[VARNAME](./VARNAME.md)** |
| Below             | [NUMBER](./NUMBER.md) |



## **This**

| Name:                                       | Value:          | Abstraction:    |
| ------------------------------------------- | --------------- | --------------- |
| **[VARNAME](./VARNAME.md)** | [a-zA-Z_]+[a-zA-Z_0-9]* | Standard |



## **Who references this**

### NonTerminals


#### [expression](./../Grammar/expression.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [VARNAME](./VARNAME.md)  |


#### [class_declaration](./../Grammar/class_declaration.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [CLASS](./CLASS.md) [VARNAME](./VARNAME.md) [COLON](./COLON.md) [deamerreserved_arrow__base_type__](./../Grammar/deamerreserved_arrow__base_type__.md) [base_type](./../Grammar/base_type.md) [class_block](./../Grammar/class_block.md)  |
| [CLASS](./CLASS.md) [VARNAME](./VARNAME.md) [class_block](./../Grammar/class_block.md)  |


#### [base_type](./../Grammar/base_type.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [VARNAME](./VARNAME.md)  |


#### [enum_declaration](./../Grammar/enum_declaration.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [ENUM](./ENUM.md) [VARNAME](./VARNAME.md) [enum_block](./../Grammar/enum_block.md)  |


#### [function_argument](./../Grammar/function_argument.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [type](./../Grammar/type.md) [VARNAME](./VARNAME.md) [EQ](./EQ.md) [expression](./../Grammar/expression.md)  |
| [type](./../Grammar/type.md) [VARNAME](./VARNAME.md)  |


#### [type](./../Grammar/type.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [VARNAME](./VARNAME.md)  |


#### [function_name](./../Grammar/function_name.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [VARNAME](./VARNAME.md)  |


#### [return_type](./../Grammar/return_type.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [VARNAME](./VARNAME.md)  |


#### [enum_stmt](./../Grammar/enum_stmt.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [VARNAME](./VARNAME.md)  |


#### [variable_declaration](./../Grammar/variable_declaration.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [type](./../Grammar/type.md) [VARNAME](./VARNAME.md) [SEMICOLON](./SEMICOLON.md)  |


#### [variable_initialization](./../Grammar/variable_initialization.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [type](./../Grammar/type.md) [VARNAME](./VARNAME.md) [EQ](./EQ.md) [expression](./../Grammar/expression.md) [SEMICOLON](./SEMICOLON.md)  |



