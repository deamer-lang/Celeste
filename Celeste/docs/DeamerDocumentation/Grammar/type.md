# NonTerminal: **[type](./type.md)**

Overview of the nonterminal: **[type](./type.md)**



## This

| Name:                | Abstraction:    | Is Inlined |
| -------------------- | --------------- | ---------- |
| type | Group | No |



## ProductionRules

| ProductionRule |
| ---- |
| [VARNAME](./../Lexicon/VARNAME.md)  |




## Who references this

### NonTerminals


#### [function_argument](./../Grammar/function_argument.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [type](./type.md) [VARNAME](./../Lexicon/VARNAME.md) [EQ](./../Lexicon/EQ.md) [expression](./expression.md)  |
| [type](./type.md) [VARNAME](./../Lexicon/VARNAME.md)  |


#### [variable_declaration](./../Grammar/variable_declaration.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [type](./type.md) [VARNAME](./../Lexicon/VARNAME.md) [SEMICOLON](./../Lexicon/SEMICOLON.md)  |


#### [variable_initialization](./../Grammar/variable_initialization.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [type](./type.md) [VARNAME](./../Lexicon/VARNAME.md) [EQ](./../Lexicon/EQ.md) [expression](./expression.md) [SEMICOLON](./../Lexicon/SEMICOLON.md)  |



