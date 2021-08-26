# NonTerminal: **[conditional_block](./conditional_block.md)**

Overview of the nonterminal: **[conditional_block](./conditional_block.md)**



## This

| Name:                | Abstraction:    | Is Inlined |
| -------------------- | --------------- | ---------- |
| conditional_block | Standard | No |



## ProductionRules

| ProductionRule |
| ---- |
| [LEFT_BRACKET](./../Lexicon/LEFT_BRACKET.md) [deamerreserved_star__condtional_stmt__](./deamerreserved_star__condtional_stmt__.md) [RIGHT_BRACKET](./../Lexicon/RIGHT_BRACKET.md)  |




## Who references this

### NonTerminals


#### [condtional_declaration](./../Grammar/condtional_declaration.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [IF](./../Lexicon/IF.md) [LEFT_PARANTHESIS](./../Lexicon/LEFT_PARANTHESIS.md) [expression](./expression.md) [RIGHT_PARANTHESIS](./../Lexicon/RIGHT_PARANTHESIS.md) [conditional_block](./conditional_block.md)  |
| [ELSE](./../Lexicon/ELSE.md) [IF](./../Lexicon/IF.md) [LEFT_PARANTHESIS](./../Lexicon/LEFT_PARANTHESIS.md) [expression](./expression.md) [RIGHT_PARANTHESIS](./../Lexicon/RIGHT_PARANTHESIS.md) [conditional_block](./conditional_block.md)  |
| [ELSE](./../Lexicon/ELSE.md) [LEFT_PARANTHESIS](./../Lexicon/LEFT_PARANTHESIS.md) [expression](./expression.md) [RIGHT_PARANTHESIS](./../Lexicon/RIGHT_PARANTHESIS.md) [conditional_block](./conditional_block.md)  |



