# Celeste, Concepts: Code Blocks

An important feature of Celeste is Compile Time Reflection.

Compile Time Reflection is expanded so vastly that it is possible to generate source code quickly and easy.

An important concept of CTR in Celeste are Code Blocks.

## What is a Code Block?

Essentially every source code you write is a code block. A code block is a block that contains code.

However, what is the purpose and how does it work?

Suppose we have the following source code:
```C++
Point:
    [x int],
    [y int],
;

Point a = 1, 2;

Celeste.print(a); / Point: 1, 2
```

The code itself is called the Core Code Block.
Core Code Block represent code that must be executed on runtime.

However, we can encapsulate this block:
```C++
auto PointTutorial = [
    Point:
        [x int],
        [y int],
    ;

    Point a = 1, 2;

    Celeste.print(a); / Point: 1, 2
]
```

We have created 2 Code Blocks.
The outer code block is an implicit Code Block local to the variable PointTutorial. This means that everything referencing PointTutorial is part of the implicit Code Block created by PointTutorial.

PointTutorial itself is a variable that references a Code Block. The Block from the previous example.

This allows us to do new things, namely we can manipulate the inside code block, and later "display" it in various ways.

Before we continue we need to learn about the resolving of Code Blocks.

## How are Code Blocks resolved?

The purpose of Code Blocks is to finally construct the CCB (Core Code Block).

The CCB Represents the Source code that must be ran at runtime.

This means that whenever you have more code blocks, each time the upper code block is resolved until we have gotten the most inner code block i.e. the CCB.

## What can we do with Code Blocks?

To illustrate what we can do with this, I will show you how we can extend the previous example to generate various variations of the Point class.

```C++
AutoType MemberType = int;

auto PointTutorial = [
    Point:
        [x MemberType], / Reference the AutoType called MemberType, as this is not in the same code block, this variable is used as insertion mechanic.
        [y MemberType],
    ;
    Point a;

    Celeste.print(a); / Prints the Default Representation of the Point Class.
];

AutoType[auto] types = [int, long, double, string];

for (AutoType type in types)
{
    MemberType = type;
    
    / In the Result of this Code Block add the current state of PointTutorial as Source Code.
    Display PointTutorial; 
}
```

This will generate the following code:
```C++
Point:
    [x int],
    [y int],
;
Point a;

Celeste.print(a);

Point:
    [x long],
    [y long],
;
Point a;

Celeste.print(a);

Point:
    [x double],
    [y double],
;
Point a;

Celeste.print(a);

Point:
    [x string],
    [y string],
;
Point a;

Celeste.print(a);
```

## Code Block exceptions over Source Code

Duplicate Symbols are accepted and instead of throwing errors, name shadowing is utilized.

If this is undesirable you can modify the code block to prevent shadowing.
```C++
auto CodeBlock = (Celeste.NoShadowing) [...];
Display CodeBlock;
```

This may also be done at Display level:
```C++
auto CodeBlock = [...];
Display (Celeste.NoShadowing) CodeBlock;
```

## Inlining

Inlining allows Code Blocks to be inserted at the spot they are at.

By default if a Code Block is implicitly created, and the Code Block it is encapsulated by is a CCB. The Code Block is inlined automatically when displaying.

However, whenever a situation occurs you want to inline even though it is not deduced automatically to inline. You may explicitly state upon creation and displaying that a Code Block must be inlined in the current Code Block.

The following showcases the first scenario:
```C++
function int Print()
{
    Celeste.print("Start");

    int i = 0;
    auto CodeBlock = [
        Celeste.print(i);
    ];

    for 5
    {
        i++;
        Display CodeBlock;
    }

    Celeste.print("End");
}
```

This would resolve into:
```C++
function int Print()
{
    Celeste.print("Start");

    Celeste.print(1);
    Celeste.print(2);
    Celeste.print(3);
    Celeste.print(4);
    Celeste.print(5);

    Celeste.print("End");
}
```

The following Generation is equivalent but utilizes parametrized Code Blocks:
```C++
function void Print()
{
    Celeste.print("Start");

    auto CodeBlock = (auto i)[
        Celeste.print(i);
    ];

    for 5
    {
        Display CodeBlock(for.iterator);
    }

    Celeste.print("End");
}
```

## Recursive Code Blocks

It is possible to create Recursive Code Blocks.
This utilizes the following rules:
- If a Code Block embeds a Code Block that is not Inlined it must first be resolved.
- A Code Block is allowed to reference Variables outside of its scope.

This allows us to pass a Code Block to an internal Code Block. This enables us to recursively generate some logic.

Fibonacci example using recursive generation:
```C++
Code Fibonacci(auto turns, auto last_value = 0, auto current_value = 1)
{
    auto Impl = [
        Celeste.print(current_value);

        if (turns > 0)
        {
            auto old_value = last_value;
            auto new_current_value = last_value + current_value;
            Fibonacci(turns - 1, old_value, new_current_value);
        }
    ];

    return Impl;
}

Fibonacci(5);
/ Prints:
/ 1
/ 1
/ 2
/ 3
/ 5   
```

## Templates via Code Blocks

```C++
Code function Vector(AutoType type)
{
    auto Impl = [
        class Vector
        {
            / Implementation
            type[] array;
            int size = 1;

            void push_back(type rhs)
            {
                if (size + 1 >= capacity)
                {
                    expand();
                }

                array[size] = rhs;
                size += 1;
            }

            void pop_back()
            {
                size -= 1;
            }

            void expand()
            {
                auto new_capacity = capacity * 2;
                auto new_array = malloc(new_capacity, sizeof(type));

                memcpy(array, new_array);

                array = new_array;
                capacity = new_capacity;
            }
        }
    ];

    Celeste.Mutate(Impl).GetClass("Vector").Name += Celeste.GetName(type);

    return Impl;
}

Vector(int); / Generates a VectorInt class.
Vector(string); / Generates a VectorString class.
```