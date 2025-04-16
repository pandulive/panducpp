#include <iostream>
#include <memory>
using namespace std;

void createLeak() {
    // Avoiding leaks by ensuring ownership is properly managed or released
    std::unique_ptr<int> smartPtr = std::make_unique<int>(5);
    // The unique_ptr goes out of scope and automatically frees the memory when function exits
}

int main() {
    for (int i = 0; i < 1000000; ++i) {
        createLeak();  // Properly managed memory by unique_ptr, no leaks
        cout<<"I am Done"<<endl;
    }
    return 0;
}
