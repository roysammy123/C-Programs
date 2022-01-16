/*Program to see whether the square of the middle two digits of a four digit number has the same digits as the first
and the last digits of the four digit number*/

#include<stdio.h>

int main()
{
    int a;
    printf("Enter a four digit number\n");
    scanf("%d",&a);
    int b=a/1000;   //first digit
    int c=a%1000;
    int d=c/10;     //middle two digits
    int e=c%10;     //last digit
    int f=d*d;      //square of middle two digits
    int g=f/10;     //first digit of the squared term of the middle two digits
    int h=f%10;     //last digit of the squared term of the middle two digits
    char y='y';
    char n='n';
    char i=((g==b||g==e)&&(h==e||h==b))?y:n;
    printf("The result is (y means correct, n means incorrect) ----- %c",i);

    return 0;
}