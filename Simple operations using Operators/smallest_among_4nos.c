//Program to display the smallest among four numbers using ternary operator

#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter four numbers\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int e=(a<b)?a:b;
    int f=(e<c)?e:c;
    int g=(f<d)?f:d;
    printf("The smallest of the four numbers is %d",g);

    return 0;
}