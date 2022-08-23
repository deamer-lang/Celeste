# Terminal: **[EQ](./EQ.md)**

Overview of the terminal: **[EQ](./EQ.md)**.



## **Neighbours**

| Relative position | Name                                          |
| ----------------- | --------------------------------------------- |
| Above             | [EQEQ](./EQEQ.md) |
| This              | **[EQ](./EQ.md)** |
| Below             | [NOTEQ](./NOTEQ.md) |



## **This**

| Name:                                       | Value:          | Abstraction:    |
| ------------------------------------------- | --------------- | --------------- |
| **[EQ](./EQ.md)** | [=] | NoValue |



## **Who references this**

### NonTerminals


#### [assignment_operator](./../Grammar/assignment_operator.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [EQ](./EQ.md)  |


#### [variable_declaration](./../Grammar/variable_declaration.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [type](./../Grammar/type.md) [variable_name](./../Grammar/variable_name.md) [EQ](./EQ.md) [value_list](./../Grammar/value_list.md)  |


#### [function_argument](./../Grammar/function_argument.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [function_argument_type](./../Grammar/function_argument_type.md) [function_argument_name](./../Grammar/function_argument_name.md) [condition_modifier_function_call](./../Grammar/condition_modifier_function_call.md) [EQ](./EQ.md) [full_value](./../Grammar/full_value.md)  |
| [function_argument_type](./../Grammar/function_argument_type.md) [function_argument_name](./../Grammar/function_argument_name.md) [EQ](./EQ.md) [full_value](./../Grammar/full_value.md)  |


#### [class_stmt_member_field_declaration](./../Grammar/class_stmt_member_field_declaration.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [type](./../Grammar/type.md) [member_field_name](./../Grammar/member_field_name.md) [EQ](./EQ.md) [value_list](./../Grammar/value_list.md) [COMMA](./COMMA.md)  |
| [type](./../Grammar/type.md) [member_field_name](./../Grammar/member_field_name.md) [EQ](./EQ.md) [value_list](./../Grammar/value_list.md) [SEMICOLON](./SEMICOLON.md)  |
| [type](./../Grammar/type.md) [member_field_name](./../Grammar/member_field_name.md) [EQ](./EQ.md) [value_list](./../Grammar/value_list.md)  |


#### [enumeration](./../Grammar/enumeration.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [enumeration_name](./../Grammar/enumeration_name.md) [EQ](./EQ.md) [enumeration_value](./../Grammar/enumeration_value.md) [COMMA](./COMMA.md)  |
| [enumeration_name](./../Grammar/enumeration_name.md) [EQ](./EQ.md) [enumeration_value](./../Grammar/enumeration_value.md)  |



