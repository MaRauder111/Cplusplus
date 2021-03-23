#include <iostream>

int main()
{
    std::cout << "Enter you name and age : ";
    std::string first_name;
    std::cin >> first_name;
    double age = 0;
    std::cin >> age;
    int months = age * 12;

    std::cout << "First name " << first_name << " age is " << months << std::endl;
    return 0;
}