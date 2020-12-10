#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){

    // with srand the number is changing forever
    srand(time(0));


    cout <<"First rand with 0"<< endl;
    for(int x=1; x<25;x++){

        cout << rand()%6 << endl;

    }


    cout << "First rand with 1 and 6"<< endl;
    for(int x=1; x<25;x++){


        cout << 1+(rand()%6) << endl;

    }
    return 0;

}