# NonTerminal: **[for_block](./for_block.md)**

Overview of the nonterminal: **[for_block](./for_block.md)**



## This

| Name:                | Abstraction:    | Is Inlined |
| -------------------- | --------------- | ---------- |
| for_block | Standard | No |



## ProductionRules

| ProductionRule |
| ---- |
| [standard_block](./standard_block.md)  |




## Who references this

### NonTerminals


#### [for_iteration_loop](./../Grammar/for_iteration_loop.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [FOR](./../Lexicon/FOR.md) [expression](./expression.md) [LEFT_BRACKET](./../Lexicon/LEFT_BRACKET.md) [for_block](./for_block.md) [RIGHT_BRACKET](./../Lexicon/RIGHT_BRACKET.md)  |


#### [for_each_loop](./../Grammar/for_each_loop.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [FOR](./../Lexicon/FOR.md) [LEFT_PARANTHESIS](./../Lexicon/LEFT_PARANTHESIS.md) [type](./type.md) [for_variable](./for_variable.md) [IN](./../Lexicon/IN.md) [iterator](./iterator.md) [RIGHT_PARANTHESIS](./../Lexicon/RIGHT_PARANTHESIS.md) [LEFT_BRACKET](./../Lexicon/LEFT_BRACKET.md) [for_block](./for_block.md) [RIGHT_BRACKET](./../Lexicon/RIGHT_BRACKET.md)  |
| [FOR](./../Lexicon/FOR.md) [LEFT_PARANTHESIS](./../Lexicon/LEFT_PARANTHESIS.md) [type](./type.md) [for_variable](./for_variable.md) [COLON](./../Lexicon/COLON.md) [iterator](./iterator.md) [RIGHT_PARANTHESIS](./../Lexicon/RIGHT_PARANTHESIS.md) [LEFT_BRACKET](./../Lexicon/LEFT_BRACKET.md) [for_block](./for_block.md) [RIGHT_BRACKET](./../Lexicon/RIGHT_BRACKET.md)  |



