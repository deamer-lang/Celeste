# NonTerminal: **[value_list](./value_list.md)**

Overview of the nonterminal: **[value_list](./value_list.md)**



## This

| Name:                | Abstraction:    | Is Inlined |
| -------------------- | --------------- | ---------- |
| value_list | Standard | No |



## ProductionRules

| ProductionRule |
| ---- |
| [deamerreserved_arrow__full_value__](./deamerreserved_arrow__full_value__.md) [COMMA](./../Lexicon/COMMA.md)  |
| [deamerreserved_arrow__full_value__](./deamerreserved_arrow__full_value__.md)  |




## Who references this

### NonTerminals


#### [variable_declaration](./../Grammar/variable_declaration.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [type](./type.md) [variable_name](./variable_name.md) [EQ](./../Lexicon/EQ.md) [value_list](./value_list.md)  |


#### [class_stmt_member_field_declaration](./../Grammar/class_stmt_member_field_declaration.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [type](./type.md) [member_field_name](./member_field_name.md) [EQ](./../Lexicon/EQ.md) [value_list](./value_list.md) [COMMA](./../Lexicon/COMMA.md)  |
| [type](./type.md) [member_field_name](./member_field_name.md) [EQ](./../Lexicon/EQ.md) [value_list](./value_list.md) [SEMICOLON](./../Lexicon/SEMICOLON.md)  |
| [type](./type.md) [member_field_name](./member_field_name.md) [EQ](./../Lexicon/EQ.md) [value_list](./value_list.md)  |



