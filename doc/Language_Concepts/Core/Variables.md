# Celeste, Concepts: Variables

Variables are simple you store data and can mutate that data later.

However, there are various features surrounding variables that one may not know already.

## Trivial Variable usage

```C++
int a = 10;
int b = a;
int c = 20;

Celeste.print(a); / 10
Celeste.print(b); / 10
Celeste.print(c); / 20
```

## Auto deduction

```C++
int a = 10;
auto b = a;

Celeste.print(a); / 10
Celeste.print(b); / 10
```

Auto deduction is the act of automatically deducing the type of for some variable. It may drastically simplify writing variables.
