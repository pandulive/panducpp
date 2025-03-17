# C++ Type Modifiers

In C++ programming, type modifiers are used to change the meaning of the fundamental data types

There are four type modifiers in C++:

- short
- long
- signed
- unsigned

# C++ Data Types

| Data Type            | Size (in Bytes) | Meaning                                             |
|----------------------|----------------|-----------------------------------------------------|
| `signed int`        | 4              | Used for integers (equivalent to `int`).           |
| `unsigned int`      | 4              | Can only store non-negative integers.              |
| `short`             | 2              | Used for small integers. Range: -32,768 to 32,767. |
| `long`              | at least 4      | Used for large integers. Equivalent to `long int`. |
| `unsigned long`     | 4              | Used for large positive integers or 0. Equivalent to `unsigned long int`. |
| `long long`         | 8              | Used for very large integers. Equivalent to `long long int`. |
| `unsigned long long` | 8             | Used for very large positive integers or 0. Equivalent to `unsigned long long int`. |
| `long double`       | 8              | Used for large floating-point numbers.             |
| `signed char`       | 1              | Used for characters. Guaranteed range -127 to 127. |
| `unsigned char`     | 1              | Used for characters. Range 0 to 255.               |


### short type Modifier
```cpp
// small integer
short a = 12345;
```

### long Type Modifier

If we need to store a large integer (in the range -2147483647 to 2147483647), we can use the type specifier long.

```cpp
// large floating-point number 
long double c = 0.333333333333333333L;
```

### long long

long can be repeated twice to create the long long type. This type is used for even larger numbers than long. long long type modifier can only be used with int.

```cpp
// long long int
long long num = 12345678;
```

### signed and unsigned Modifiers

```cpp
// positive valued integer 
signed int x = 23;

// negative valued integer
signed int y = -13;

// zero-valued integer
signed int z = 0;
```

### signed, unsigned and plain char
```cpp
// plain char
char plain_1 = 65;
char plain_2 = 0;

// plain char with negative value
// might cause problems with some compilers
char plain_3 = -56;

// signed char
signed char  sin_1 = 12;
signed char  sin_2 = 0;
signed char  sin_3 = -12;

// unsigned char
unsigned char  unsin_1 = 85;
unsigned char  unsin_2 = 0;
```