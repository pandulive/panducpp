#include<iostream>
using namespace std;

class Person{
        
    public:
        string name;
        int age;

        Person(string n, int a) : name(n), age(a) {}

        void display() {
            cout << "Name: " << name << ", Age: " << age << endl;
        }
};

// Abstraction


int main(){
    Person p("Panduranga", 34);
 
    p.display(); // This will cause a compilation error

return 0;   
}