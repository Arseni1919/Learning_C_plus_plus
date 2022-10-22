# Learning C++

## First Program

```c++
#include <iostream>

int main() {
    std::cout << "abc";
    return 0;
};
```

## Variables

In C++, there are different types of variables (defined with different keywords), for example:

- int - stores integers (whole numbers), without decimals, such as 123 or -123
- double - stores floating point numbers, with decimals, such as 19.99 or -19.99
- char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
- string - stores text, such as "Hello World". String values are surrounded by double quotes
- bool - stores values with two states: true or false

## Constants

You should always declare the variable as constant when you have values that are unlikely to change:
Example
```c++
const int minutesPerHour = 60;
const float PI = 3.14;
```

## Get the Size of an Array

To get the size of an array, you can use the sizeof() operator:

```c++
int myNumbers[5] = {10, 20, 30, 40, 50};
cout << sizeof(myNumbers);
```
Why did the result show 20 instead of 5, when the array contains 5 elements?

It is because the sizeof() operator returns the size of a type in bytes.

You learned from the Data Types chapter that an int type is usually 4 bytes, so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.

To find out how many elements an array has, you have to divide the size of the array by the size of the data type it contains:

```c++
int myNumbers[5] = {10, 20, 30, 40, 50};
int getArrayLength = sizeof(myNumbers) / sizeof(int);
cout << getArrayLength;
```

## C++ Structures (struct)

```c++
struct {             // Structure declaration
  int myNum;         // Member (int variable)
  string myString;   // Member (string variable)
} myStructure;       // Structure variable
```

### Named Structures

```c++
struct myDataType { // This structure is named "myDataType"
  int myNum;
  string myString;
};

myDataType myVar;


```

## C++ References

A reference variable is a "reference" to an existing variable, and it is created with the & operator:

```c++
string food = "Pizza";  // food variable
string &meal = food;    // reference to food
```

## C++ Memory Address

In the example from the previous page, the & operator was used to create a reference variable. But it can also be used to get the memory address of a variable; which is the location of where the variable is stored on the computer.

When a variable is created in C++, a memory address is assigned to the variable. And when we assign a value to the variable, it is stored in this memory address.

To access it, use the & operator, and the result will represent where the variable is stored:

```c++
string food = "Pizza";

cout << &food; // Outputs 0x6dfed4
```

Note: The memory address is in hexadecimal form (0x..). Note that you may not get the same result in your program.

And why is it useful to know the memory address?
References and Pointers (which you will learn about in the next chapter) are important in C++, because they give you the ability to manipulate the data in the computer's memory - which can reduce the code and improve the performance.

These two features are one of the things that make C++ stand out from other programming languages, like Python and Java.


## C++ Pointers

A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator. The address of the variable you're working with is assigned to the pointer:
```c++
string food = "Pizza";  // A food variable of type string
string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food (0x6dfed4)
cout << &food << "\n";

// Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";
```

### Dereference 

```c++
string food = "Pizza";  // Variable declaration
string* ptr = &food;    // Pointer declaration

// Reference: Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";

// Dereference: Output the value of food with the pointer (Pizza)
cout << *ptr << "\n";
```

## C++ Function

```c++
// Create a function
void myFunction() {
  cout << "I just got executed!";
}

int main() {
  myFunction(); // call the function
  return 0;
}

// Outputs "I just got executed!"

void swapNums(int &x, int &y) {
int z = x;
x = y;
y = z;
}

void myFunction(int myNumbers[5]) {
for (int i = 0; i < 5; i++) {
cout << myNumbers[i] << "\n";
}
}

int main() {
int myNumbers[5] = {10, 20, 30, 40, 50};
myFunction(myNumbers);
return 0;
}
```

### Overloading

```c++
int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}
```

## Tricks

```c++
int x = 5, y = 6, z = 50;
cout << x + y + z;
```

```c++
int x, y, z;
x = y = z = 50;
cout << x + y + z;
```

```c++
int time = 20;
string result = (time < 18) ? "Good day." : "Good evening.";
cout << result;
```

```c++
int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i : myNumbers) {
  cout << i << "\n";
}
```

```c++
string cars[] = {"Volvo", "BMW", "Ford"}; // Three arrays
string cars[3] = {"Volvo", "BMW", "Ford"}; // Also three arrays
```

```c++
string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
for (int i = 0; i < sizeof(cars) / sizeof(string); i++) {
  cout << cars[i] << "\n";
}
```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```

```c++

```


## Credits

- [youtube | C++ Crash Course For Beginners
  ](https://www.youtube.com/watch?v=1v_4dL8l8pQ&t=3464s&ab_channel=TraversyMedia)
- [youtube | C++ Tutorial for Beginners - Learn C++ in 1 Hour](https://www.youtube.com/watch?v=ZzaPdXTrSb8&ab_channel=ProgrammingwithMosh)
- [w3schools | C++ Tutorial](https://www.w3schools.com/cpp/)
- [pytorch | cpp](https://pytorch.org/cppdocs/frontend.html)
- []()








