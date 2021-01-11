#include<iostream>

int main(){
    ineligible:
        std::cout << "You are not eligible" << std::endl;

        std::cout << "Enter your age "  << std::endl;
        int age;
        std::cin >> age;

        if(age < 18){
            goto ineligible;
        }
        else
        {
            std::cout << "You are eligible" << std::endl;
        }
}