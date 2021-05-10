#include<iostream>
#include<cstdlib> // for exit statement

int main()
{
	int value;
       	char name[10];

	std::cout << "Enter your name ";
	std::cin >> name;
Again:
	std::cout << "Enter your roll number ";
	std::cin >> value;

	if(value < 0)
		goto Again;

	//std::abort();
	std::cout << "Your name is " << name << " roll number " << value << std::endl;

	std::exit(0);
	std::cout << "Testing";
	return 0;
}
