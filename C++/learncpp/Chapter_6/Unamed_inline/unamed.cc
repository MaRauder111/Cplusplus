// unamed namespace is not used. It is treated as if it is part of the parent namespace
#include<iostream>

namespace
{
    void testing()
    {
        std::cout << "From unamed Testing";
    }
}

int main()
{
    testing();
}