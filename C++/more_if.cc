#include<iostream>

using namespace std;

int getMaxTwoNum(int num1, int num2){

    int result;

    if (num1 > num2){
        result = num1;
        cout << "Number 1 is greater" << endl;
    } else{
        result = num2;
        cout << "Number 2 is greater" << endl;
    }
    return result;
    cout << endl;
}


int getMaxThreeNum(int num1, int num2, int num3){

    int result;

    if (num1 >= num2 && num1 >= num3){
        result = num1;
        cout << "Number 1 is greater" << endl;
    } else if (num2 >= num1 && num2 >= num3){
        result = num2;
        cout << "Number 2 is greater" << endl;
    } else{
        result = num3;
        cout << "Number 3 is greater" << endl;
    }
    return result;
    cout << endl;
}

int main(){
    cout << getMaxTwoNum(2,5) << endl;
    cout << getMaxThreeNum(2,5,1) << endl;
    return 0;
}