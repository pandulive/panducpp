# Memory Management
In this topic we need to understand more on Pointers in one Go. 

For any Modern Job Interview, below topics are necessory
1. Raw Pointers (Dynamic Memory Allocation)
2. Smart Pointers
    a. Unique Pointers
    b. Shared Pointers
    c. weak Pointers

Next, Memory can be understood well with the usage of `new` and `delete` keywards with the Pointers.
Check the example : memory.cpp

Dynamic Memory Allocation
new and delete
Arrays with `new[]` and `delete[]`
`nullptr` and best practices

1. Raw Pointers: memory.cpp

2. Smart Pointers

a. Unique Pointers: uniques.cpp

b. Shared Pointers: shared.cpp

c. Weak Pointers: weak.cpp
If two objects hold shared_ptr to each other (a circular reference), their reference count never drops to 0, and memory is never freed. weak_ptr breaks this cycle.

More into deep: 

