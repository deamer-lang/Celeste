# Celeste, Concepts: CodeClass

A Code Class is a class that may be used at Code Construction time.

Code Classes may be used to store data, however, they may not be modified by using the Celeste Source Code Mutator.

## Runtime and Code classes

A class can be used either at:
- Runtime
- Code time
- Code and Runtime

Runtime classes are used at runtime and are your standard classes used for creating OOP programs.

Code time classes are used to simplify the mutation of source code. They are only available at Code time.

Runtime and Code time classes may be used by both systems, however, they may not utilize Code Blocks. Which is a Code time only concept.

By default each class is runtime only.
To specify otherwise you must apply the right keywords:
```C++
/ A is only available at Runtime
class A { }

/ B is only available at Runtime
runtime class B { }

/ C is only available at Code time
code class C { }

/ D is available in both runtime and Code time
runtime code class D { }

/ E is available in both runtime and Code time
code runtime class E { }
```

## Class Templates

When you instantiate a template class, the template class is bound to the environment it is created in.

Thus if you instantiate a template class at code time, the instantiated class is only available at code time.