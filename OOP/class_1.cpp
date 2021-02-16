#include<iostream>

struct DateStruct{
    int year{};
    int month{};
    int day{};
};

void print(const DateStruct &date){
    std::cout << date.year << '/' << date.month << '/' << date.day << std::endl;
}

class DateClass{
    public :
        int year{};
        int month;
        int day;

        void print(){
            std::cout << year << '/' << month << '/' << day << std::endl;
        }
};

int main(){
    DateStruct today {10,20};

    DateClass test_today{10,10};

    test_today.day = 16;
    test_today.print();

    today.day = 20;
    print(today);

    return 0;
}