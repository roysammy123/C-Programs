// Program to interchange array elements using pointers

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements of the even-sized array:\n");
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

    int *c=a;
    int *d=a+(n/2);
    int swap;

    int k;

    for(k=0;k<(n/2);k++)
    {
        swap=c[k];
        c[k]=d[k];
        d[k]=swap;
    }

    printf("\n\nThe array after interchanging elements is");

    int p;
    for(p=0;p<n;p++)
    {
        printf(" %d",c[p]);
    }

    return 0;
}