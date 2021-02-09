#include<iostream>

int main(){
    int a = 10;
    int *p;
    p = &a; // address of a is store in p


    std::cout << "a " << a << std::endl; // print value of a
    std::cout << "a " << &a << std::endl; //address of a
    std::cout << "p " << p << std::endl; // address of p
    std::cout << "p " << *p << std::endl; // *p value at address pointed by p it will return the value
}