//Program to display summation of each row and column elements of a 2d array

#include<stdio.h>

int main()
{
    int m,n;
    printf("Enter the number of rows:\n");
    scanf("%d",&m);
    printf("Enter the number of columns:\n");
    scanf("%d",&n);

    int a[m][n];

    int i,j;
    int count=0;

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            count++;
            a[i][j]=count;

        }
    }

    /*printf("The original matrix is:\n\n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);                
        }

        printf("\n");
    }*/

    int b[m][n];

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            b[i][j]=a[i][j];                
        }
    }

    int sum;

    printf("\nThe desired output is:\n\n");

    //Row summation

    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            sum=sum+a[i][j];
            printf("%d\t\t",b[i][j]);
        }

        printf("RowSum = %d",sum);

        printf("\n");
    }

    //Column summation

    for(j=0;j<n;j++)
    {
        sum=0;
        for(i=0;i<m;i++)
        {
            sum=sum+a[i][j];
            printf("");
        }

        printf("ColSum = %d\t",sum);

    }

    return 0;
}