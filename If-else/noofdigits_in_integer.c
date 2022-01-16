//Program to display the number of digits in an integer

#include<stdio.h>

int main()
{
    long long int a;
    printf("Enter an integer\n");
    scanf("%lld",&a);
    long long int c=a;
    int count=0;
    while(a!=0)
    {
        a=a/10;
        count++;        
    }
    
    printf("The number of digits in %lld is %d",c,count);
    
    return 0;
}