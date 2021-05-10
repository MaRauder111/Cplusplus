#include<iostream>
#include<cmath>

int main()
{
	double x{};
tryAgain:
	std::cout<<"Enter a positive number:";
	std::cin >> x;

	if(x<0.0)
		goto tryAgain;

	std::cout << "The square root of " << x << " is " << std::sqrt(x) <<std::endl;
	return 0;
}
