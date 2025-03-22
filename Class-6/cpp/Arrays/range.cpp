/* 
C++11 introduced the ranged for loop. This for loop is specifically used with collections such as arrays and vectors.

// initialize an int array
int num[3] = {1, 2, 3};

// use of ranged for loop
for (int var : num) {
    // code
}

*/


#include <iostream>
using namespace std;

int main() {

    // initialize array  
    int numArray[] = {1, 2, 3, 4, 5};

    // use of ranged for loop to print array elements  
    for (int n : numArray) {
        cout << n << " ";
    }
  
    return 0;
}

/* 
// collection is not modified in the loop
for (const int &var : num) {
    // code
}
*/

