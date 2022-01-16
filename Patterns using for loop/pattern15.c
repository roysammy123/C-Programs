//Program to display a pattern

#include<stdio.h>

int main()
{
    int i,j,n;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    printf("The desired output is:\n\n");

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }

        for(j=1;j<=(i*2)-1;j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
