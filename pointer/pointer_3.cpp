#include<iostream>

int main(){
    int *p;
    int a = 10;

    p = &a;

    std::cout << "value of a " << a << std::endl;
    std::cout << "value of &a " << &a << std::endl;
    std::cout << "value of &p " << &p << std::endl;
    std::cout << "value of *p " << *p << std::endl;
}