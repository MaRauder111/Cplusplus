#include<iostream>

using namespace std;

double cube(double num){
    double result = num * num * num;
    return result;
}

double sqr(double n){
    return n * n;
}


int main(){

    double answer = cube(5.0);
    cout << answer << endl;
    cout << cube(5.0) << endl;
    cout << sqr(3.0) << endl;
    return 0;
}