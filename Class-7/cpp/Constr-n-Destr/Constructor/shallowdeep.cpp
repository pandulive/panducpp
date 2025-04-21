#include <iostream>
using namespace std;

class Sample {
private:
    int* data;

public:
    // Constructor
    Sample(int val) {
        data = new int(val);
        cout << "Constructor: Allocated memory at " << data << " with value " << *data << endl;
    }

    // Copy Constructor (Shallow Copy)
    Sample(const Sample& other) {
        data = other.data; // ❌ Both objects now share same memory
        cout << "Shallow Copy Constructor: Copied pointer to " << data << endl;
    }

    // Copy Constructor (Deep Copy ✅)
    // Sample(const Sample& other) {
    //     data = new int(*other.data); // ✅ Allocate new memory and copy value
    //     cout << "Deep Copy Constructor: New memory at " << data << " with copied value " << *data << endl;
    // }

    // Destructor
    ~Sample() {
        cout << "Destructor: Deleting memory at " << data << endl;
        // delete data;
    }

    void setValue(int val) {
        *data = val;
    }

    void print() const {
        cout << "Value: " << *data << " at " << data << endl;
    }
};

int main() {
    Sample obj1(10);       // Constructor
    Sample obj2 = obj1;    // Copy Constructor

    cout << "\nModifying obj1..." << endl;
    obj1.setValue(20);

    cout << "\nobj1: ";
    obj1.print();

    cout << "obj2: ";
    obj2.print();  // If deep copied, value remains 10

    return 0;
}
