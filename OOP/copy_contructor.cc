#include<iostream>

class test{
    public:
        int x;
        test(int a){
            x = a;
        }

        test(test &i){
            x = i.x;
        }
};

int main(){
    test a1(20);
    test a2(a1);

    std::cout << a2.x << std::endl;
    return 0;
}