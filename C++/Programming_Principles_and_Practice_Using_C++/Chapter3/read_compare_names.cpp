#include<iostream>

int main()
{
    std::cout<< "Please enter your firstname and secondname ";
    std::string first;
    std::string second;
    std::cin >> first >> second;

    if(first == second)
    {
        std::cout << "Thats the same name twice";
    }

    if(first < second)
    {
        std::cout << first << " is alphabetically before " << second << std::endl;
    }

    if(first > second)
    {
        std::cout << first << " is alphabetically after " << second << std::endl;
    }
}