//Program to display a pattern consisting of only 1

#include<stdio.h>

int main()
{
    int n,i,j;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    printf("The desired pattern is:\n\n");

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }

        for(j=1;j<=i;j++)
        {
            printf("1 ");
        }

        printf("\n");
    }

    return 0;
}