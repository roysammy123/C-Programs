//Program to display the subtraction of two matrices

#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the number of rows:\n");
    scanf("%d",&a);
    printf("Enter the number of columns:\n");
    scanf("%d",&b);
    int m[a][b];
    int n[a][b];
    int count=1;
    int i,j;

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            m[i][j]=count;
            n[i][j]=count;
            count++;
        }
    }

    printf("The first matrix is:\n\n");

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d\t",m[i][j]);
        }

        printf("\n");
    }

    printf("\n\nThe second matrix is:\n\n");

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d\t",n[i][j]);
        }

        printf("\n");
    }

    int matrixsub[a][b];

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            matrixsub[i][j]=m[i][j]-n[i][j];
        }
    }

    printf("\n\nThe subtraction of two matrices is:\n\n");

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d\t",matrixsub[i][j]);
        }

        printf("\n");
    }

    return 0;
    
}