//Program to display the various arithmetic operations in C using arithmetic operators

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    int c=a+b;
    int d=a-b;
    int e=a*b;
    int f=a/b;
    int g=a%b;
    printf("The value after addition is %d\n",c);
    printf("The value after subtraction is %d\n",d);
    printf("The value after multiplication is %d\n",e);
    printf("The value of quotient after division is %d\n",f);
    printf("The value of remainder after division is %d",g);

    return 0;
}