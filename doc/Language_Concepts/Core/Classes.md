# Celeste, Concepts: **Classes**

Classes are used to contain data, helping with the interaction and categorization of data.

This document explains how to use Classes in Celeste.

## Structure

```C++
class Point
{
    int x,
    int y,
}
```

The above code piece shows how you can create a class specification. The specification shows how we can order data to represent a point object.

For ease we created a point with an x and y coordinate.

We can instantiate this class as an object by calling the default constructor:

```C++
Point a = 10, 20;
```

In Celeste everything after the equal sign represents the input for the various constructors the class offers.

## Member Fields

```C++
class Point
{
    int x,
    int y,
}
```

Looking back at the example, the variables 'x' and 'y' are member fields of the class 'Point'. Member fields are fields that are a member of a class.

If you want to add a member field to a class you can add a new line with the desired field, an example of this is by adding a member field 'z':
```C++
class Point
{
    int x,
    int y,
    int z,
}
```

## Constructors

### Default Constructor
By default a class has always a public default constructor. If this constructor is not used the members are default initialized.

The following code utilizes the default constructor:
```C++
class Point
{
    int x,
    int y,
    int z,
}

Point a = 1, 2, 3;

Celeste.print(a.x); / Prints 1
Celeste.print(a.y); / Prints 2
Celeste.print(a.z); / Prints 3
```

We can also use the default initialization constructor which default initializes the members:
```C++
class Point
{
    int x,
    int y,
    int z,
}

Point a;

Celeste.print(a.x); / Prints 0
Celeste.print(a.y); / Prints 0
Celeste.print(a.z); / Prints 0
```

## Specialized Constructor

It is also possible to add specialized constructors.

```C++
class Point
{
    int x,
    int y,

    Point(int x_, int y_)
    {
        / Add a standard offset of 1 in both directions.
        x = x_ + 1;
        y = y_ + 1;
    }
}
```

We can use the class as follows:
```C++
Point a = 10, 20;

Celeste.print(a.x); / 11 
Celeste.print(a.y); / 21 
```

When adding a specialized constructor the default constructor and default initialization constructor will be removed.

## Member Functions

Member functions are functions that are members of a class.

They have access to the class members and may modify them.

Member functions are often used to interact with an object.

To add a member function you can do the following:
```C++
class Point
{
    int x,
    int y,

    int GetDifferenceInX(Point rhs)
    {
        return x - rhs.x;
    }
}
```

You can use it as follows:
```C++
Point lhs = 10, 20;
Point rhs = 20, 40;

Celeste.print(lhs.GetDifferenceInX(rhs)); / 10
```

## Accessibility

If you want to limit the accessibility to some member. You can use the accessibility keywords:
- Public : Default accessibilities
- Protected : Only the class and its subclasses may access the member.
- Private : Only the class itself may access the member.

You can use them as follows:
```C++
class Point
{
    public int z,
    protected int y,
    private int x,
}
```

Note that the accessibility keywords define regions so this is specifies that all members are private:
```C++
class Point
{
private
    int z, / Private
    int y, / Private
    int x, / Private
}
```

## Inheritance

In Celeste we have 2 inheritance mechanisms:
- Trivial inheritance
- Composited inheritance

Trivial inheritance will create a subclass.
While composited inheritance will take the base type and make it a direct part of the subtype, this relation will Not create a inheritance relation.

### Trivial inheritance
```C++
class X
{
    int x,
}

class Y
{
    int y,
}

class Point Inherit X, Inherit Y
{
}
```

With Trivial Inheritance X and Y may be replaced by an Point object.

### Composited inheritance
```C++
class Point Composite X, Composite Y
{
}
```

With Composited inheritance Point may Not replace X or Y.

It will simply take the contents of X and Y and place them in Point.

#### Inline Composition

It is also possible to declare member fields using Composited inheritance using the alias logic.

The alias logic will create a reference to the data that is composited.
This allows the composition of trivial types.

E.g. we can rewrite the Point class as follows:
```C++
class Point Composite int as x, Composite int as y
{
}

Point a = 10, 20;
Celeste.print(a.x); / Prints 10
Celeste.print(a.y); / Prints 20
```

It is also possible to give more names for the composition relation:
```C++
class Point Composite int as [x, x_coordinate], Composite int as [y, y_coordinate]
{
}

Point a = 10, 20;
Celeste.print(a.x); / Prints 10
Celeste.print(a.x_coordinate); / Prints 10, same as Point.x
Celeste.print(a.y); / Prints 20
Celeste.print(a.y_coordinate); / Prints 20, same as Point.y
```

#### Anonymous composition

What happens if you give a trivial composition not a name?
Well it is still part of the class however, it is not referencable by name.

However, it is referencable by structure.

```C++
class Point Composite int, Composite int
{
}

Point a = 10, 20;
Celeste.print(a{0}); / Prints 10
Celeste.print(a{1}); / Prints 20
```

## Anonymous Accessing

Anonymous Accessing is the act of accessing the object without any name as reference.

Anonymous Accessing is also used to implicitly cast objects.

How to Anonymous Access members:
```C++
class Point
{
    int x,
    int y,
    int z,
}

Point a = 1, 2, 3;

Celeste.print(a{0}); / Prints 1, a.x
Celeste.print(a{1}); / Prints 2, a.y
Celeste.print(a{2}); / Prints 3, a.z
```

When using arrays you can also anonymously access them.

Using arrays in class can thus be accessed as follows:
```C++
class Point
{
    int[3] coordinate_index,
}

Point a = 1, 2, 3;

Celeste.print(a{0}{0}); / Prints 1, a.coordinate_index[0]
Celeste.print(a{0}{1}); / Prints 2, a.coordinate_index[1]
Celeste.print(a{0}{2}); / Prints 3, a.coordinate_index[2]
```

Looping over anonymous objects is possible via the following syntax:
```C++
Point a = 1, 2;
for (Celeste.Anonynous member in a)
{
    if (member.Type == int) / Implicitly localization of int as Enumeration.
    {
        Celeste.print(member.As[int]);
    }
}
```

## Implicit Class Creation

It is further possible to implicitly construct Classes. This is called the Deamer Class Construction Mechanic or DCCM:
```C++
Point: int, int;
Point a = 1, 2;

Celeste.print(a{0}); / Prints 1
Celeste.print(a{1}); / Prints 2

Celeste.print(a.int{0}); / Prints 1
Celeste.print(a.int{1}); / Prints 2
```

The above code shows how a Point is defined as 2 integers. Using the default constructor we are able to initialize it. And utilizing anonymous accessing we can access the member fields.

Note that the name used for the member field is the Typename.

As the Typename is used for both x and y, the member field is ambiguous, however, an anonymous access may be used to specialize it.

We can using the Typename is Member Field name, create named member fields:
```C++
x: int;
y: int;
Point: x, y;

Point a = 1, 2;
Celeste.print(a{0}); / Prints 1
Celeste.print(a{1}); / Prints 2

Celeste.print(a.x); / Prints 1
Celeste.print(a.y); / Prints 2
```

You can also inline the type declaration. This makes the type declaration local:
```C++
Point:
    [x: int],
    [y: int]
;

Point: x, y;

Point a = 1, 2;
Celeste.print(a{0}); / Prints 1
Celeste.print(a{1}); / Prints 2

Celeste.print(a.x); / Prints 1
Celeste.print(a.y); / Prints 2
```