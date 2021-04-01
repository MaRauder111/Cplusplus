#include<iostream>

int main()
{
    std::cout<< "Please enter your firstname and secondname ";
    std::string first;
    std::string second;
    std::cin >> first >> second;

    std::string name = first + ' ' + second;
    std::cout << "Hello " << name << std::endl;
}