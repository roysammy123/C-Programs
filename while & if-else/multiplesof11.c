//Program to display all the numbers divisible by 11 between two numbers entered by user

#include<stdio.h>

int main()
{
    int a,b,i;
    int r;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    
    if(a>b)
    {
        printf("The numbers divisible by 11 between %d and %d are:\n",b,a);
        i=b;
        while(i<a)
        {
            if(i%11==0)
            {
            printf("%d ",i);
            }
            i=i+1;
        }
    }
    else if(b>a)
    {
        printf("The numbers divisible by 11 between %d and %d are:\n",a,b);
        i=a;
        while(i<b)
        {
            if(i%11==0)
            {
            printf("%d ",i);
            }
            i=i+1;
        }
    }

    return 0;

} 