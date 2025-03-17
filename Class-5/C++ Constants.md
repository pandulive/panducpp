# C++ Constants
```cpp
// makes PI a constant
const double PI = 3.14;
```

## C++ const
```cpp
#include <iostream>
using namespace std;

int main() {
    
    // initialize a const PI
    const double PI = 3.14;
    
    int radius = 4;

    // use the const in a calculation
    double area = PI * radius * radius;
    
    cout << "Area of circle with radius " << radius << " is: " << area;

    return 0;
}
```

## Const Reference to a Const Variable

```cpp
#include <iostream>
using namespace std;

int main() {

    // initialize a constant PI  
    const double PI = 3.14;
  
    // create a read-only reference to PI
    const double &PI_REF = PI;
  
    cout << "PI: " << PI;
    cout << "\nPI_REF: " << PI_REF;
  
    return 0;
}
```

I Q: Is it possible to create a constant reference to a non-constant variable?

### Pointers to a Const
A pointer to a const is a pointer variable that points to a constant variable.

```cpp
#include <iostream>
using namespace std;

int main() {

    // initialize a constant TOTAL_MONTHS  
    const int TOTAL_MONTHS = 12;
 
    // MONTHS_PTR is a pointer to an int const
    const int *MONTHS_PTR = &TOTAL_MONTHS;
  
    cout << "TOTAL_MONTHS: " << TOTAL_MONTHS << endl;
    cout << "*MONTHS_PTR: " << *MONTHS_PTR << endl;

    // create another int constant
    const int HALF_MONTHS = 6;

    // MONTHS_PTR now points to HALF_MONTHS
    MONTHS_PTR = &HALF_MONTHS;

    cout << endl;
  
    cout << "HALF_MONTHS: " << HALF_MONTHS << endl;
    cout << "*MONTHS_PTR: " << *MONTHS_PTR;

    return 0;
}
```

## Const Pointer

```cpp
#include <iostream>
using namespace std;

int main() {
    
    string country1 = "India";
    string country2 = "USA";
  
    cout << "Initially, country1: " << country1 << endl;
  
    // PTR1 is a const pointer to country1
    string *const PTR1 = &country1;
  
    // change the value of country1 using PTR1
    *PTR1 = country2;
  
    cout << "Finally, country1: " << country1;
  
    return 0;
}
```

## Const Pointer to a Const

```cpp
#include <iostream>
using namespace std;

int main() {
    
    // create a const variable
    const string COUNTRY1 = "Nepal";
    
    // create a const pointer to const
    const string *const PTR = &COUNTRY1;

    cout << *PTR;
  
    return 0;
}
```

## Const Expression

```cpp
// declare a function as constexpr
constexpr int add_numbers(int a, int b) {...}

// declare a variable as constexpr
constexpr int sum = add_numbers(660, 6);
```

