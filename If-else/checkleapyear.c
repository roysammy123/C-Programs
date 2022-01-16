//Program to display whether a year is a leap year or not

#include<stdio.h>

int main()
{
    long int a;
    printf("Enter a year\n");
    scanf("%ld",&a);
    if(a%4==0 && a%100!=0)
    {
        printf("%ld is a leap year",a);
    }
    else if(a%4==0 && a%100==0)
    {
        if(a%400==0)
        {
            printf("%ld is a leap year",a);
        }
        else
        {
            printf("%ld is not a leap year",a);
        }
    }
    else
    {
        printf("%ld is not a leap year",a);
    }
    return 0;
}