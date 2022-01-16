/* Program to print the following 2d array

12  9   6   3
11  8   5   2
10  7   4   1

*/

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows of the 2d array:\n");
    scanf("%d",&n);
    int a[n][4];

    int count=0;
    int turn=0;
    int i,j;

    for(j=3;j>=0;j--)
    {
        for(i=n-1;i>=0;i--)
        {
            count++;
            a[i][j]=count;
        }
    }

    printf("The desired 2d array is:\n\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }

        printf("\n");
    }

    return 0;
}