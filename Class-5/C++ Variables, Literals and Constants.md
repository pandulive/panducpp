# C++ Variables, Literals and Constants

## C++ Variables

In C++ programming, a variable is a "container (storage area)" to hold data.

    - A variable name can only have alphabets, numbers, and the underscore _.
    - A variable name cannot begin with a number.
    - It is a preferred practice to begin variable names with a lowercase character. For example, name is preferable to Name.
    -Rules for naming a variable A variable name cannot be a keyword. For example, int is a keyword that is used to denote integers.
    - A variable name can start with an underscore. However, it's not considered a good practice.


## C++ Constants

In C++, we can create variables whose value cannot be changed. For that, we use the "const" keyword. Here's an example:

```cpp
    const int L_SPEED = 299792458;
    L_SPEED = 2500 // Error! LIGHT_SPEED is a constant.
```

## C++ Literals
Literals are data used for representing fixed values. They can be used directly in the code. For example: 1, 2.5, 'c' etc.

### 1. Integers
An integer is a numeric literal(associated with numbers) without any fractional or exponential part. There are three types of integer literals in C++ programming:

- decimal (base 10) : 0, -9, 22 etc
- octal (base 8) : 021, 077, 033 etc
- hexadecimal (base 16) : 0x7f, 0x2a, 0x521 etc

In C++ programming, octal starts with a 0, and hexadecimal starts with a 0x.

### 2. Floating-point Literals

A floating-point literal is a numeric literal that has either a fractional form or an exponent form.

- -2.0

- 0.0000234

- -0.22E-5

Note: E-5 = 10-5

### 3. Characters

A character literal is created by enclosing a single character inside single quotation marks. For example: 'a', 'm', 'F', '2', '}' etc.

### 4. String Literals

A string literal is a sequence of characters enclosed in double-quote marks.

- "good" : 	string constant

- ""	: null string constant

- " "	string constant of six white space

- "x"	string constant having a single character

- "Earth is round\n"	prints string with a newline