# Celeste, Concepts: Mutate

The Celeste Mutate Source Code Infrastructure allows you to mutate source code.

## Order of execution Code time logic

All Code Time logic is local to the file you are in.
You extend the range explicitly. If needed.

The following extended ranges exist:
- File Imports
- Specific File Imports
- Specific Files
- Project Wide

When using multiple files, the execution of code time logic is undefined. This is due to the undefined order of processing files.

However, when a file is processed the Code time execution is always top to bottom.

When having Project wide Code time logic, the code is always ran last.

It is possible to use shared state among files by using the ```static``` keyword.

To group depending executions you need to utilize inline code mutation groups:
```C++
(Project) {[
    Celeste.Class.Add("A");
    Celeste.Class.Add("B");
    Celeste.GetClass("A").Name = "C";
]};
```