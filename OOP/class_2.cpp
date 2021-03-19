#include<iostream>
#include<string>

class Employee{
    public:
        int id;
        std::string name{};
        double wage;

        void print(){
            std::cout << "Id " << id
                        << " Name " << name << " Wage " << wage << std::endl;
        }
};

int main(){
    Employee alex{1, "Tomba", 1000};

    alex.print();
}