#include<iostream>

int karthik() {
    auto name = "Panduranga"; // Using const keyword
    auto b = 20.10;
    const auto c = 'A'*2;

    // a = 20;
    // a = -10;
    // c = 145;

    std::cout<<" Value of a is int " << a << " The value B is float " << b << " Tada" <<std::endl;
    std::cout<< c <<std::endl;
    return 0;
}