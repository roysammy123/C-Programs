//Program to print sum of n/n-1 + n-1/n-2+...+2/1

#include<stdio.h>

int main()
{
    int n;
    float i;
    float sum=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    i=n;
    printf("The required sum is ");
    while(i>=2)
    {
        sum=sum+(i/(i-1));
        i--;
    }
    printf("%lf",sum);

    return 0;
}