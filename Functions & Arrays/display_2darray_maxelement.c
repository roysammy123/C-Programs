// Program to take a 2d array and display the array and also the max element

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void display2darraymaxelement(int *a,int x,int y)
{
    printf("The entered 2d array is:\n");

    int p;
    for(p=1;p<=(x*y);p++)
    {
        printf("%d\t",a[p-1]);

        if(p%y==0)
        {
            printf("\n");
        }
    }

    int max=-1;

    int q;
    for(q=0;q<(x*y);q++)
    {
        if(a[q]>max)
        {
            max=a[q];
        }

        else
        {
            continue;
        }
    }

    printf("\nThe maximum value among the elements of the 2D array is %d",max);
}

int main()
{
    int m,n,o;
    printf("Enter the number of rows of the element:\n");
    scanf("%d",&m);
    printf("Enter the number of columns of the element:\n");
    scanf("%d",&n);

    int r[m][n];
    int i,j;

    printf("Enter the elements of the 2d array:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&r[i][j]);
        }
    }

    display2darraymaxelement(&r[0][0],m,n);   

    return 0;
}