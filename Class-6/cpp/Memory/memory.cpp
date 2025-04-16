#include<iostream>
using namespace std;

int main(){
    // int* ptr;
    // ptr = new int;

    int *ptr = new int; // dynamically allocate memory for an integer
    *ptr = 5; // assign value to the allocated memory
    cout << "Value: " << *ptr << endl; // print the value
    cout << "Address: " << ptr << endl; // print the address
    delete ptr; // free the allocated memory
    return 0;

}