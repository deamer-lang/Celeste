# Celeste

Celeste solves the issue of being unable to re-use logic across multiple languages, libraries, and infrastructures.
Often different languages require different syntax and semantics, this often implies that writing code in one language, won't work in another by just copying the source code.
Celeste offers various meta-programming and source code generation features, which automate the porting of logic across languages, and infrastructures.

Celeste does this by supporting first class source code generation features, which allow the developer to generate source code in their source code.
To further enable the re-use of logic across languages, Celeste will allow for translating Celeste source code to any supported target languages.
The translation may be modified in Celeste to further allow specialization, and thus allowing the re-use of logic.

## What is currently in the language

This list will be updated in the future.
- Interpreter, able to understand the core semantics of Celeste. Not every feature is supported, but it is turing-complete.
- Classes
- Functions
- Conditionals
- For loops
- Template Classes
- Template Functions
- Dynamic Arrays
- Simple Mutation library, provides more helpers to generate source code in Celeste.

## What is planned

This list will be updated in the future.
- Extending the source code mutation library.
- Ability to translate Celeste code to any supported output languages.

# Examples

```Celeste
Import File "Celeste/standard_types.ce"
Import File "Celeste/io.ce"

void main()
{
    io().Print("Hello World");
}
```

## Source Code Generation (Compile-Time Reflection)

```Celeste
Code Import File "Celeste/mutate.ce"
Import File "Celeste/standard_types.ce"
Import File "Celeste/io.ce"

void main()
{
    GeneratedHelloClass helloClass
    helloClass.Greeting();
}

{[
    Mutate()
        .AddClass("GeneratedHelloClass")
        .AddMemberFunction("Greeting")
        .AddCodeBlock([
            io().Print("Hi!");
        ]);
]}
```

# Build

```
mkdir build
cd build 
cmake ..
cmake --build . --target Celestea
```

# Documentation

Documentation is located in the directory: doc/Language_Concepts
