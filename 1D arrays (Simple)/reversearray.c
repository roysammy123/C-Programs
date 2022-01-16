//Program to reverse an array

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements inside the array:\n");
    scanf("%d",&n);
    int a[n];
    int b[n];
    printf("Enter the elements inside the array:\n");      
    int i,j,tmp;
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }

    printf("The original array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }

    printf("\nThe reversed array is: ");

    for(i=0,j=n-1;i<j;i++,j--)
    {
        tmp=b[i];
        b[i]=b[j];
        b[j]=tmp;
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    
    return 0;
}