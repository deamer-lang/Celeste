# Terminal: **[TEXT](./TEXT.md)**

Overview of the terminal: **[TEXT](./TEXT.md)**.



## **Neighbours**

| Relative position | Name                                          |
| ----------------- | --------------------------------------------- |
| Above             | [DECIMAL](./DECIMAL.md) |
| This              | **[TEXT](./TEXT.md)** |
| Below             | [ESCAPE_CHARS](./ESCAPE_CHARS.md) |



## **This**

| Name:                                       | Value:          | Abstraction:    |
| ------------------------------------------- | --------------- | --------------- |
| **[TEXT](./TEXT.md)** | ["]([\\]["]|[\\][\\]|[^"])*["] | Standard |



## **Who references this**

### NonTerminals


#### [file_import](./../Grammar/file_import.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [execution_keyword_permutation](./../Grammar/execution_keyword_permutation.md) [IMPORT](./IMPORT.md) [FILE_](./FILE_.md) [TEXT](./TEXT.md)  |


#### [value](./../Grammar/value.md)

| Productionrule referencing this                      |
| ---------------------------------------------------- |
| [TEXT](./TEXT.md)  |



