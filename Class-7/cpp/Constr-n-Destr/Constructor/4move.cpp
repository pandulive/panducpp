/*

Without Move (Copy happens)
MyClass a;
MyClass b = a; // Copy constructor

With Move (Ownership transferred)
MyClass a;
MyClass b = std::move(a); // Move constructor


*/

#include <iostream>
#include <utility> // for std::move

class MyClass {
private:
    int* data;

public:
    // Constructor
    MyClass(int val) {
        data = new int(val);
        std::cout << "Constructor: Allocated memory with value " << *data << "\n";
    }

    // Copy Constructor
    MyClass(const MyClass& other) {
        data = new int(*other.data);
        std::cout << "Copy Constructor: Copied value " << *data << "\n";
    }

    // Move Constructor
    MyClass(MyClass&& other) noexcept {
        data = other.data;        // Steal the pointer
        other.data = nullptr;     // Nullify source
        std::cout << "Move Constructor: Transferred ownership\n";
    }

    // Move Assignment Operator
    MyClass& operator=(MyClass&& other) noexcept {
        if (this != &other) {
            delete data;              // Clean existing resource
            data = other.data;        // Steal resource
            other.data = nullptr;     // Nullify source
            std::cout << "Move Assignment: Transferred ownership\n";
        }
        return *this;
    }

    // Destructor
    ~MyClass() {
        delete data;
        std::cout << "Destructor: Freed memory\n";
    }

    void show() {
        if (data)
            std::cout << "Value: " << *data << "\n";
        else
            std::cout << "No data\n";
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2 = std::move(obj1); // Move Constructor

    MyClass obj3(50);
    obj3 = std::move(obj2);         // Move Assignment

    obj1.show();
    obj2.show();
    obj3.show();

    return 0;
}

