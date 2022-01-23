//Program to display sum of elements of a 1d array

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


    int sum=0;

    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }

    printf("\n\nThe sum of the elements of the entered array is %d\n",sum);

    return 0;
}
