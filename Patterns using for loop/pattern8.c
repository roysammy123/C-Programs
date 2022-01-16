//Program to display a hollow right triangle pattern

#include<stdio.h>

int main()
{
    int n,i,j;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    printf("The desired pattern is:\n\n");

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1 || j==i || i==n)
            {
                printf("*");
            }

            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}