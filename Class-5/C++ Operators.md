# C++ Operators
 Operators are symbols that perform operations on variables and values

 Operators in C++ can be classified into 6 types:

1. Arithmetic Operators
2. Assignment Operators
3. Relational Operators
4. Logical Operators
5. Bitwise Operators
6. Other Operators

## 1. C++ Arithmetic Operators

```cpp
a + b;
```
### List

| Operator | Operation                      |
|----------|--------------------------------|
| `+`      | Addition                       |
| `-`      | Subtraction                    |
| `*`      | Multiplication                 |
| `/`      | Division                        |
| `%`      | Modulo Operation (Remainder after division) |


### Arithmetic Operators

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    a = 7;
    b = 2;

    // printing the sum of a and b
    cout << "a + b = " << (a + b) << endl;

    // printing the difference of a and b
    cout << "a - b = " << (a - b) << endl;

    // printing the product of a and b
    cout << "a * b = " << (a * b) << endl;

    // printing the division of a by b
    cout << "a / b = " << (a / b) << endl;

    // printing the modulo of a by b
    cout << "a % b = " << (a % b) << endl;

    return 0;
}
```

### Working of increment and decrement operators
```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 100, result_a, result_b;

    // incrementing a by 1 and storing the result in result_a
    result_a = ++a;
    cout << "result_a = " << result_a << endl;


    // decrementing b by 1 and storing the result in result_b   
    result_b = --b;
    cout << "result_b = " << result_b << endl;

    return 0;
}
```

## 2. C++ Assignment Operators


| Operator | Example  | Equivalent to     |
|----------|---------|------------------|
| `=`      | `a = b;`  | `a = b;`         |
| `+=`     | `a += b;` | `a = a + b;`     |
| `-=`     | `a -= b;` | `a = a - b;`     |
| `*=`     | `a *= b;` | `a = a * b;`     |
| `/=`     | `a /= b;` | `a = a / b;`     |
| `%=`     | `a %= b;` | `a = a % b;`     |


### Assignment Operators

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;

    // 2 is assigned to a
    a = 2;

    // 7 is assigned to b
    b = 7;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "\nAfter a += b;" << endl;

    // assigning the sum of a and b to a
    a += b;  // a = a +b
    cout << "a = " << a << endl;

    return 0;
}
```

## 3. C++ Relational Operators


| Operator | Meaning                        | Example               |
|----------|--------------------------------|-----------------------|
| `==`     | Is Equal To                    | `3 == 5` → `false`    |
| `!=`     | Not Equal To                   | `3 != 5` → `true`     |
| `>`      | Greater Than                   | `3 > 5` → `false`     |
| `<`      | Less Than                      | `3 < 5` → `true`      |
| `>=`     | Greater Than or Equal To       | `3 >= 5` → `false`    |
| `<=`     | Less Than or Equal To          | `3 <= 5` → `true`     |

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    a = 3;
    b = 5;
    bool result;

    result = (a == b);   // false
    cout << "3 == 5 is " << result << endl;

    result = (a != b);  // true
    cout << "3 != 5 is " << result << endl;

    result = a > b;   // false
    cout << "3 > 5 is " << result << endl;

    result = a < b;   // true
    cout << "3 < 5 is " << result << endl;

    result = a >= b;  // false
    cout << "3 >= 5 is " << result << endl;

    result = a <= b;  // true
    cout << "3 <= 5 is " << result << endl;

    return 0;
}
```

## 4. C++ Logical Operators



| Operator | Example                     | Meaning                                           |
|----------|-----------------------------|---------------------------------------------------|
| `&&`     | `expression1 && expression2` | Logical AND. True only if all the operands are true. |
| `||`     | `expression1 || expression2` | Logical OR. True if at least one operand is true. |
| `!`      | `!expression`                | Logical NOT. True only if the operand is false. |

```cpp
#include <iostream>
using namespace std;

int main() {
    bool result;

    result = (3 != 5) && (3 < 5);     // true
    cout << "(3 != 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 < 5);    // false
    cout << "(3 == 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 > 5);    // false
    cout << "(3 == 5) && (3 > 5) is " << result << endl;

    result = (3 != 5) || (3 < 5);    // true
    cout << "(3 != 5) || (3 < 5) is " << result << endl;

    result = (3 != 5) || (3 > 5);    // true
    cout << "(3 != 5) || (3 > 5) is " << result << endl;

    result = (3 == 5) || (3 > 5);    // false
    cout << "(3 == 5) || (3 > 5) is " << result << endl;

    result = !(5 == 2);    // true
    cout << "!(5 == 2) is " << result << endl;

    result = !(5 == 5);    // false
    cout << "!(5 == 5) is " << result << endl;

    return 0;
}
```

## 5. C++ Bitwise Operators

In C++, bitwise operators are used to perform operations on individual bits. They can only be used alongside char and int data types.


| Operator | Description                 |
|----------|-----------------------------|
| `&`      | Binary AND                  |
| `|`      | Binary OR                   |
| `^`      | Binary XOR                  |
| `~`      | Binary One's Complement      |
| `<<`     | Binary Shift Left           |
| `>>`     | Binary Shift Right          |

## 6. Other C++ Operators / C++ Miscellaneous Operators


| Operator | Description                                      | Example                                |
|----------|--------------------------------------------------|----------------------------------------|
| `sizeof` | Returns the size of data type                   | `sizeof(int); // 4`                    |
| `?:`     | Returns value based on the condition            | `string result = (5 > 0) ? "even" : "odd"; // "even"` |
| `&`      | Represents memory address of the operand        | `&num; // address of num`              |
| `.`      | Accesses members of struct/class objects        | `s1.marks = 92;`                       |
| `->`     | Used with pointers to access struct/class vars  | `ptr->marks = 92;`                     |
| `<<`     | Prints the output value                         | `cout << 5;`                           |
| `>>`     | Gets the input value                            | `cin >> num;`                          |
