//Program to display a pattern

#include<stdio.h>

int main()
{
    int i,j,k,n,turn;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    turn=0;
    k=(n*(n+1))/2;
    printf("The desired pattern is:\n\n");

    for(i=n;i>=1;i--)
    {
        if(turn==0)        
        {
            for(j=1;j<=i;j++)
            {                
                printf("%d\t",k);
                k--;
            }
        }
            
        else if(turn==1)
        {
            k=k-i;
            for(j=1;j<=i;j++)
            {
                k++;
                printf("%d\t",k);   
            }

            k=k-i;
        }
        
        turn=(turn+1)%2; //if turn=0, changes to 1 and vice versa for forward/bakward printing
        printf("\n");
    }

    return 0;
}
