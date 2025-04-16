#include <iostream>
#include <memory>

using namespace std;

int main() {
    shared_ptr<int> ptr1 = make_shared<int>(10); // reference count = 1
    shared_ptr<int> ptr2 = ptr1;                 // reference count = 2

    cout << "Value: " << *ptr1 << endl;
    cout << "Use count: " << ptr1.use_count() << endl;

    ptr2.reset(); // reference count = 1

    cout << "After reset, use count: " << ptr1.use_count() << endl;

    return 0; // ptr1 goes out of scope, memory is released
}

/*
Example 2
#include <iostream>
#include <memory>

void printAndDouble(std::shared_ptr<int> p) {
    std::cout << "Value: " << *p << std::endl;
    *p *= 2;
    std::cout << "Doubled Value: " << *p << std::endl;
}

int main() {
    std::shared_ptr<int> num = std::make_shared<int>(10);
    printAndDouble(num);  // shared ownership passed to function

    std::cout << "Back in main, Value: " << *num << std::endl;
    std::cout << "Use count: " << num.use_count() << std::endl;

    return 0;
}
Example 3
#include <iostream>
#include <memory>
#include <vector>

int main() {
    std::vector<std::shared_ptr<int>> numbers;

    for (int i = 1; i <= 5; ++i) {
        numbers.push_back(std::make_shared<int>(i * 10));
    }

    for (const auto& num : numbers) {
        std::cout << *num << " ";
    }

    std::cout << "\nUse count of first element: " << numbers[0].use_count() << std::endl;

    return 0;
}

Example 4

#include <iostream>
#include <memory>

std::shared_ptr<std::string> getMessage() {
    return std::make_shared<std::string>("Hello from shared_ptr!");
}

int main() {
    std::shared_ptr<std::string> msg = getMessage();
    std::cout << *msg << std::endl;

    return 0;
}

Example 5
#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> ptr(new int(42), [](int* p) {
        std::cout << "Custom deleter called for value: " << *p << std::endl;
        delete p;
    });

    std::cout << "Value: " << *ptr << std::endl;

    return 0;  // Custom deleter called automatically
}

*/
