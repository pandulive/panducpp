# Pointers

In C++, pointers are variables that store the memory addresses of other variables.

Understand the Address : address.cpp

## Pointers

Pointers declaration : 
```cpp
int *point_var;
```

### Assigning Addresses to Pointers
```cpp
int var = 6;
int* point_var = &var;
```

### Get the Value from the Address Using Pointers
```cpp
int var = 11;

// assign address of var to point_var
int* point_var = &var;

// access value pointed by point_var
cout << *point_var << endl;   // Output: 5
```

Be careful:
In C++, point_var and *point_var are completely different.
We cannot do something like *point_var = &var;. 
Here, point_var is a pointer that stores the address of variable 
it points to while *point_var returns the value stored at the address pointed by point_var.



> **🔥 Warning: In C++, point_var and * point_var are completely different**  
> Be careful:
> 
> We cannot do something like point_var = &var;.
>
> Here, point_var is a pointer that stores the address of variable it points to while *point_var returns the value stored at the address pointed by point_var.

### Changing Value Pointed by Pointers

```cpp
int var = 5;
int* point_var = &var;

// change value at address point_var
*point_var = 1;

cout << var << endl;
```

## Pointers and Arrays

In C++, Pointers are variables that hold addresses of other variables <br>
Not only can a pointer store the address of a single variable, it can also store the address of cells of an array.

```cpp
int *ptr;
int arr[5];

// store the address of the first
// element of arr in ptr
ptr = arr;
```

```cpp
int *ptr;
int arr[5];
ptr = &arr[0];
```

Practice : Pointers and Arrays : pa.cpp
Understand Below: 
## Core Pointer Concepts
### 1. Basic Pointers
    Declaring, assigning, and dereferencing
    Pointer to int, float, char, etc.

### 2. Pointer Arithmetic
    Increment, decrement, difference
    Working with arrays

### 3. Pointers and Functions
    Passing by pointer
    Returning pointer from function

### 4. Const with Pointers
    `const int*` , `int* const` , `const int* const` 

### 5. Dynamic Memory Allocation
    new and delete
    Arrays with new[] and delete[]
    nullptr and best practices

### 6. Dangling & Wild Pointers
    Common mistakes and how to avoid

    
For Advanced Topic: Refer the Memory Topic


