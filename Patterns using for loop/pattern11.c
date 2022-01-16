//Program to print a pattern

#include<stdio.h>

int main()
{
    int n,i,j,k;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    printf("The desired pattern is:\n\n");
    k=0;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("\t");
        }

        for(j=1;j<=i;j++)
        {
            k=k+1;
            printf("%d\t",k);
        }

        printf("\n");
    }

    return 0;
}