//Program to display a 2d array using normal pointer

#include<stdio.h>

int main()
{
    int m,n;
    printf("Enter the number of rows of the element:\n");
    scanf("%d",&m);
    printf("Enter the number of columns of the element:\n");
    scanf("%d",&n);

    int a[m][n];
    int i,j;

    printf("Enter the elements of the 2d array:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nThe entered 2d array in forward direction is:\n");

    int *b=&a[0][0];
    for(int k=1;k<=(m*n);k++)
    {
        printf("%d\t",b[k-1]);
        if(k%n==0)
        {
            printf("\n");
        }
    }

    printf("\nThe entered 2d array in backward direction is:\n");

    int *c=&a[m-1][n-1];

    int z;

    for(z=1;z<=(m*n);z++)
    {
        printf("%d\t",*((c-z)+1));
        if(z%n==0)
        {
            printf("\n");
        }
    }

    return 0;
}
