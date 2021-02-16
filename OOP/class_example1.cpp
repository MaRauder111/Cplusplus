#include<iostream>

class testing{
    int first_no, second_no, third_no;

    public :
        int add(int first, int second){
            first_no = first;
            second_no = second;

            third_no = first_no + second_no;
            std::cout << third_no << std::endl;
        }

        // int print(){
        //     std::cout << add() << std::endl;
        // }

};

int main(){
    testing test;
    test.add(10,20);
    // test.print();
    return 0;
}