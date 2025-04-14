
 
1. C++ Functions

A function is a block of code that performs a specific task.

Suppose we need to create a program to create a circle and color it. We can create two functions to solve this problem:
a. Standard Library Functions: Predefined in C++
b. User-defined Function: Created by users

C++ Function Declaration
```cpp
returnType functionName (parameter1, parameter2,...) {
    // function body   
}
```


2. C++ Programming Default Arguments (Parameters)
In C++ programming, we can provide default values for function parameters.

If a function with default arguments is called without passing arguments, then the default parameters are used.

However, if arguments are passed while calling the function, the default arguments are ignored.

#include <iostream>
using namespace std;

```cpp
// defining the default arguments
void display(char = '*', int = 3);

int main() {
    int count = 5;

    cout << "No argument passed: ";
    // *, 3 will be parameters
    display(); 
    
    cout << "First argument passed: ";
     // #, 3 will be parameters
    display('#'); 
    
    cout << "Both arguments passed: ";
    // $, 5 will be parameters
    display('$', count); 

    return 0;
}

void display(char c, int count) {
    for(int i = 1; i <= count; ++i)
    {
        cout << c;
    }
    cout << endl;
}

```

3. C++ Function Overloading

In C++, two functions can have the same name if the number and/or type of arguments passed is different.

```cpp
// same name different arguments
int test() { }
int test(int a) { }
float test(double a) { }
int test(int a, double b) { }
```

4. C++ Inline Functions

To make our Executable file work without any error, we do the error and warning checking at the time of Compilation, So, we use inline keyword

5. C++ Recursion

A function that calls itself is known as a recursive function. And, this technique is known as recursion.
```cpp
// Factorial of n = 1*2*3*...*n

#include <iostream>
using namespace std;

int factorial(int);

int main() {
    int n, result;

    cout << "Enter a non-negative number: ";
    cin >> n;

    result = factorial(n);
    cout << "Factorial of " << n << " = " << result;
    return 0;
}

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}
```
