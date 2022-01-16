//Program to display each digit of a four digit number

#include<stdio.h>

int main()
{
    int a;
    printf("Enter a five digit number\n");
    scanf("%d",&a);
    int b=a/10000;
    int c=a%10000;
    int d=c/1000;
    int e=c%1000;
    int f=e/100;
    int g=e%100;
    int h=g/10;
    int i=g%10;
    printf("The middle digit of the entered five digit number is %d\n",f);
    printf("The middle three digits of the entered five digit number are as follows:\n%d\n%d\n%d",d,f,h);

    return 0;
}