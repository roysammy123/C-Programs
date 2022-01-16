// Program to take a 5 element array and fill it using pointers

#include<stdio.h>

int main()
{
    int a[5];
    printf("Enter the first element of the array:\n");
    scanf("%d",&a[0]);

    int *b=&a[0];

    int i;
    for(i=1;i<5;i++)
    {
        *(b+i)=*(b)+(2*i);
    }

    int j;

    printf("The array is");

    for(j=0;j<5;j++)
    {
        printf(" %d",*(b+j));
    }

    return 0;
}
