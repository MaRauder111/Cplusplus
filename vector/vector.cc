// syntax: vector <object_type> v1;

#include<iostream>
#include<vector>

int main(){
    std::vector<int> v1 {1,2,3,4,5,6};
    v1.push_back(3);

    for(auto it = v1.begin(); it  != v1.end(); ++it){
        std::cout << " " << *it;
    }
    std::cout << std::endl;

    v1.pop_back();
    for(auto it = v1.begin(); it  != v1.end(); ++it){
        std::cout << " " << *it;
    }
    std::cout << std::endl;

    int count = 0;
    std::vector<int> myVector;
    myVector.push_back(1);
    myVector.push_back(2);
    myVector.push_back(3);
    myVector.push_back(4);
    myVector.push_back(5);
    myVector.push_back(6);
    myVector.push_back(7);

    while (!myVector.empty())
    {
        count++;
        myVector.pop_back();
    }
    std::cout << count << std::endl;

    return 0;
}