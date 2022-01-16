/*Program to print the following

1   4   7   10
2   5   8   11
3   6   9   12

*/

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows of the 2d array:\n");
    scanf("%d",&n);

    int a[n][4];
    int count=1;
    int i,j,countcopy;
    countcopy=count;

    for(i=0;i<n;i++)
    {
        for(j=0;j<4;j++)
        {
            a[i][j]=count;
            count=count+n;
        }
        countcopy++;
        count=countcopy;
    }

    printf("\nThe desired 2d array is:\n\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
        
        printf("\n");
    }
    return 0;
    
}