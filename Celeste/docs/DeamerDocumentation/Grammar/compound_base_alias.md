# NonTerminal: **[compound_base_alias](./compound_base_alias.md)**

Overview of the nonterminal: **[compound_base_alias](./compound_base_alias.md)**



## This

| Name:                | Abstraction:    | Is Inlined |
| -------------------- | --------------- | ---------- |
| compound_base_alias | Standard | No |



## ProductionRules

| ProductionRule |
| ---- |
| [VARNAME](./../Lexicon/VARNAME.md)  |




## Who references this

### NonTerminals


#### [compound_base](./../Grammar/compound_base.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [COMPOSITE](./../Lexicon/COMPOSITE.md) [compound_base_name](./compound_base_name.md) [AS](./../Lexicon/AS.md) [compound_base_alias](./compound_base_alias.md)  |


#### [deamerreserved_arrow__compound_base_alias__](./../Grammar/deamerreserved_arrow__compound_base_alias__.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [compound_base_alias](./compound_base_alias.md) [deamerreserved_star__COMMA__compound_base_alias__](./deamerreserved_star__COMMA__compound_base_alias__.md)  |


#### [deamerreserved_star__COMMA__compound_base_alias__](./../Grammar/deamerreserved_star__COMMA__compound_base_alias__.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [COMMA](./../Lexicon/COMMA.md) [compound_base_alias](./compound_base_alias.md) [deamerreserved_star__COMMA__compound_base_alias__](./deamerreserved_star__COMMA__compound_base_alias__.md)  |



