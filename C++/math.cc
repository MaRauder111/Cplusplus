#include<iostream>
#define INTEGER int

#if 1

void Log(const char* message)
{
    std::cout << message << std::endl;
}

//Multiply function is only call in the math.cc file
static INTEGER Multiply(INTEGER a, INTEGER b){
    Log("Multiply");
    return a*b;
}


INTEGER main(){
    std::cout << Multiply(1,2) << std::endl;
    std::cin.get();
    return 0;
#include "EndBrace.h"

#endif