//Program to print a pattern 

#include<stdio.h>

int main()
{
    int i,j,n;
    printf("Enter the number of rows (enter a postive odd integer)\n");
    scanf("%d",&n);
    printf("The desired output is:\n\n");

    for(i=0;i<n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==i+1 || j==n-i)
            {
                printf("* ");
            }

            else if(j>i+1 && j<n-i)
            {
                printf("= ");
            }

            else if(j<=i && j<n-i)
            {
                printf("+ ");
            }

            else if(j>n-i && j>i+1)
            {
                printf("# ");
            }

            else
            {
                printf("@ ");
            }
        }

        printf("\n");
    }

    return 0;
}
