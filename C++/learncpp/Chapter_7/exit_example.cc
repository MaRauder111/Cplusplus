#include<cstdlib> //for std::exit()
#include<iostream>

void cleanup()
{
	std::cout << "Clean up \n";
}

int main()
{
	std::cout << 1 << '\n';
	cleanup();

	std::exit(0);
	//it will never be execute because the program has already terminated
	std::cout << 2 << '\n';

	return 0;
}
