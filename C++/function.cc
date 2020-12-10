#include <iostream>

using namespace std;

void fun(string name,int age);

int main(){

    cout << "Top" << endl;
    fun("Mike", 20);
    fun("Tom", 21);
    fun("Jerry", 25);
    cout << "Bottom" << endl;
    return 0;
}

void fun(string name, int age){
    cout << "Hello " << name << " Your age is " << age << endl;
}