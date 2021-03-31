#include<iostream>

int main()
{
    unsigned short x{0};
    std::cout << "X was: " << x <<"\n";

    x = -1;
    std::cout << "X is now: " << x << "\n";

    x = -2;
    std::cout << "X is now: " << x << "\n";

    return 0;
}