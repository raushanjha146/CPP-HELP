# C++ Templates

Templates are powerful features of C++ which allows you to write generic programs. In simple terms, you can create a single function or a class to work with different data types using templates.
<br/>Templates are often used in larger codebase for the purpose of code reusability and flexibility of the programs.

### How templates work?
Templates are expanded at compiler time. This is like macros. The difference is, compiler does type checking before template expansion. The idea is simple, source code contains only function/class, but compiled code may contain multiple copies of same function/class.

![](How-templates-works.jpg?raw=true "How templates work")

### Templates can be used in two different ways:
* Function Templates
* Class Templates

## Function Templates:
We can define a template for a function that can be used for different data types.

### Syntax of Function Template
```
template <class T>
T someFunction(T arg1, T arg2, ...)
{
   ... .. ...
}
```
``` T ``` is a template argument that accepts different data types (int, float), and class is a keyword.</br>
When, an argument of a data type is passed to ```someFunction( )```, compiler generates a new version of ```someFunction()``` for the given data type.

[Example 1: Function Template to find the largest number](FunctionTemplate_FindLargestNumber.cpp)
</br>
In the above program, a function template ```Large()``` is defined that accepts two arguments ```n1``` and ```n2``` of data type ```T```. ```T``` signifies that argument can be of any data type.

```Large()``` function returns the largest among the two arguments using a simple **conditional operation**.

Inside the ```main()``` function, variables of three different data types: ```int```, ```float``` and ```char``` are declared. The variables are then passed to the ```Large()``` function template as normal functions.

During run-time, when an integer is passed to the template function, compiler knows it has to generate a ```Large()``` function to accept the int arguments and does so.

Similarly, when floating-point data and char data are passed, it knows the argument data types and generates the ```Large()``` function accordingly.

```This way, using only a single function template replaced three identical normal functions and made your code maintainable```

[Example 2: Swap Data Using Function Templates](FunctionTemplate_SwapData.cpp)
</br>
In this program, instead of calling a function by passing a value, a **call by reference** is issued.

The ```Swap()``` function template takes two arguments and swaps them by reference.
