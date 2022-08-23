# Celeste, Concepts: Condition Modifiers

Condition Modifiers are Modifiers that can change how one access a function.

E.g. in some cases it is illegal to pass null objects, in that case one may implement manual checks to prevent this from happening. Condition Modifiers is a feature that ease the checking to allow this common behavior to be encapsulated and re-used.

## Creating Condition Modifiers

```C++
Conditional NotNull(auto i)
{
    return i != NULL;
}

function Print(int i (NotNull)) {}
```

The above represents a Conditional Modifier.
It checks if some type is not NULL.

One can also check if some object is not a specific type. E.g. suppose you want to not allow integers with a specific range:
```C++
Conditional NotBetweenOneAndTen(int i)
{
    return i < 1 | i > 10;
}

function Print(int i (NotBetweenOneAndTen)) {}
```

It is also possible to provide arguments:
```C++
Conditional(int lower_range, int upper_range) NotBetweenRange(int i)
{
    return i < lower_range | i > upper_range;
}

function Print(int i (NotBetweenRange[lower_range, upper_range])) {}
```

## Applying Condition Modifiers for each member in a function

```C++
function (NotNull) Print(int i) {}
```

## Overloading

When multiple overloads exists with different Condition Modifiers, the Condition Modifiers serve as dispatcher for the first accepting function.

E.g. suppose you have 2 functions:
```C++
function (NotNull) Print(auto i) {}
function Print(auto i) {}
```

You have 1 function accepting NULL Objects, while the other does not accept NULL objects.
In this case a generated Dispatcher is generated to check what function must be ran.

Sometimes the dispatcher is not neccessary as the optimizer can already deduce what path must be chosen.

## Implicit Conversion Condtion Modifiers to Booleans

There is an implicit conversion from condition modifiers to booleans. This way you dont have to repeat yourself.

It is still important to understand that Condition Modifiers may be used as boolean functions, but boolean functions may not be used as condition modifiers.
