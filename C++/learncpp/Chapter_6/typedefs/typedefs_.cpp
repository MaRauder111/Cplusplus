#include<iostream>

int main()
{
    //typedef syntax
    typedef int value;
    // type alias
    using test_value = int;
    value x = 10;
    test_value y = 11;

    std::cout << x << '\t' << y << '\n';

    return 0;
}