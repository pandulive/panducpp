#include <iostream>
using namespace std;
// Default constructor
// A constructor that does not take any parameters is called a default constructor.
// It is automatically called when an object of the class is created.
class Demo {
    public:
        Demo() {
            cout<< "Default constructor called\n";
        }
    };
int main() {
    Demo d1; // Default constructor is called
    return 0;
}