//Write a C++ program to find the smallest and second smallest elements in a given array of integers.

#include<iostream>
#include <algorithm>

using namespace std;

//declare as global variable
int arr[10],i,size;

//Array entry
int arrayEntry(){
    cout << "Enter the size of the array : " << endl;
    cin >> size;

    cout << "Enter the numbers : " << endl;
    for(i=0;i< size;i++){
        cin >> arr[i];
    }
}

int main(){
    int n;
    //calling array entry fuction
    arrayEntry();

    //using sort function for c++
    //std::sort(array.begin(), array.end())
    sort(arr, arr + size, greater<int>());

    cout << endl << "Array after sorting using default sort is : " << endl;
    for (i = 0; i < size; i++){
        cout << arr[i] << "\t";
    }

    cout << endl;

    cout << endl << "Smallest is : " << arr[size-1] << endl;
    cout << "Second smallest is : " << arr[size-2] << endl;
    cout << endl;
    return 0;
}