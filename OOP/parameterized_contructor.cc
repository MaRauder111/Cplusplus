#include<iostream>

class Employee{
    public:
        int id;
        std::string name;
        float salary;

        Employee(int i, std::string n, float s){
            id = i;
            name = n;
            salary = s;
        }

        void display(){
            std::cout << id << " " << name << " " << salary <<  std::endl;
        }
};

int main(void){
    Employee e1 = Employee(101, "Tomba", 10000);
    Employee e2 = Employee(102, "Chaoba", 20000);

    e1.display();
    e2.display();

    return 0;
}