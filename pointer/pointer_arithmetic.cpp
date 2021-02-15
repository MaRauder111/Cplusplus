#include<iostream>

int main(){
    int a = 10;
    int *p;
    p = &a;

    std::cout << "p " << p << std::endl;
    std::cout << "value of p " << *p << std::endl;
    std::cout << "size of integer " << sizeof(int) << std::endl;
    std::cout << "p+1 " << p+1 << std::endl;
    std::cout << "value of p+1 " << *(p+1) << std::endl; // print garbage value
}