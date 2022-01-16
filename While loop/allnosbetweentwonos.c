//Program to display all the numbers between two integers

#include<stdio.h>

int main()
{
    int a,b,i;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("The numbers between %d and %d are:\n",b,a);
        i=b;
        while(i<a)
        {
            printf("%d ",i);
            i=i+1;
        }
    }
    else if(b>a)
    {
        printf("The numbers between %d and %d are:\n",a,b);
        i=a;
        while(i<b)
        {
            printf("%d ",i);
            i=i+1;
        }
    }

    return 0;
}