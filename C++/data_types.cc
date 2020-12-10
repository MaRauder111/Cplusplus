#include<iostream>

using namespace std;

int main(){
	// Some useful data_types
	char grade = 'A';
	string phrase = "Training example";
	int age = 25;
	double gpa = 3.5;
	bool isMale = true;
	//declaring variable to store the substring from phrase
	string phrase_sub_string;

	//declaring the value of phrase at the position 6 to change with character Z
	phrase[6] = 'Z';

	cout << "Grade "<<grade << endl;
	cout << "Phrase "<<phrase << endl;

	//storing the value in phrase_sub_string
	phrase_sub_string = phrase.substr(9,3);

	cout <<  phrase_sub_string << endl;

	// find the length of the string
	cout << "Phrase "<<phrase.length() << endl;

	// finding where the example start
	cout << phrase.find("example", 0) <<endl;

	// printing the phrase position 0
	cout << "Phrase "<<phrase[0] << endl;

	// printing the phrase position 6
	cout << "Phrase "<<phrase[6] << endl;

	cout << "Age "<<age << endl;
	cout << "gpa "<< gpa << endl;
	cout << "male "<< isMale << endl;

	return 0;
}
