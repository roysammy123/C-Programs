//Program to display the number of digits in a number

#include<stdio.h>

int main()
{
    int n,x,a,count;
    count=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    a=n;

    while (n>9)
    {
        x=n%10;
        count++;
        n=n/10;
    }

    count=count+1; //extra 1 for units place digit
    
    printf("The number of digits in %d is %d",a,count);
    return 0;    
}