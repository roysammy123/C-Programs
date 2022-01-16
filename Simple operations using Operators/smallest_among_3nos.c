//Program to display the smallest among three numbers using ternary operator

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    int d=(a<b)?a:b;
    int e=(d<c)?d:c;
    printf("The smallest of the three numbers is %d",e);

    return 0;
}