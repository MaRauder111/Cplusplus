#include<iostream>

class Employee{
    public:
        Employee(){
            std::cout << "Constructor" << std::endl;
        }

        ~Employee(){
            std::cout << "Destructor" << std::endl;
        }
};

int main(void){
    Employee e1 ;
    Employee e2 ;

    return 0;
}