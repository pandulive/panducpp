#include <iostream>
using namespace std;

int main() {
    constexpr int x = 10; // Using constexpr keyword
    static_assert(x > 0, "x must be positive"); // Using static_assert
    cout << "Value of x: " << x << endl;
    return 0;
}