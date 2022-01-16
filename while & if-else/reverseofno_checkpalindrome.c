//Program to display the reverse of a number and check whether it is palindrome or not

#include<stdio.h>

int main()
{
    /* Finding Reverse*/

    int n,x,sum,a;
    sum=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    a=n;
    while (n>0)
    {
        x=n%10;
        sum=(sum*10)+x;
        n=n/10;
    }
    printf("The reverse of %d is %d",a,sum);

    /*checking palindrome or not*/

    if(a==sum)
    {
        printf("\n%d is a palindromic number",a);
    }
    else
    {
        printf("\n%d is not a palindromic number",a);
    }

    return 0;    
}