#include<iostream>

void test(){
    //The static variable is initialized only once and exists till the end of a program.
    //It retains its value between multiple functions call.
    static int i= 0;
    int j = 0;

    i++;
    j++;

    std::cout << "i = " << i << " j = " << j << std::endl;
}

int main(){
    test();
    test();
    test();
}