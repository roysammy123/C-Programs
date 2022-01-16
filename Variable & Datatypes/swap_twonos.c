//Program to swap values of two numbers 

#include<stdio.h>

int main()
{
    int a,b,t;
    a=5;
    b=7;
    printf("The original values were a=%d and b=%d",a,b);
    t=a; //Swapping starts - copying value of a to t
    a=b; //changing value of a to b's value
    b=t; //changing value of b to t's which has value of a stored in it - Swapping ends
    printf("\nThe values after swapping are a=%d and b=%d",a,b);

    return 0;
}