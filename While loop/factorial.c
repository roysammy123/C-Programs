//Program to print factorial

#include<stdio.h>

int main()
{
    int product=1;
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("The factorial of %d is ",n);
    while(n>=1)
    {
        product=product*n;
        n=n-1;
    }
    printf("%d",product);

    return 0;
}