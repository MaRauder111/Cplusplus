#include<iostream>

int min = 1, max =5;
int height,scaleFactor;

int main(){
    std::cout << "Enter the height ";
    std::cin >> height;
    if(height < min){
        height = min;
    }
    else if(height > max){
        height = max;
    }

    scaleFactor = ((height - min) / (max - min));

    std::cout << "scaleFactor " << scaleFactor << std::endl;
}