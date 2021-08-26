# NonTerminal: **[function_declaration](./function_declaration.md)**

Overview of the nonterminal: **[function_declaration](./function_declaration.md)**



## This

| Name:                | Abstraction:    | Is Inlined |
| -------------------- | --------------- | ---------- |
| function_declaration | Standard | No |



## ProductionRules

| ProductionRule |
| ---- |
| [FUNCTION](./../Lexicon/FUNCTION.md) [function_name](./function_name.md) [LEFT_PARANTHESIS](./../Lexicon/LEFT_PARANTHESIS.md) [deamerreserved_arrow__deamerreserved_optional__function_argument____](./deamerreserved_arrow__deamerreserved_optional__function_argument____.md) [RIGHT_PARANTHESIS](./../Lexicon/RIGHT_PARANTHESIS.md) [return_type](./return_type.md) [SEMICOLON](./../Lexicon/SEMICOLON.md)  |
| [FUNCTION](./../Lexicon/FUNCTION.md) [function_name](./function_name.md) [LEFT_PARANTHESIS](./../Lexicon/LEFT_PARANTHESIS.md) [deamerreserved_arrow__deamerreserved_optional__function_argument____](./deamerreserved_arrow__deamerreserved_optional__function_argument____.md) [RIGHT_PARANTHESIS](./../Lexicon/RIGHT_PARANTHESIS.md) [SEMICOLON](./../Lexicon/SEMICOLON.md)  |




## Who references this

### NonTerminals


#### [stmt](./../Grammar/stmt.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [function_declaration](./function_declaration.md)  |


#### [meta_declaration](./../Grammar/meta_declaration.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [LEFT_SQUARE_BRACKET](./../Lexicon/LEFT_SQUARE_BRACKET.md) [deamerreserved_star__expression__](./deamerreserved_star__expression__.md) [RIGHT_SQUARE_BRACKET](./../Lexicon/RIGHT_SQUARE_BRACKET.md) [function_declaration](./function_declaration.md)  |


#### [class_stmt](./../Grammar/class_stmt.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [function_declaration](./function_declaration.md)  |



