//Program to display increment and decrement

#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers a and b\n");
    scanf("%d%d",&a,&b);
    int c=++a;
    int d=b++;
    int e=--a;
    int f=b--;
    printf("Value of ++a is %d\n",c);
    printf("Value of b++ is %d\n",d);
    printf("Value of --a is %d\n",e);
    printf("Value of b-- is %d",f);

    return 0;
}