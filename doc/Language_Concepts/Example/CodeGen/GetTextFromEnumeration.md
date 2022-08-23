# Celeste, Example: Get Text From Enumeration At Runtime

This example shows how to make code generation logic, that can construct a get text function to get the text format of some enumeration at runtime.

It shows you how to utilize the Celeste Mutate Source Code Library.

## Code

```C++
code ConstructGetText(AutoType T (Celeste.IsEnum))
{
    auto Out = [
        function string GetText(T t)
        {
            return "Invalid";
        }
    ];

    for (auto enumeration in Celeste.Mutate(T).GetEnumerations())
    {
        auto Check = [
            if (t == enumeration.Value())
            {
                return enumeration.Name();
            }
        ];

        Celeste.Mutate("Out")
            .GetFunction("GetText")
            .AddToTop(Check);
    }
}

enum Fruit
{
    Apple,
    Banana,
    Citrus,
}

/ Construct the GetText function
ConstructGetText(Fruit);

Celeste.Print(GetText(Fruit.Apple)); / "Apple"
```