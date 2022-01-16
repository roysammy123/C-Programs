//Program to display transpose of a matrix

#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the number of rows:\n");
    scanf("%d",&a);
    printf("Enter the number of columns:\n");
    scanf("%d",&b);
    int m[a][b];
    int count=1;
    int i,j;

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            m[i][j]=count;
            count++;
        }
    }

    printf("The original matrix is:\n\n");

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d\t",m[i][j]);
        }

        printf("\n");
    }

    int n[b][a];

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            n[j][i]=m[i][j];
        }
    }

    printf("The transpose of the original matrix is:\n\n");

    for(i=0;i<b;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("%d\t",n[i][j]);
        }

        printf("\n");
    }

    return 0;
    
}