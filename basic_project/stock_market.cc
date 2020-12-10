#include<iostream>
#include<cmath>

using namespace std;

int main(){
    //amount you get
    float amount;
    // principal funding
    float p = 10000;
    //interest rate
    float r = 0.1;

    for(int day = 1;day <=30;day++){
        //formula
        amount = p * pow(1+r, day);
        cout << day << "-------" << amount  << endl;
    }
}