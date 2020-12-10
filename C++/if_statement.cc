#include<iostream>

using namespace std;
//by default bool return true
int male (){
    bool isMale = true;
    bool isTall = true;
    //checking if isMale and isTall is true
    if(isMale && isTall){
        cout <<  "You are a Tall male" << endl;
    } else{
        cout << "You are not male" << endl;
    }
}

int female (){
    bool isMale = false;
    bool isTall = false;
    //checking if isMale and isTall is true
    if(isMale && isTall){
        cout <<  "You are a Tall male" << endl;
    } else{
        cout << "You are not male" << endl;
    }
}

int male_or_tall (){
    bool isMale = false;
    bool isTall = false;
    //checking if isMale or isTall is true
    // || is call or operator if any of the argument is true it execute the statement

    if(isMale || isTall){
        cout <<  "You are a tall male" << endl;
    } else if(isMale && !isTall){
        cout << "You are male but not tall" <<endl;
    } else if( !isMale && isTall){
        cout << "You are tall but not male" <<endl;
    }    else{
        cout << "You are not male and not tall" << endl;
    }
}


int main(){

    male();
    female();
    male_or_tall();


    return 0;
}