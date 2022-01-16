//Program to display the largest among six numbers using ternary operator

#include<stdio.h>

int main()
{
    int a,b,c,d,e,f;
    printf("Enter six numbers\n");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    int g=(a>b)?a:b;
    int h=(g>c)?g:c;
    int i=(h>d)?h:d;
    int j=(i>e)?i:e;
    int k=(j>f)?j:f;
    printf("The largest of the six numbers is %d",k);

    return 0;
}