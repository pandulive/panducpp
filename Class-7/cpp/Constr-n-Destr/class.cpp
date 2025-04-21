#include <iostream>
using namespace std;

class Person {
public:
    // Data members
    string name;
    int age;

    // Member function
    void introduce() {
        cout << "Hi, I'm " << name << " and I'm " << age << " years old." << endl;
    }
};

int main() {
    Person p1;
    p1.name = "Panduranga";
    p1.age = 34;
    p1.introduce();

    return 0;
}
