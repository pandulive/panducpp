A string is a collection of characters. There are two types of strings commonly used in C++ :

- Strings that are objects of string class (The Standard C++ Library String Class)
- C-strings (C-style Strings)

C-strings

In C programming, the collection of characters is stored in the form of arrays \. 
This is also supported in C++ programming. Hence, it's called C-strings.

C-strings are arrays of type char terminated with a null character, that is, \0 (ASCII value of null character is 0).

How to define a C-string?
```c
char str[] = "C++";

Here, "C++" has three characters, the null character \0 is added to the end of the string automatically.
```

### Alternative ways of defining a string
```c
char str[4] = "C++";
     
char str[] = {'C','+','+','\0'};

char str[4] = {'C','+','+','\0'};

Like and array: 
char str[100] = "C++";
```
Practice : cstring.cpp


## String Object

In C++, you can also create a string object for holding strings.

Unlike using char arrays, string objects have no fixed length and can be extended as per your requirement.

Practice : string.cpp


## String Class

In C++, the string class is used to represent a sequence of characters as an object of the class.

We can access the various string class functions by including the <string> header in our file.
```cpp
#include <string>
```

### String Class Functions

The common functions that are used with the string class are.

| Function  | Description                                      |
|-----------|--------------------------------------------------|
| `find()`  | Find a substring in the string.                 |
| `rfind()` | Find the last occurrence of a substring.        |
| `append()`| Append to the string.                           |
| `insert()`| Insert into the string.                         |
| `erase()` | Erase characters from the string.               |
| `replace()` | Replace portions of the string.              |
| `compare()` | Compare two strings.                         |


Practice : Example 1: Find a Substring in the Given String