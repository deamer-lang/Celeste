# NonTerminal: **[class_stmt_member_field_declaration](./class_stmt_member_field_declaration.md)**

Overview of the nonterminal: **[class_stmt_member_field_declaration](./class_stmt_member_field_declaration.md)**



## This

| Name:                | Abstraction:    | Is Inlined |
| -------------------- | --------------- | ---------- |
| class_stmt_member_field_declaration | Standard | No |



## ProductionRules

| ProductionRule |
| ---- |
| [attribute_section](./attribute_section.md) [type](./type.md) [member_field_name](./member_field_name.md) [EQ](./../Lexicon/EQ.md) [value_list](./value_list.md) [COMMA](./../Lexicon/COMMA.md)  |
| [attribute_section](./attribute_section.md) [type](./type.md) [member_field_name](./member_field_name.md) [COMMA](./../Lexicon/COMMA.md)  |
| [type](./type.md) [member_field_name](./member_field_name.md) [EQ](./../Lexicon/EQ.md) [value_list](./value_list.md) [COMMA](./../Lexicon/COMMA.md)  |
| [type](./type.md) [member_field_name](./member_field_name.md) [COMMA](./../Lexicon/COMMA.md)  |
| [attribute_section](./attribute_section.md) [type](./type.md) [member_field_name](./member_field_name.md) [EQ](./../Lexicon/EQ.md) [value_list](./value_list.md) [SEMICOLON](./../Lexicon/SEMICOLON.md)  |
| [attribute_section](./attribute_section.md) [type](./type.md) [member_field_name](./member_field_name.md) [SEMICOLON](./../Lexicon/SEMICOLON.md)  |
| [type](./type.md) [member_field_name](./member_field_name.md) [EQ](./../Lexicon/EQ.md) [value_list](./value_list.md) [SEMICOLON](./../Lexicon/SEMICOLON.md)  |
| [type](./type.md) [member_field_name](./member_field_name.md) [SEMICOLON](./../Lexicon/SEMICOLON.md)  |
| [attribute_section](./attribute_section.md) [type](./type.md) [member_field_name](./member_field_name.md) [EQ](./../Lexicon/EQ.md) [value_list](./value_list.md)  |
| [attribute_section](./attribute_section.md) [type](./type.md) [member_field_name](./member_field_name.md)  |
| [type](./type.md) [member_field_name](./member_field_name.md) [EQ](./../Lexicon/EQ.md) [value_list](./value_list.md)  |
| [type](./type.md) [member_field_name](./member_field_name.md)  |




## Who references this

### NonTerminals


#### [class_stmt](./../Grammar/class_stmt.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [class_stmt_member_field_declaration](./class_stmt_member_field_declaration.md)  |



