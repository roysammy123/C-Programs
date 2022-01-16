//Program to display the smallest among two numbers using ternary operator

#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    int c=(a<b)?a:b;
    printf("The smallest of the two numbers is %d",c);

    return 0;
}