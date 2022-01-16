//Program to print the sum of 1/3 + 5/7 + 9/11 + ... + (n-2)/n

#include<stdio.h>

int main()
{
    double i;
    int n;
    float sum=0;
    printf("Enter a positive odd number\n");
    scanf("%d",&n);
    printf("The required sum of 1/3 + 5/7 + ... + n/(n+2) is ");

    for(i=1;i<=n;i=i+4)
    {
        sum=sum+(i/(i+2));
    }

    printf("%f",sum);
    
    return 0;
}