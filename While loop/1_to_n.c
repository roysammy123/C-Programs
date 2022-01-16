//Program to display all numbers from 1 to n and n to 1

#include<stdio.h>

int main()
{
    int i;
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    
    if(n>0)
    {
        printf("\nThe numbers 1 to n are:\n");

        i=1;
        while(i<=n)
        {
            printf("%d ",i);
            i=i+1;
        }
        
        printf("\nThe numbers n to 1 are:\n");
        while(n>=1)
        {
            printf("%d ",n);
            n=n-1;
        }
    }

    else if(n<=0)
    {
        printf("\nThe numbers 1 to n are:\n");

        i=1;
        while(i>=n)
        {
            printf("%d ",i);
            i=i-1;
        }
        
        printf("\nThe numbers n to 1 are:\n");
        while(n<=1)
        {
            printf("%d ",n);
            n=n+1;
        }
    }

    
    return 0;

}
