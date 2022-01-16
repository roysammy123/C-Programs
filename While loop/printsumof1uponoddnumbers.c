//Program to print sum of 1/odd numbers from 1 to n

#include<stdio.h>

int main()
{
    double i=1;
    int n;
    float sum=0;
    printf("Enter a positive odd number\n");
    scanf("%d",&n);
    printf("The required sum is ",n);
    while(i<=n)
    {
        sum=sum+(1/i);
        i=i+2;
    }
    printf("%f",sum);
    
    return 0;
}