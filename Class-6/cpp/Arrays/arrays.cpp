#include <iostream>
using namespace std;

// Example 1 : Array Declaration, Initialization and Displaying

int main() {

  int numbers[5] = {7, 5, 6, 12, 35};

  cout << "The numbers are: ";

  //  Printing array elements
  // using range based for loop
  for (int n : numbers) {
    cout << n << "  ";
  }

  cout << "\nThe numbers are: ";

  //  Printing array elements
  // using traditional for loop
  for (int i = 0; i < 5; ++i) {
    cout << numbers[i] << "  ";
  }
  return 0;
}

// Example 2 : Take Inputs from User and Store Them in an Array

/* 
 //  store input from user to array
  for (int i = 0; i < 5; ++i) {
    cin >> numbers[i];
  }
*/


 