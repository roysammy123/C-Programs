//Program to display 1 to n and n to 1 numbers using for loop

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

        for(i=1;i<=n;i=i+1)
        {
            printf("%d ",i);
        }
        
        printf("\nThe numbers n to 1 are:\n");

        for(n=n;n>=1;n=n-1)      
        {
            printf("%d ",n);
        }
    }

    else if(n<=0)
    {
        printf("\nThe numbers 1 to n are:\n");

        for(i=1;i>=n;i=i-1)
        {
            printf("%d ",i);
        }
        
        printf("\nThe numbers n to 1 are:\n");
        
        for(n=n;n<=1;n=n+1)
        {
            printf("%d ",n);
        }
    }

    
    return 0;

}
