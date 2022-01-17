// Program to find the summation of 1 to n using recursion

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int summation(int n)
{
    if(n==0)
    {
        return n;
    }

    else
    {
        return (n+summation(n-1));
    }
}

int main()
{
    int x;
    printf("Enter the number upto which you want to find summation:\n");
    scanf("%d",&x);

    int sumadd;
    sumadd=summation(x);

    printf("The summation of the numbers from 1 to %d is %d",x,sumadd);

    return 0;
}