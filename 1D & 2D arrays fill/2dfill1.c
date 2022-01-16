/*Program to print the following

1   2   3   4
5   6   7   8
9   10  11  12

*/

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows of the 2d array:\n");
    scanf("%d",&n);

    int a[n][4];
    int count=1;
    int i,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<4;j++)
        {
            a[i][j]=count;
            count++;
        }
    }

    printf("\nThe desired 2d array is:\n\n");

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