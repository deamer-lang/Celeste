# NonTerminal: **[variable_declaration](./variable_declaration.md)**

Overview of the nonterminal: **[variable_declaration](./variable_declaration.md)**



## This

| Name:                | Abstraction:    | Is Inlined |
| -------------------- | --------------- | ---------- |
| variable_declaration | Standard | No |



## ProductionRules

| ProductionRule |
| ---- |
| [attribute_section](./attribute_section.md) [type](./type.md) [variable_name](./variable_name.md) [EQ](./../Lexicon/EQ.md) [value_list](./value_list.md)  |
| [attribute_section](./attribute_section.md) [type](./type.md) [variable_name](./variable_name.md)  |
| [type](./type.md) [variable_name](./variable_name.md) [EQ](./../Lexicon/EQ.md) [value_list](./value_list.md)  |
| [type](./type.md) [variable_name](./variable_name.md)  |




## Who references this

### NonTerminals


#### [stmt](./../Grammar/stmt.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [variable_declaration](./variable_declaration.md)  |



