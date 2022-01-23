//Program to change elements of a 1d array to the cumulative sum of the elements

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements inside the array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements inside the array:\n");      
    
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }

    printf("The original array is:\t");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    int b[n];

    int sum=0;

    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        b[i]=sum;
    }

    printf("\n\nThe desired array is:\t");

    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }

    return 0;
}
