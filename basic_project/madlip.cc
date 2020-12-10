#include <iostream>

using namespace std;

int main(){
	string color, pluralNoun, celebrity;

	cout << "Enter your color: ";
	getline(cin,color);
	cout << "Enter your plural noun: ";
	getline(cin,pluralNoun);	
	cout << "Enter your celebrity: ";
	getline(cin,celebrity);

	cout << "Roses are "<< color << endl;
	cout <<  pluralNoun << " are blue"<< endl;
	cout << "I love "<< celebrity<< endl;

	return 0;
}
