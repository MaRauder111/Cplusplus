#include <iostream>
// Add the path before the add.h where u store the add.h OR  g++ -o main -I/path_to_the_header main.cpp
#include "add.h"

int add(int x, int y);

int main(){
    std::cout << "The of 3 and 4 is " << add(3,4) << '\n';
    return 0;
}