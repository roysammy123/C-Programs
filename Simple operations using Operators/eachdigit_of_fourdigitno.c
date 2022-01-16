//Program to display each digit of a four digit number

#include<stdio.h>

int main()
{
    int a;
    printf("Enter a four digit number\n");
    scanf("%d",&a);
    int b=a/1000;
    int c=a%1000;
    int d=c/100;
    int e=c%100;
    int f=e/10;
    int g=e%10;
    printf("The digits of the entered four digit number are as follows:\n%d\n%d\n%d\n%d",b,d,f,g);

    return 0;
}