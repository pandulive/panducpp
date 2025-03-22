# C++ Arrays and Strings

## Arrays

In C++, an array is a variable that can store multiple values of the same type

Suppose a class has 10 students, and we need to store all their Marks. Instead of creating 10 separate variables, we can simply create an array:

```cpp
double marks[10];
```

### C++ Array Declaration

```cpp
dataType arrayName[arraySize];
```

```cpp
int x[6];
```

### Accessing Elements in C++ Array
```cpp
// syntax to access array elements
array[index];
```

### C++ Array Initialization
```cpp
// declare and initialize an array
int x[10] = {7, 0, 1, 9, 6, 0, 0, 2, 8, 1};
```

Another method to initialize array during declaration:
```cpp
// declare and initialize an array
int x[] = {7, 0, 1, 9, 6, 0, 0, 2, 8, 1};

- Here, we have not mentioned the size of the array. In such cases, the compiler automatically computes the size.
```

### C++ Array With Empty Members
In C++, if an array has a size n, we can store up to n number of elements in the array. However, what will happen if we store less than n number of elements.
```cpp
// declare and initialize an array
int x[10] = {7, 0, 1};
```

#### How to Insert and Print Array Elements?

```cpp
int mark[5] = {19, 10, 8, 17, 9}

// change 4th element to 9
mark[3] = 9;

// take input from the user
// store the value at third position
cin >> mark[2];


// take input from the user
// insert at ith position
cin >> mark[i-1];

// print first element of the array
cout << mark[0];

// print ith element of the array
cout >> mark[i-1];
```


Practice : Example 1: Displaying Array Elements ( arrays.cpp)

Practice : Example 2: Take Inputs from User and Store Them in an Array (arrays.cpp)

Understanings : C++ Ranged for Loop
What if C++ Array Out of Bounds access happened.
Practice :  Example 3 : range.cpp


C++ Ranged for Loop Best Practices: 

```cpp
int num[3] = {1, 2, 3};

// copy elements of num to var
for (int var : num) {
    // code
}

// access memory location of elements of num
for (int &var : num) {
    // code
}
```

Notice the use of & before var. Here,

- int var : num - Copies each element of num to the var variable in each iteration. This is not good for computer memory.
- int &var : num - Does not copy each element of num to var. Instead, accesses the elements of num directly from num itself. This is more efficient.

## Passing Array to a Function in C++ Programming
In C++, we can pass arrays as an argument to a function. And, also we can return arrays from a function.

The syntax for passing an array to a function is:
```cpp
returnType functionName(dataType arrayName[]) {
    // code
}
```

Practice : Example 3: Passing One-dimensional Array to a Function (array-1d.cpp)

Practice : Example 4: Passing Multidimensional Array to a Function (array-2d.cpp)


## Strings