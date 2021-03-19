//tricking the compiler that x is initialized
#include<iostream>

void doNothing(int&){

}

int main()
{
    int x;
    doNothing(x);

    std::cout << x << std::endl;
    return 0;
}