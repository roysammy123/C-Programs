//Program to display matrix of any size

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

    printf("The desired matrix is:\n\n");

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d\t",m[i][j]);
        }

        printf("\n");
    }

    return 0;
    
}
