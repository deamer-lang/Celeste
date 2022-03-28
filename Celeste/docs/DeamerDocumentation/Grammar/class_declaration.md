# NonTerminal: **[class_declaration](./class_declaration.md)**

Overview of the nonterminal: **[class_declaration](./class_declaration.md)**



## This

| Name:                | Abstraction:    | Is Inlined |
| -------------------- | --------------- | ---------- |
| class_declaration | Standard | No |



## ProductionRules

| ProductionRule |
| ---- |
| [CLASS](./../Lexicon/CLASS.md) [class_name](./class_name.md) [COLON](./../Lexicon/COLON.md) [deamerreserved_arrow__base_type__](./deamerreserved_arrow__base_type__.md) [class_block](./class_block.md)  |
| [CLASS](./../Lexicon/CLASS.md) [class_name](./class_name.md) [class_block](./class_block.md)  |




## Who references this

### NonTerminals


#### [stmt](./../Grammar/stmt.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [class_declaration](./class_declaration.md)  |


#### [meta_declaration](./../Grammar/meta_declaration.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [LEFT_SQUARE_BRACKET](./../Lexicon/LEFT_SQUARE_BRACKET.md) [deamerreserved_star__expression__](./deamerreserved_star__expression__.md) [RIGHT_SQUARE_BRACKET](./../Lexicon/RIGHT_SQUARE_BRACKET.md) [class_declaration](./class_declaration.md)  |



