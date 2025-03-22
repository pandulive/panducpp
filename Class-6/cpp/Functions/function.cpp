#include<iostream>
// #inlcude<bit/stdc++.h>
// #include<bits/stdc++.h>

using namespace std;

// auto takex(){
//     int x;
//     cout<<"Enter the value of x : ";
//     cin>>x;
//     return x;
// }

// int printable(int x){
//     return x*x;
// }

// int main()
// {
//     // printable(4);
//     int y ;
    
//     y = takex();

//     cout<<"Entered the value of x : " << 10 * printable(y)<<endl;
//     // cout<<"The value of x : "<< x << endl;
//     return 0;
// }   // End of main function

// void printable(int x){
//     // cout<<"The value of x : "<< x << endl;
//     cout<<"Enter the value of x : ";
//     cin>>x;
//     cout<<"The value of x : "<< x << endl;
// }

// int func();
// auto func(auto x);
// // string func(string x);

// int main(){

    
//     cout<<" I am start of the program "<<endl;
//     func(10);
//     func("Karthik");
//     return 0;

// }

// int func(){
//     cout<<" I am Simple function "<<endl;
// }

// auto func(auto x){
//     cout<< x <<" I am the Value of x "<<endl;
//     return 0;
// }

// string func(string x){
//     cout<< x <<" I am the Value of x "<<endl;
//     return 0;
// }


#include <iostream>
using namespace std;

int factorial(int);

int main() {
    int n, result;

    cout << "Enter a non-negative number: ";
    cin >> n;

    result = factorial(n);
    cout << "Factorial of " << n << " = " << result;
    return 0;
}

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n-1);
    } else {
        return 1;
    }
}