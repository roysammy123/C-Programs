//Program to swap the positions of the first two and the last two digits of a four digit number

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
    printf("The number after swapping its digit positions is %d%d%d%d",d,b,g,f);

    return 0;
}
