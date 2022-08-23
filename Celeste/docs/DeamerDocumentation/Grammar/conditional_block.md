# NonTerminal: **[conditional_block](./conditional_block.md)**

Overview of the nonterminal: **[conditional_block](./conditional_block.md)**



## This

| Name:                | Abstraction:    | Is Inlined |
| -------------------- | --------------- | ---------- |
| conditional_block | Standard | No |



## ProductionRules

| ProductionRule |
| ---- |
| [standard_block](./standard_block.md)  |




## Who references this

### NonTerminals


#### [conditional_if](./../Grammar/conditional_if.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [IF](./../Lexicon/IF.md) [LEFT_PARANTHESIS](./../Lexicon/LEFT_PARANTHESIS.md) [expression](./expression.md) [RIGHT_PARANTHESIS](./../Lexicon/RIGHT_PARANTHESIS.md) [LEFT_BRACKET](./../Lexicon/LEFT_BRACKET.md) [conditional_block](./conditional_block.md) [RIGHT_BRACKET](./../Lexicon/RIGHT_BRACKET.md)  |


#### [conditional_else_if](./../Grammar/conditional_else_if.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [ELSEIF](./../Lexicon/ELSEIF.md) [LEFT_PARANTHESIS](./../Lexicon/LEFT_PARANTHESIS.md) [expression](./expression.md) [RIGHT_PARANTHESIS](./../Lexicon/RIGHT_PARANTHESIS.md) [LEFT_BRACKET](./../Lexicon/LEFT_BRACKET.md) [conditional_block](./conditional_block.md) [RIGHT_BRACKET](./../Lexicon/RIGHT_BRACKET.md)  |
| [ELSE](./../Lexicon/ELSE.md) [IF](./../Lexicon/IF.md) [LEFT_PARANTHESIS](./../Lexicon/LEFT_PARANTHESIS.md) [expression](./expression.md) [RIGHT_PARANTHESIS](./../Lexicon/RIGHT_PARANTHESIS.md) [LEFT_BRACKET](./../Lexicon/LEFT_BRACKET.md) [conditional_block](./conditional_block.md) [RIGHT_BRACKET](./../Lexicon/RIGHT_BRACKET.md)  |


#### [conditional_else](./../Grammar/conditional_else.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [ELSE](./../Lexicon/ELSE.md) [LEFT_BRACKET](./../Lexicon/LEFT_BRACKET.md) [conditional_block](./conditional_block.md) [RIGHT_BRACKET](./../Lexicon/RIGHT_BRACKET.md)  |



