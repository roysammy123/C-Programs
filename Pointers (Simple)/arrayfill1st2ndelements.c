// Program to fill 1st and 2nd elements of an array using 3rd element

#include<stdio.h>

int main()
{
    int a[5];

    int *b=&a[0];
    b=b+2;

    printf("Enter the value of the 3rd element:\n");
    scanf("%d",b);

    printf("The value of the 3rd element of the array is set as %d\n\n",*b);

    int i;

    for(i=1;i<=2;i++)
    {
        *(b-i)=*(b)-(2*i);
    }

    printf("The first,second and third elements of the array are");

    b=&a[0];

    for(int j=0;j<3;j++)
    {
        printf(" %d",*(b+j));
    }

    return 0;

}