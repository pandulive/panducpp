#include <iostream>
using namespace std;

int main()
{
    // declare variables
    int var1 = 2;
    
    // print address of var1
    cout << "Value " << var1 <<endl;
    cout << "Address of var1: "<< &var1 << endl;
    // // int *ptr = &var1; // pointer to var1
    int *ptr = &var1 ; // pointer to var1
    // // *ptr = &var1;
    // cout << "Address of ptr: "<< *ptr << endl;
    // cout << "Value of ptr: "<< ptr << endl;

    // cout << "Value of ptr: "<< *&var1 << endl;

    // int ptr = *&var1; // pointing to var1
    // cout << "value of ptr: "<< ptr << endl;

    *ptr = 5; // changing value of var1
    cout << "Value of var1: "<< var1 << endl;


}

