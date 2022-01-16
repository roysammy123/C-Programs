//Program to display multiplication table of 7

#include<stdio.h>

int main()
{
    int i=7;
    int n=1;
    printf("Multiplication table of 7 upto 10 times:\n\n");
    while(n<=10)
    {
        printf("%d x %d\t= %d\n",i,n,(i*n));
        n=n+1;
    }

    return 0;
}