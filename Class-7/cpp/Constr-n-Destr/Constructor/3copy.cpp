#include<iostream>
using namespace std;

class Demo {
    public:
        int value;
        Demo(int v) : value(v) {
            cout << "Parameterized constructor called. value = " << value << endl;
        }
        
        Demo(const Demo& other) {
            value = other.value;
            cout << "Copy constructor called. Copied value = " << value << endl;
        }
    };

int main(){
    Demo d1(10); // Parameterized constructor
    Demo d2 = d1; // Copy constructor called
    cout << "Original value: " << d1.value << endl;
    cout << "Copied value: " << d2.value << endl;
    d2.value = 20; // Changing the copied object
    cout << "After changing copied value: " << d2.value << endl;
    cout << "Original value remains unchanged: " << d1.value << endl;
    // Destructor is called automatically when the objects go out of scope
    
    
    return 0;
}

/*
#include <iostream>
using namespace std;

class Box {
public:
    int length;

    Box(int l) : length(l) {}

    // Copy Constructor
    Box(const Box& b) {
        length = b.length;
        cout << "Copy Constructor called!" << endl;
    }

    void show() {
        cout << "Length = " << length << endl;
    }
};

int main() {
    Box b1(10);      // Normal constructor
    Box b2 = b1;     // Copy constructor called
    b2.show();       
}

*/

/* 
// Copy Constructor with Pointer Members (Deep Copy)
#include <iostream>
using namespace std;

class Deep {
private:
    int* data;

public:
    Deep(int val) {
        data = new int(val);
        cout << "Constructor called with value: " << *data << endl;
    }

    // Deep copy constructor
    Deep(const Deep& other) {
        data = new int(*other.data);
        cout << "Deep Copy Constructor called" << endl;
    }

    void show() {
        cout << "Value: " << *data << endl;
    }

    ~Deep() {
        delete data;
        cout << "Destructor called" << endl;
    }
};

int main() {
    Deep d1(100);
    Deep d2 = d1; // Calls deep copy constructor
    d2.show();
}

*/

/*
Copy Constructor Called When Passed by Value
#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {}
    
    // Copy constructor
    Demo(const Demo& d) {
        cout << "Copy Constructor called!" << endl;
    }
};

void display(Demo d) {
    cout << "Inside function\n";
}

int main() {
    Demo obj;
    display(obj); // Passing by value calls copy constructor
}

*/

/*
// Copy Constructor in Return by Value

#include <iostream>
using namespace std;

class Sample {
public:
    Sample() {}
    Sample(const Sample& s) {
        cout << "Copy constructor called!" << endl;
    }
};

Sample createObject() {
    Sample temp;
    return temp; // May call copy constructor (or optimized with move/NRVO)
}

int main() {
    Sample s1 = createObject();
}

*/