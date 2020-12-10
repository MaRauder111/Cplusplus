//Write a C++ program to find all elements in array of integers which have at-least two greater elements.

#include<iostream>
#include<algorithm>

using namespace std;

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

void findElements(int arr[], int size){
    for(int i = 0; i< size-2;i++){
        cout << arr[i] << endl;
    }
}

int main(){

    arrayEntry();
    sort(arr, arr + size);
    cout << "two-greatest element is : " << endl;
    findElements(arr, size);
    return 0;
}