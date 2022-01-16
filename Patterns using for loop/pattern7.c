//Program to display a pattern

#include<stdio.h>

int main()
{
    int n,i,j;
    printf("Enter the number of rows (enter a positive odd integer\n");
    scanf("%d",&n);

    if(n%2!=0)
    {
        printf("The desired pattern is:\n\n");

        for(i=1;i<=(n/2);i++)
        {
            for(j=1;j<=(n/2)-i;j++)
            {
                printf(" ");
            }

            for(j=1;j<=i;j++)
            {
                printf(" 1");
            }

            printf("\n");
        }

        for(i=(n+1)/2;i>=1;i--)
        {
            for(j=1;j<=((n+1)/2)-i;j++)
            {
                printf(" ");
            }

            for(j=1;j<=i;j++)
            {
                printf("1 ");
            }

            printf("\n");
        }
    }

    else
    {
        printf("Invalid input");
    }

    return 0;
}