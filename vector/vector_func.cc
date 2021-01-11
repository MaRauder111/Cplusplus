#include<iostream>
#include<vector>

std::vector<int> v1 {11,21,31,41};
std::vector<int> v2 {45,13,66,18};

int display(){

    for(int i = 0; i < v1.size(); i++)
        std::cout << v1[i] << " ";

    std::cout << std::endl;

    for(int i = 0; i < v2.size(); i++)
        std::cout << v2[i] << " ";

    std::cout << std::endl;
}

int at_func(){
    for(int i = 0; i < v1.size(); i++){
        std::cout << v1.at(i) << " ";
    }

    std::cout << std::endl;
}

int back_func(){
    std::cout << v1.back();

    std::cout << std::endl;
}

int front_func(){
    std::cout << v1.front();

    std::cout << std::endl;
}

int swap(){
    std::cout << "Before Swapping vector" << std::endl;

    display();

    std::cout << std::endl;
    v1.swap(v2);

    std::cout << "After Swapping vector 1" << std::endl;
    for(int i=0; i < v1.size(); i++){
        std::cout << v1[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "After Swapping vector 2" << std::endl;
    for(int i=0; i < v1.size(); i++){
        std::cout << v2[i] << " ";
    }
    std::cout << std::endl;
}

int push_back_func(){
    std::cout << "Push back function: " << std::endl;
    v1.push_back(99);
    v1.push_back(77);
    v2.push_back(90);

    display();
}

int pop_back_func(){
    std::cout << "Pop back function: " << std::endl;
    v1.pop_back();
    v1.pop_back();
    v2.pop_back();

    display();
}

int main(){

    display();
    at_func();
    back_func();
    front_func();
    swap();
    push_back_func();
    pop_back_func();

    return 0;
}

