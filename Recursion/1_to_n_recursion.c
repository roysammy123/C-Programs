// Program to display 1 to n using recursion

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void ap(int n)
{
    if(n==0)
    {
        return;
    }

    ap(n-1);
    printf("%d ",n);
}

int main()
{
    int x;
    printf("Enter the number upto which you want to display the arithmetic progression series:\n");
    scanf("%d",&x);
    printf("The desired series is:\n");
    ap(x);

    return 0;
}
