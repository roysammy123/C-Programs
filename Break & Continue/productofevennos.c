//Program to display the product of all the even numbers among the n numbers entered by the user

#include<stdio.h>

int main()
{
    int n,a;
    int i=1;
    int prd=1;
    printf("How many numbers do you want to enter?\n");
    scanf("%d",&n);
    printf("Enter the %d numbers\n",n);
    
    while(i<=n)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            prd=prd*a;
        }

        i++;
    }

    printf("The product of the even numbers among all the numbers entered by the user is %d",prd);

    return 0;
}