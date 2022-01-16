// Program to perform an operation by taking index position as input

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

void indexop(int *a,int n,int b)
{
    printf("The entered array is:\n");

    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }

    int c=*(a+b);

    int j;
    for(j=0;j<n;j++)
    {
        if(j==b)
        {
            *(a+j)=*(a+j);
        }

        else
        {
            *(a+j)=*(a+j)+c;
        }
    }

    printf("\nThe array after performing the index operation is:\n");

    int k;
    for(k=0;k<n;k++)
    {
        printf("%d ",*(a+k));
    }
}

int main()
{
    int x;
    printf("Enter the number of elements of the array:\n");
    scanf("%d",&x);

    printf("Enter the elements of the array:\n");

    int p[x];

    int y;
    for(y=0;y<x;y++)
    {
        scanf("%d",&p[y]);
    }

    int z;
    printf("Enter the desired index value:\n");
    scanf("%d",&z);

    indexop(&p[0],x,z);

    return 0;
}