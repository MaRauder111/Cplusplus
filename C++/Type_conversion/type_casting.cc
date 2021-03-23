#include<iostream>

int main()
{
    int a{10}, b{20};

    // C style typecasting
    float c{float(a)/b};
    // C++ new style
    float x{static_cast<float>(a)/b};
    char v { 'a' };
    std::cout << v << ' ' << static_cast<int>(v) << '\n';
    std::cout << c << std::endl << x << std::endl;

    int i{90};
    char ch{static_cast<char>(i)};

    std::cout << ch;

    return 0;
}

/*
Implicit type conversion is performed whenever one data type is expected, but a different data type is supplied.
Explicit type conversion happens when the user uses a type cast to explicitly convert a value from one type to another type.
*/