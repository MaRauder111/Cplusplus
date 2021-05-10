#include<iostream>
#include<cstdlib>

void cleanup()
{
	std::cout << "cleaning up";
}

int main()
{
	std::atexit(cleanup);

	std::cout << 1 << '\n';

	std::exit(0);

	std::cout << 2 << '\n';

	return 0;
}
