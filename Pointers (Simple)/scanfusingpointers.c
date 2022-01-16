// Program to accept two values using pointers

#include<stdio.h>

int main()
{
    int a,b;
    int *x,*y;
    x=&a;
    y=&b;

    printf("Enter the two values:\n");
    scanf("%d%d",&(*x),&(*y));

    printf("The values are %d and %d",*x,*y);

    return 0;
}