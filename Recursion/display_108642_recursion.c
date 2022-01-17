// Program to display n, n-2, n-4,...,4,2 using recursive function

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void backap(int n)
{
    if(n==0)
    {
        return;
    }

    printf("%d ",n);
    backap(n-2);
}

int main()
{
    int x;
    printf("Enter the first term of the desired series:\n");
    scanf("%d",&x);
    printf("The desired series is:\n");
    backap(x);

    return 0;
}