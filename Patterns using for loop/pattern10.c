//Program to display a pattern

#include<stdio.h>

int main()
{
    int n,i,j,k,l;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    printf("The desired output is:\n\n");
    k=0;
    l=0; //For deciding forward or backward

    for(i=n;i>=1;i--)
    {
        if(l==0)        
        {
            for(j=1;j<=i;j++)
            {
                k=k+1;
                printf("%d\t",k);
            }
        }
            
        else if(l==1)
        {
            k=k+i;
            for(j=1;j<=i;j++)
            {
                printf("%d\t",k);
                k--;    
            }

            k=k+i;
        }
        
        l=(l+1)%2; //if l=0, changes to 1 and vice versa
        printf("\n");
    }      

    return 0;
}