//Write a C++ program to find second largest element in an given array of integers.

#include<iostream>

using namespace std;

int main(){
    int A[10],i,n,temp;
    int first = -1, second = -1, third =  -1;

    cout << "Enter the size of the array : " << endl;
    cin >> n;

    cout << "Enter the number you want to store in the array : " << endl;
    for(i=0;i<n;i++){
        cin >> A[i];
    }
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
     cout << "Second element is : " << second << endl;

}