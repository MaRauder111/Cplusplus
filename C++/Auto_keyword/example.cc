#include<iostream>

auto add(auto x, auto y)
{
    auto c = x+y;

    std::cout << c << '\n';
    return 0;
}

int main()
{
    add(3,4);
}