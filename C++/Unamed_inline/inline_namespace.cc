#include<iostream>

inline namespace test1
{
    void testing()
    {
        std::cout << "From test1 namespace\n";
    }
}

namespace test2
{
    void testing()
    {
        std::cout << "From test2 namespace\n";
    }
}

int main(){
    test1::testing();
    test2::testing();

    testing();
    return 0;
}