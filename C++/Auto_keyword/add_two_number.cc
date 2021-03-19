#include<iostream>
#include <typeinfo>

int main()
{
    int x{60}, y{20};

    std::cout << (x+y) << std::endl;

    double a{20.6}, b{60.3};
    float c {6.2}, d{6.9};

    auto k{c + d};
    auto j{x + y};
    auto i{a + b};

    std::cout << typeid(k).name() << std::endl;
    std::cout << typeid(j).name() << std::endl;
    std::cout << typeid(i).name() << std::endl;
}