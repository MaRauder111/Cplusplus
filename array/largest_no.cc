 //Write a C++ program to find the largest element of a given array of integers

#include<iostream>

using namespace std;

int main(){
    int A [10],n,i,temp;

    //Tell the user to enter the numbers to be put in the array
    cout << "Enter the number of array : " << endl;
    cin >> n;

    //Taking user input in the array
    cout << "Enter the value : " << endl;
    for(i=0;i<n;i++){
        cin >> A[i];
    }

    for(i=0;i<n;i++){
        if(A[0]<A[i+1])
        // Storing the largest value in A[0]
            A[0] = A[i];
    }
    //printing the largest value
    cout << "Largest number is : " << A[0] << endl;
}
