# Celeste, Concepts: Template Classes

Template Classes is an facade of the Celeste Source Code Mutator system. It simplifies the creation of generic classes. By allowing type substitutions.

## Constructing a template class

```C++
template[AutoType T, AutoType Q]
class Converter
{
    T result;

    Converter(Q rhs)
    {
        result = rhs;
    }
}
```

You can call it as follows:
```C++
Converter[int, double] converter = 1.0;
```

You can also utilize Auto Constructor Type deduction:
```C++
Converter[int] converter = 1.0; / Will resolve Q as double
```

## Alternative

You can also utilize the Celeste Source Code Mutator:
```C++
auto Converter = (AutoType T, AutoType Q)[
    class Converter
    {
        T result;
        Convertor(Q rhs)
        {
            result = rhs;
        }
    }
];

/ Will construct a Template class with T and Q as Template Parameters.
/ By Displaying the Template, we effectively created the template.
Display Celeste.Mutate(Converter).GetClass("Converter").ExtractTemplate(T, Q);
```