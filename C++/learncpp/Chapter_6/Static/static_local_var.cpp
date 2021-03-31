// static variable will retain its value even after it goes out of the scope
#include<iostream>

void incrementPrint()
{
    int value{1};
    static int value1{1};

    ++value;
    ++value1;
    std::cout << "Value " << value <<'\n';
    std::cout << "Value1 "<< value1 <<'\n';
} //value is destroyed value1 is not destroyed

int main()
{
    incrementPrint();
    incrementPrint();
    incrementPrint();
}