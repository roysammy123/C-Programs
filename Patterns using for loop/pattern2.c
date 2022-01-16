//Program to display a pattern

#include<stdio.h>

int main()
{
    int i,j,n;
    printf("Enter number of rows (enter a positive odd integer)\n");
    scanf("%d",&n);
    printf("The desired pattern is:\n\n");

    for(i=1;i<=(n+1)/2;i++)
    {
        for(j=1;j<=((n+1)/2)-i;j++)
        {
            printf(" ");
        }

        for(j=1;j<=i;j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(i=n/2;i>=1;i--)
    {
        for(j=1;j<=((n+1)/2)-i;j++)
        {
            printf(" ");
        }

        for(j=1;j<=i;j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}