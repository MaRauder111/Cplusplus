//In C the address value is more visible

#include<stdio.h>

int main(){
    int a = 10;
    int *p;
    p = &a;

    printf("Size of integer %d \n", sizeof(int));
    printf("Address %d and value of integer %d \n", p, *p);
    char *p1;
    p1 = (char*)p;
    //p1 = &b;

    printf("Size of char %d \n", sizeof(char));
    printf("Address %d and value of %d \n", p1, *p1);

}