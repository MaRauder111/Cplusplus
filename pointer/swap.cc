#include<iostream>

int main(){
    int *a, *b;
    int temp;

    std::cin >> *a >> *b;

    temp = *a;
    *a = *b;
    *b = temp;

    std::cout << "After a and b  " << a << " " << b << std::endl;
}