/*Program to print

1   2   3   4   5
6   7   8   9
10  11  12
13  14
15*/

#include<stdio.h>

int main()
{
    int n,i,j,k;
    printf("Enter number of rows\n");
    scanf("%d",&n);
    printf("The desired output is:\n\n");
    k=0;

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            k=k+1;
            printf("%d\t",k);
        }

        printf("\n");
    }

    return 0;
}