//Program to display all numbers from 1 to n and n to 1 using do-while loop

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
        do
        {
            printf("%d ",i);
            i=i+1;
        } while(i<=n);
        
        printf("\nThe numbers n to 1 are:\n");
        
        do
        {
            printf("%d ",n);
            n=n-1;
        } while(n>=1);
    }

    else if(n<=0)
    {
        printf("\nThe numbers 1 to n are:\n");

        i=1;
        do
        {
            printf("%d ",i);
            i=i-1;
        } while(i>=n);
        
        printf("\nThe numbers n to 1 are:\n");
        do
        {
            printf("%d ",n);
            n=n+1;
        } while(n<=1);
    }

    
    return 0;

}
