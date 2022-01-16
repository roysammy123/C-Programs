// Program to swap two integer values using pointers

#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two integer values for variables a and b respectively:\n");
    scanf("%d%d",&a,&b);

    int *x;
    int *y;
    x=&a;
    y=&b;

    int swap;
    swap=*x;
    *x=*y;
    *y=swap;

    printf("The values after swapping are a=%d and b=%d",*x,*y);

    return 0;
}