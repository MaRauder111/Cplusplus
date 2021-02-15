#include<iostream>

int main(){
    int a = 10;
    int *p = &a;
    // p = &a; //same as above
    int b = 20;

    std::cout << p << std::endl;
    std::cout << *p << std::endl;
    *p = b;

    std::cout << p << std::endl;
    std::cout << *p << std::endl;
    p = &b;
    std::cout << p << std::endl;
    std::cout << *p << std::endl;

}