#include<iostream>

int main(){
    int a = 10;
    int *p;
    p = &a;

    std::cout << "Size of integer " << sizeof(int) << std::endl;;
    std::cout << "Address and value " << p << " " << *p << std::endl;

    float *p1;

    std::cout << "Address " << p1 << std::endl;

    p1 = (float*)p;
    //p1 = &b;

    std::cout << "Size of char " << sizeof(float) << std::endl;;
    std::cout << "Address and value " << p1 << " " << *p1 << std::endl;

}