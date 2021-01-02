#include <iostream>

using namespace std;

int main(){
    int age = 10;
    int* pAge = &age;
    double gpa = 9.3;
    double *pGpa = &gpa;




    //printing the address
    cout << pAge << endl;
    cout << *pAge << endl;
    cout << &*pAge << endl;
    cout << &*&pAge << endl;
    return 0;
}
