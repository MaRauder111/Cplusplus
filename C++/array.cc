#include <iostream>

using namespace std;

int main(){
	int luckyNums[] = {1,2,3,4,5};

	luckyNums[2] = 99;
	cout << luckyNums[2] << endl;

	return 0;
}