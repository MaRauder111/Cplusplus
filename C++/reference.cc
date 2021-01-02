#include<iostream>

#define LOG(x) std::cout << x << std::endl;

// here we create two variable but ref is not a variable
// alias the variable


//without passing throught the reference it will print only 5 in output

//using pointer
void IncrementP(int* value){
    // dereference
    (*value)++;
}


void IncrementR(int& value){
    // dereference
    value++;
}

int main(){
    int a = 5;
    int b = 5;

    //int& ref = a;
    // ref = b; //will give error
    //ref = 2;

    // if we want to change
    // int* ref = &a;
    // *ref = 2;
    // ref = &b;
    // *ref = 1;

    // passing memory address
    IncrementP(&a);
    IncrementR(b);
    LOG(a);
    LOG(b);
}