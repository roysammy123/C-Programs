//Program to display the fibonacci series

#include<stdio.h>

int main()
{
    int a,b,c;
    int n;
    int i=1;
    printf("Enter upto how many terms you want to display the fibonacci series\n");
    scanf("%d",&n);
    
    a=0,b=1;
    printf("The fibonacci series upto %d terms is %d %d ",n,a,b);

    for(a=0,b=1;i<=(n-2);i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }

    return 0;
}