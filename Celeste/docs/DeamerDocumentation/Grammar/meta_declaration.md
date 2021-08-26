# NonTerminal: **[meta_declaration](./meta_declaration.md)**

Overview of the nonterminal: **[meta_declaration](./meta_declaration.md)**



## This

| Name:                | Abstraction:    | Is Inlined |
| -------------------- | --------------- | ---------- |
| meta_declaration | Standard | No |



## ProductionRules

| ProductionRule |
| ---- |
| [LEFT_SQUARE_BRACKET](./../Lexicon/LEFT_SQUARE_BRACKET.md) [deamerreserved_star__expression__](./deamerreserved_star__expression__.md) [deamerreserved_arrow__RIGHT_SQUARE_BRACKET__](./deamerreserved_arrow__RIGHT_SQUARE_BRACKET__.md)  |
| [LEFT_SQUARE_BRACKET](./../Lexicon/LEFT_SQUARE_BRACKET.md) [deamerreserved_star__expression__](./deamerreserved_star__expression__.md) [RIGHT_SQUARE_BRACKET](./../Lexicon/RIGHT_SQUARE_BRACKET.md) [class_declaration](./class_declaration.md)  |
| [LEFT_SQUARE_BRACKET](./../Lexicon/LEFT_SQUARE_BRACKET.md) [deamerreserved_star__expression__](./deamerreserved_star__expression__.md) [RIGHT_SQUARE_BRACKET](./../Lexicon/RIGHT_SQUARE_BRACKET.md) [enum_declaration](./enum_declaration.md)  |
| [LEFT_SQUARE_BRACKET](./../Lexicon/LEFT_SQUARE_BRACKET.md) [deamerreserved_star__expression__](./deamerreserved_star__expression__.md) [RIGHT_SQUARE_BRACKET](./../Lexicon/RIGHT_SQUARE_BRACKET.md) [function_declaration](./function_declaration.md)  |




## Who references this

### NonTerminals


#### [stmt](./../Grammar/stmt.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [meta_declaration](./meta_declaration.md)  |


#### [deamerreserved_star__meta_declaration__](./../Grammar/deamerreserved_star__meta_declaration__.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [meta_declaration](./meta_declaration.md) [deamerreserved_star__meta_declaration__](./deamerreserved_star__meta_declaration__.md)  |



