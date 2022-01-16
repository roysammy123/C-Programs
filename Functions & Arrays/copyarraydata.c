// Program to take two arrays and copy data from the first array to the second array

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void copyarraydata(int *a,int n)
{
    printf("The entered array is:\n");

    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }

    int *b=a;

    int j;
    for(j=0;j<n;j++)
    {
        *(b+j)=*(a+j);
    }

    printf("\n\nThe new array into which data of first array was copied is:\n");

    int k;
    for(k=0;k<n;k++)
    {
        printf("%d ",*(b+k));
    }
}

int main()
{
    int x;
    printf("Enter the number of elements of the array:\n");
    scanf("%d",&x);

    printf("Enter the elements of the array:\n");
    
    int p[x];
    int q;
    for(q=0;q<x;q++)
    {
        scanf("%d",&p[q]);
    }

    copyarraydata(&p[0],x);

    return 0;
}