# C++ Programming Basics

## 1. C++ Keywords and Identifiers


### C++17 Keywords List

C++17 includes a set of **reserved keywords** that have specific meanings and cannot be used as identifiers (variable names, function names, etc.).

## 🔹 List of C++17 Keywords

| Keyword            | Description                                                                   |                             |                 |
| ------------------ | ----------------------------------------------------------------------------- | --------------------------- | --------------- |
| `alignas`          | Specifies alignment requirements for a type or object                         |                             |                 |
| `alignof`          | Returns the alignment of a type                                               |                             |                 |
| `and`              | Alternative representation for `&&` (logical AND)                             |                             |                 |
| `and_eq`           | Alternative representation for `&=` (bitwise AND assignment)                  |                             |                 |
| `asm`              | Embeds assembly language code                                                 |                             |                 |
| `auto`             | Deduces the type of a variable automatically                                  |                             |                 |
| `bitand`           | Alternative representation for `&` (bitwise AND)                              |                             |                 |
| `bitor`            | Alternative representation for \`                                             | \` (bitwise OR)             |                 |
| `bool`             | Declares a Boolean variable (`true` or `false`)                               |                             |                 |
| `break`            | Exits a loop or `switch` statement                                            |                             |                 |
| `case`             | Defines individual cases in a `switch` statement                              |                             |                 |
| `catch`            | Handles an exception                                                          |                             |                 |
| `char`             | Declares a character variable                                                 |                             |                 |
| `char16_t`         | Declares a 16-bit Unicode character                                           |                             |                 |
| `char32_t`         | Declares a 32-bit Unicode character                                           |                             |                 |
| `class`            | Defines a class                                                               |                             |                 |
| `compl`            | Alternative representation for `~` (bitwise NOT)                              |                             |                 |
| `concept`          | Placeholder for C++20 concept (not used in C++17)                             |                             |                 |
| `const`            | Declares a constant variable                                                  |                             |                 |
| `constexpr`        | Evaluates a function or variable at compile-time                              |                             |                 |
| `const_cast`       | Converts between const and non-const types                                    |                             |                 |
| `continue`         | Skips the current iteration of a loop                                         |                             |                 |
| `decltype`         | Deduces the type of an expression                                             |                             |                 |
| `default`          | Used in `switch`, default constructor, and defaulted functions                |                             |                 |
| `delete`           | Deletes a dynamically allocated object                                        |                             |                 |
| `do`               | Starts a `do-while` loop                                                      |                             |                 |
| `double`           | Declares a double-precision floating-point variable                           |                             |                 |
| `dynamic_cast`     | Performs type-safe dynamic type conversion                                    |                             |                 |
| `else`             | Alternative condition in `if-else` statements                                 |                             |                 |
| `enum`             | Declares an enumeration                                                       |                             |                 |
| `explicit`         | Specifies that a constructor or conversion operator cannot be used implicitly |                             |                 |
| `export`           | Used for exporting templates (rarely used)                                    |                             |                 |
| `extern`           | Declares a variable or function as externally linked                          |                             |                 |
| `false`            | Boolean false value                                                           |                             |                 |
| `float`            | Declares a floating-point variable                                            |                             |                 |
| `for`              | Starts a for loop                                                             |                             |                 |
| `friend`           | Declares a friend function or class with access to private members            |                             |                 |
| `goto`             | Transfers control to a labeled statement (not recommended)                    |                             |                 |
| `if`               | Conditional statement                                                         |                             |                 |
| `inline`           | Suggests function inlining                                                    |                             |                 |
| `int`              | Declares an integer variable                                                  |                             |                 |
| `long`             | Declares a long integer variable                                              |                             |                 |
| `mutable`          | Allows modification of a member variable in a `const` object                  |                             |                 |
| `namespace`        | Defines a scope for identifiers                                               |                             |                 |
| `new`              | Allocates memory dynamically                                                  |                             |                 |
| `noexcept`         | Specifies that a function does not throw exceptions                           |                             |                 |
| `not`              | Alternative representation for `!` (logical NOT)                              |                             |                 |
| `not_eq`           | Alternative representation for `!=` (not equal)                               |                             |                 |
| `nullptr`          | Represents a null pointer                                                     |                             |                 |
| `operator`         | Overloads an operator                                                         |                             |                 |
| `or`               | Alternative representation for \`                                             |                             | \` (logical OR) |
| `or_eq`            | Alternative representation for \`                                             | =\` (bitwise OR assignment) |                 |
| `private`          | Private access specifier in a class                                           |                             |                 |
| `protected`        | Protected access specifier in a class                                         |                             |                 |
| `public`           | Public access specifier in a class                                            |                             |                 |
| `register`         | Deprecated keyword, originally used to suggest register storage               |                             |                 |
| `reinterpret_cast` | Converts between different pointer types                                      |                             |                 |
| `requires`         | Placeholder for C++20 requires clause (not used in C++17)                     |                             |                 |
| `return`           | Returns a value from a function                                               |                             |                 |
| `short`            | Declares a short integer variable                                             |                             |                 |
| `signed`           | Declares a signed integer variable                                            |                             |                 |
| `sizeof`           | Returns the size of a type or object                                          |                             |                 |
| `static`           | Specifies static storage duration                                             |                             |                 |
| `static_assert`    | Compile-time assertion check                                                  |                             |                 |
| `static_cast`      | Performs explicit type conversion                                             |                             |                 |
| `struct`           | Defines a structure                                                           |                             |                 |
| `switch`           | Multi-way branching statement                                                 |                             |                 |
| `template`         | Defines a template class or function                                          |                             |                 |
| `this`             | Refers to the current object instance                                         |                             |                 |
| `thread_local`     | Declares a thread-local storage variable                                      |                             |                 |
| `throw`            | Throws an exception                                                           |                             |                 |
| `true`             | Boolean true value                                                            |                             |                 |
| `try`              | Starts an exception handling block                                            |                             |                 |
| `typedef`          | Defines a type alias (use `using` in modern C++)                              |                             |                 |
| `typeid`           | Returns type information of an object                                         |                             |                 |
| `typename`         | Specifies a type name in a template                                           |                             |                 |
| `union`            | Defines a union data structure                                                |                             |                 |
| `unsigned`         | Declares an unsigned integer variable                                         |                             |                 |
| `using`            | Declares a type alias or namespace directive                                  |                             |                 |
| `virtual`          | Declares a virtual function for polymorphism                                  |                             |                 |
| `void`             | Specifies that a function has no return value                                 |                             |                 |
| `volatile`         | Specifies that a variable can be modified at any time                         |                             |                 |
| `wchar_t`          | Declares a wide character type                                                |                             |                 |
| `while`            | Starts a while loop                                                           |                             |                 |
| `xor`              | Alternative representation for `^` (bitwise XOR)                              |                             |                 |
| `xor_eq`           | Alternative representation for `^=` (bitwise XOR assignment)                  |                             |                 |

## 🔹 Example Usage

```c++
#include <iostream>
using namespace std;

int main() {
    constexpr int x = 10; // Using constexpr keyword
    static_assert(x > 0, "x must be positive"); // Using static_assert

    cout << "Value of x: " << x << endl;
    return 0;
}

constexpr in C++: Purpose & Usage

The constexpr keyword in C++ specifies that a variable, function, or object must be evaluated at compile-time. It helps in optimization and performance improvements by ensuring that expressions are computed before runtime.
```

This file lists **all C++17 keywords** and their descriptions. Use this as a **quick reference** for C++ programming!

