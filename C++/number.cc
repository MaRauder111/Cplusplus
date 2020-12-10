#include <iostream>
#include <cmath>

using namespace std;

int main(){
	// simple addtion and modulo which returns the remainder
	cout << 10 + 6 << endl;
	cout << 10 % 3 << endl;

	int wnum = 5;
	double num = 5.5;

	wnum += 80;
	wnum -= 80;
	wnum *= 80;
	wnum /= 80;

	cout << wnum <<  endl;

	// power of 2 to the 5
	cout << pow (2,5) << endl;

	// square root of 2 to the 5
	cout << sqrt (36) << endl;

	// rounding to the highest
	cout << round (4.6) << endl;

	// rounding to the highest	
	cout << ceil (4.1) << endl;

	// rounding to the lowest	
	cout << floor (4.1) << endl;

	//biggest of the two numbers
	cout << fmax (3,10) << endl;
	
	//smallest of the two numbers
	cout << fmin (3,10) << endl;
	return 0;
}
