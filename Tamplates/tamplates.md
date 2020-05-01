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


## Class Templates
Like function templates, you can also create class templates for generic class operations. When a class uses the concept of Template, then the class is known as generic class.

Sometimes, you need a class implementation that is same for all classes, only the data types used are different.

### Syntax of Function Template
```
template <class T>
class className
{
   ... .. ...
public:
   T var;
   T someOperation(T arg);
   ... .. ...
};
```
In the above declaration, ```T``` is the template argument which is a placeholder for the data type used.

Inside the class body, a member variable ```var``` and a member function ```someOperation()``` are both of type ```T```.

### How to create a class template object?
To create a class template object, you need to define the data type inside a ```< >``` when creation.

```className<dataType> classObject;```
**For example:**
```
className<int> classObject;
className<float> classObject;
className<string> classObject;
```

[Example 3: Simple calculator using Class template](ClassTemplate_SimpleCalculator.cpp)

In the above program, a class template ```Calculator``` is declared.

The class contains two private members of type ```T```: ```num1``` & ```num2```, and a constructor to initalize the members.

It also contains public member functions to calculate the addition, subtraction, multiplication and division of the numbers which return the value of data type defined by the user. Likewise, a function ```displayResult()``` to display the final output to the screen.

In the ```main()``` function, two different ```Calculator``` objects ```intCalc``` and ```floatCalc``` are created for data types: ```int``` and ```float``` respectively. The values are initialized using the constructor.

Notice we use ```<int>``` and ```<float>``` while creating the objects. These tell the compiler the data type used for the class creation.

This creates a class definition each for ```int``` and ```float```, which are then used accordingly.

Then, ```displayResult()``` of both objects is called which performs the Calculator operations and displays the output.

