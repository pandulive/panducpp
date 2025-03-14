#include <iostream>
using namespace std;

int pandu() {
    auto name = "Panduranga"; // Using const keyword
    auto b = 20.10;
    const auto c = 'A'*2;

    // a = 20;
    // a = -10;
    // c = 145;

    cout<<" Value of a is int " << a << " The value B is float " << b << " Tada" <<endl;
    cout<< c <<endl;
    return 0;
}
// int main() {
//     constexpr int x = 10; // Using constexpr keyword
//     static_assert(x > 0, "x must be positive"); // Using static_assert
//     cout << "Value of x: " << x << endl;
//     return 0;
// }