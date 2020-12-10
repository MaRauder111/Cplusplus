//Write a C++ program to find the largest three elements in an array.
#include<iostream>

using namespace std;

int main(){
    int A[10],i,n,temp;
    int first = -1,second = -1, third = -3;
    //Size of the array
    cout<< "Enter the size of the array" <<endl;
    cin >> n;
    //elements in the array
    cout << "Enter the " << n << " elements" << endl;
    for(i=0;i<n;i++){
        cin >> A[i];
    }
    //iterate the whole array
    for(i=0;i<n;i++){
        //store the A[i] to A[n] values one by one in temp for understanding
        temp = A[i];
        if(temp > first){
            third = second;
            second = first;
            first = temp;
        }
        else if (temp > second)
        {
            third = second;
            second = temp;
        }
        else if (temp > third){
            third = temp;
        }
    }
    cout << "First element is : "<<first << endl << "Second element is : " << second << endl <<"Third element is : " << third <<endl;

    return 0;
}