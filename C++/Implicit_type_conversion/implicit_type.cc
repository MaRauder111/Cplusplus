/*
The priority of operands is as follows:

    long double (highest)
    double
    float
    unsigned long long
    long long
    unsigned long
    long
    unsigned int
    int (lowest)
*/

#include<iostream>
#include<typeinfo>

int main()
{
    double a{4.0};
    short b{5};
    int i { 48 };
    char ch = i; // implicit conversion

    std::cout << typeid(a+b).name() << ' ' << a+b << '\n';
}