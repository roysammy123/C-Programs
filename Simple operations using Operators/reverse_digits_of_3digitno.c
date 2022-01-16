//Program to swap the digits of a three digit number

#include<stdio.h>

int main()
{
    int a;
    printf("Enter a three digit number\n");
    scanf("%d",&a);
    int b=a/100;
    int c=a%100;
    int d=c/10;
    int e=c%10;
    int t=b;
    b=e;
    e=t;
    printf("The three digit number after swapping the positions of its digits is %d%d%d",b,d,e);

    return 0;
}