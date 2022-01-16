//Program to print sum of odd numbers from 1 to n

#include<stdio.h>

int main()
{
    int i=1;
    int n;
    int sum=0;
    printf("Enter a positive odd number\n");
    scanf("%d",&n);
    printf("The sum of odd numbers from 1 to %d is ",n);
    while(i<=n)
    {
        sum=sum+i;
        i=i+2;
    }
    printf("%d",sum);
    
    return 0;
}