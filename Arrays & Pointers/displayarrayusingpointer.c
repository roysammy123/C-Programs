//Program to take a 1d array and display it using pointer

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

    return 0;
}
