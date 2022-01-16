//Program to display a pattern

#include<stdio.h>

int main()
{
    int i,j,k,n;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    k=(n*(n+1))/2;
    printf("The desired pattern is:\n\n");

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",k);
            k--;
        }

        printf("\n");
    }

    return 0;

}