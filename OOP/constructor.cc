#include<iostream>

class Employee{
    public:
        Employee(){
            std::cout << "Inside constructor" << std::endl;
        }
};

int main(void){
    Employee e1;
    Employee e2;
    return 0;
}