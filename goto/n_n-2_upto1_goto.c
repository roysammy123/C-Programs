//Program to display n,n-2,n-4,....,1 using goto

#include<stdio.h>

int main()
{
    int a,i;
    printf("Enter a number\n");
    scanf("%d",&a);
    i=a;
    printf("The desired output is: ");
    l1:
    printf("%d ",i);
    i=i-2;
    while(i>=1)
    {
        goto l1;
    }

    return 0;
}
