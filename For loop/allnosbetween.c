//Program to display all the numbers between two numbers entered by the user

#include<stdio.h>

int main()
{
    int a,b,i;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("The numbers between %d and %d are:\n",a,b);

        for(i=a-1;i>b;i=i-1)
        {
            printf("%d ",i);
        }
    }
    else if(a<b)
    {
        printf("The numbers between %d and %d are:\n",a,b);
        
        for(i=a+1;i<b;i=i+1)
        {
            printf("%d ",i);
        }
    }

    return 0;
}