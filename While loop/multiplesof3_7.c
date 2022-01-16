//Program to display all the multiples of 3 and 7 between two integers

#include<stdio.h>

int main()
{
    int a,b,i;
    int r;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    
    if(a>b)
    {
        printf("The multiples of 3 and 7 between %d and %d are:\n",b,a);
        i=b;
        while(i<a)
        {
            if(i%3==0 || i%7==0)
            {
            printf("%d ",i);
            }
            i=i+1;
        }
    }
    else if(b>a)
    {
        printf("The multiples of 3 and 7 between %d and %d are:\n",a,b);
        i=a;
        while(i<b)
        {
            if(i%3==0 || i%7==0)
            {
            printf("%d ",i);
            }
            i=i+1;
        }
    }

    return 0;
}