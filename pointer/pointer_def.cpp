#include<iostream>

int main(){
    int a = 10;
    int *p;
    p = &a;
    std::cout << "Before p " << *p << std::endl;

    *p = 12; // deferencing

    std::cout << "After p " << *p << std::endl;
}