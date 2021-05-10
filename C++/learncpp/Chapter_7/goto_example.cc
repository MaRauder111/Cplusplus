#include<iostream>

int main()
{
	char gender;

tryAgain:
	std::cout << "Enter your gender Male(M) or Female(F) ";
	std::cin >> gender;

	if(gender != 'M')
		goto tryAgain;
	
	std::cout << "Your gender is " << gender << std::endl;
	return 0;
}
