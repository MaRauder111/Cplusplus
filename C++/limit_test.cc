#include<iostream>

int main(){
    int userInput;

	if(std::cin.bad())
	{
        std::cin.clear();
        std::cin.ignore();
    }

    do{
        std::cin.clear();
        std::cout << "Pick a user input ";
        std::cin >> userInput;
    } while (std::cin.bad() || userInput < 1 || userInput > 100);
    return 0;
}