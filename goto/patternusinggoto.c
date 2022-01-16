/* Program to print the following using goto:

4 3 2 1
3 2 1
2 1
1

*/

#include<stdio.h>

int main()
{
    int i,j,k,n;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    printf("The desired output is:\n\n");
    i=n;
    l1:
    j=1;
    k=i;
    l2:
    printf("%d ",k);
    j++;
    k--;
    if(j<=i)
    {
        goto l2;
    }

    printf("\n");
    i--;
    if(i>=1)
    {
        goto l1;
    }

    return 0;
}