#include<stdio.h>
int main()
{
    int i=69;
    int *j=&i;
    printf("enter the address of i: %p\n", j); // this will print the address of i.
    printf("enter the value of i: %d\n", *j); // this will print value of i.
    printf("enter the address of i: %p\n", &i); // this will print the address of i.
    return 0;
}