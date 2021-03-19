#include<iostream>

class IntPair{
    public:
        int first, second;

        void set(int first_m, int second_m){
            first = first_m;
            second = second_m;
        }

        void print(){
            std::cout << "Pair (" << first << "," << second << ")" << std::endl;
        }
};

int main()
{
	IntPair p1;
	p1.set(1, 1); // set p1 values to (1, 1)

	IntPair p2{ 2, 2 }; // initialize p2 values to (2, 2)

	p1.print();
	p2.print();

	return 0;
}