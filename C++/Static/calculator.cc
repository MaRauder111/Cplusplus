#include<iostream>

using namespace std;

int cal(){
    int num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operation: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    int result;

    if(op == '+'){
        result = num1+num2;
    } else if (op == '-'){
        result = num1-num2;
    } else if (op == '*'){
        result = num1*num2;
    } else if (op == '/'){
        result = num1/num2;
    } else {
        cout << "Invalid Input" << endl;
    }
    return result;
}

int main(){
    cout << cal() << endl;
    return 0;
}