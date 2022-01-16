//Program to take an array and fill it with user input

#include<stdio.h>

int main()
{
    int n;    
    printf("Enter the number of elements you want to enter:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values of the %d elements:\n",n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The entered array is: ");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}