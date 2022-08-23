# NonTerminal: **[symbol_reference](./symbol_reference.md)**

Overview of the nonterminal: **[symbol_reference](./symbol_reference.md)**



## This

| Name:                | Abstraction:    | Is Inlined |
| -------------------- | --------------- | ---------- |
| symbol_reference | Standard | No |



## ProductionRules

| ProductionRule |
| ---- |
| [deamerreserved_arrow__symbol__](./deamerreserved_arrow__symbol__.md)  |




## Who references this

### NonTerminals


#### [stmt](./../Grammar/stmt.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [symbol_reference](./symbol_reference.md) [SEMICOLON](./../Lexicon/SEMICOLON.md)  |


#### [deamerreserved_arrow__symbol_reference__](./../Grammar/deamerreserved_arrow__symbol_reference__.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [symbol_reference](./symbol_reference.md) [deamerreserved_star__COMMA__symbol_reference__](./deamerreserved_star__COMMA__symbol_reference__.md)  |


#### [deamerreserved_star__COMMA__symbol_reference__](./../Grammar/deamerreserved_star__COMMA__symbol_reference__.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [COMMA](./../Lexicon/COMMA.md) [symbol_reference](./symbol_reference.md) [deamerreserved_star__COMMA__symbol_reference__](./deamerreserved_star__COMMA__symbol_reference__.md)  |


#### [assignment](./../Grammar/assignment.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [symbol_reference](./symbol_reference.md) [assignment_operator](./assignment_operator.md) [expression](./expression.md)  |


#### [symbol_increase](./../Grammar/symbol_increase.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [symbol_reference](./symbol_reference.md) [PLUSPLUS](./../Lexicon/PLUSPLUS.md)  |


#### [symbol_decrease](./../Grammar/symbol_decrease.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [symbol_reference](./symbol_reference.md) [MINUSMINUS](./../Lexicon/MINUSMINUS.md)  |


#### [display_call](./../Grammar/display_call.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [DISPLAY](./../Lexicon/DISPLAY.md) [symbol_reference](./symbol_reference.md)  |


#### [inline_class_declaration_composite_name](./../Grammar/inline_class_declaration_composite_name.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [symbol_reference](./symbol_reference.md)  |


#### [variable_name](./../Grammar/variable_name.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [symbol_reference](./symbol_reference.md)  |


#### [function_argument_name](./../Grammar/function_argument_name.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [symbol_reference](./symbol_reference.md)  |


#### [condition_modifier_name](./../Grammar/condition_modifier_name.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [symbol_reference](./symbol_reference.md)  |


#### [function_name](./../Grammar/function_name.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [symbol_reference](./symbol_reference.md)  |


#### [class_name](./../Grammar/class_name.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [symbol_reference](./symbol_reference.md)  |


#### [member_field_name](./../Grammar/member_field_name.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [symbol_reference](./symbol_reference.md)  |


#### [inherit_base_name](./../Grammar/inherit_base_name.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [symbol_reference](./symbol_reference.md)  |


#### [compound_base_name](./../Grammar/compound_base_name.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [symbol_reference](./symbol_reference.md)  |


#### [enum_name](./../Grammar/enum_name.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [symbol_reference](./symbol_reference.md)  |


#### [enumeration_name](./../Grammar/enumeration_name.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [symbol_reference](./symbol_reference.md)  |


#### [type](./../Grammar/type.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [deamerreserved_star__type_modifier__](./deamerreserved_star__type_modifier__.md) [symbol_reference](./symbol_reference.md)  |


#### [value](./../Grammar/value.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [symbol_reference](./symbol_reference.md)  |



