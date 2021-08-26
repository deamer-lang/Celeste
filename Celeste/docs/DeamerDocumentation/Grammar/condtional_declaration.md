# NonTerminal: **[condtional_declaration](./condtional_declaration.md)**

Overview of the nonterminal: **[condtional_declaration](./condtional_declaration.md)**



## This

| Name:                | Abstraction:    | Is Inlined |
| -------------------- | --------------- | ---------- |
| condtional_declaration | Group | No |



## ProductionRules

| ProductionRule |
| ---- |
| [IF](./../Lexicon/IF.md) [LEFT_PARANTHESIS](./../Lexicon/LEFT_PARANTHESIS.md) [expression](./expression.md) [RIGHT_PARANTHESIS](./../Lexicon/RIGHT_PARANTHESIS.md) [conditional_block](./conditional_block.md)  |
| [ELSE](./../Lexicon/ELSE.md) [IF](./../Lexicon/IF.md) [LEFT_PARANTHESIS](./../Lexicon/LEFT_PARANTHESIS.md) [expression](./expression.md) [RIGHT_PARANTHESIS](./../Lexicon/RIGHT_PARANTHESIS.md) [conditional_block](./conditional_block.md)  |
| [ELSE](./../Lexicon/ELSE.md) [LEFT_PARANTHESIS](./../Lexicon/LEFT_PARANTHESIS.md) [expression](./expression.md) [RIGHT_PARANTHESIS](./../Lexicon/RIGHT_PARANTHESIS.md) [conditional_block](./conditional_block.md)  |




## Who references this

### NonTerminals


#### [logical_stmt](./../Grammar/logical_stmt.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [condtional_declaration](./condtional_declaration.md)  |



