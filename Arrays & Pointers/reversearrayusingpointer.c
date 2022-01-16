//Program to take a whole array and display it in reverse way

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements of the 1d array:\n");
    scanf("%d",&n);

    int a[n];
    printf("Enter the elements of the array:\n");

    int i;

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int *b=&a[0];

    int j;

    printf("The array entered is");

    for(j=0;j<n;j++)
    {
        printf(" %d",*(b+j));
    }

    int *c=&a[n-1];

    printf("\n\nThe array in reverse way is");

    int k;
    for(k=0;k<n;k++)
    {
        printf(" %d",*(c-k));
    }

    return 0;
}