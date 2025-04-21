#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    // Default constructor
    
    // Constructor
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor called!" << endl;
    }

    // Destructor
    ~Person() {
        cout << "Destructor called for " << name << endl;
    }

    void introduce() {
        cout << "Hi, I'm " << name << " and I'm " << age << " years old." << endl;
    }
};

int main() {
    // Person p1; // Default constructor

    Person p1("Panduranga", 34);
    
    p1.introduce();

    return 0;
}
