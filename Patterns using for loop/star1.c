//Program to display a pattern

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
            printf("*");
        }

        printf("\n");
    }

    return 0;
}