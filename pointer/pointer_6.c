//In C the address value is more visible

#include<stdio.h>

int main(){
    int a = 10;
    int *p;
    p = &a;

    printf("Address %d and value of integer %d \n", p, *p);
    void *p1;
    p1 = p;

    //derefrencing *p1 will give a error
    printf("Address %d \n", &p1);

}