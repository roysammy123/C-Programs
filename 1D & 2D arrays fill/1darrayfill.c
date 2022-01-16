//Program to fill a 1D array in a specific way

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the last element of the 1d array:\n");
    scanf("%d",&n);

    int a[n];
    int i,count;

    printf("The desired array is:");

    for(i=0;i<=n;i++)
    {
        for(count=1;count<=i;count++)
        {
            a[i]=count;
            printf("%d",a[i]);
        }

        printf(" ");
    }

    return 0;

}
