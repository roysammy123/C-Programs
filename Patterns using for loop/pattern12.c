//Program to display Pascal's Triangle

#include<stdio.h>

int main()
{
    int n,i,j,k;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    printf("The desired pattern is:\n\n");
    
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n-i;j++)
        {
            printf(" ");
        }

        k=1;
        for(j=0;j<=i;j++)
        {
            printf("%d ",k);
            k=(k*(i-j)/(j+1));
        }

        printf("\n");    
    }

    return 0;
}