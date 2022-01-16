//Program to display the multiplication of two matrices

#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the number of rows of first matrix:\n");
    scanf("%d",&a);
    printf("Enter the number of columns of first matrix:\n");
    scanf("%d",&b);
    int m[a][b];
    
    int c,d;
    printf("Enter the number of rows of second matrix:\n");
    scanf("%d",&c);
    printf("Enter the number of columns of second matrix:\n");
    scanf("%d",&d);
    int n[c][d];

    int count1=1;
    int count2=1;
    int i,j,k,p,q,r;

    p=a;
    q=d;
    r=c;

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            m[i][j]=count1;
            count1++;
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

    for(i=0;i<c;i++)
    {
        for(j=0;j<d;j++)
        {
            n[i][j]=count2;
            count2++;
        }
    }

    printf("The second matrix is:\n\n");

    for(i=0;i<c;i++)
    {
        for(j=0;j<d;j++)
        {
            printf("%d\t",n[i][j]);
        }

        printf("\n");
    }

    int matrixmultiply[p][q];

    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            matrixmultiply[i][j]=0;
            for(k=0;k<r;k++)
            {
                matrixmultiply[i][j]=matrixmultiply[i][j]+(m[i][k]*n[k][j]);
            }
        }
    }

    printf("The multiplication of two matrices is:\n\n");

    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",matrixmultiply[i][j]);
        }

        printf("\n");
    }

    return 0;
}

