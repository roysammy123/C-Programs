// Program to take a 1d array and display the array and also the max element

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

void displayarraymaxelement(int *b,int n)
{
    printf("The entered 1D array is ");

    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",*(b+i));
    }

    int max=-1;

    int j;
    for(j=0;j<n;j++)
    {
        if (*(b+j)>max)
        {
            max=*(b+j);
        }

        else
        {
            continue;
        }
    }

    printf("\n\nThe maximum element present inside the entered array is %d",max);
}

int main()
{
    int x;
    printf("Enter the number of elements of the 1D array:\n");
    scanf("%d",&x);

    printf("Enter the elements of the 1D array:\n");

    int a[x];

    int k;
    for(k=0;k<x;k++)
    {
        scanf("%d",&a[k]);
    }

    displayarraymaxelement(&a[0],x);

    return 0;
}