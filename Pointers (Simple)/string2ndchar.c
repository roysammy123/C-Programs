//Program to display the 2nd character of a string

#include<stdio.h>
#include<string.h>

int main()
{
    char a[20];
    printf("Enter a string (max 20 characters)\n");
    scanf("%s",a);

    char *b=&a[0];

    b=b+1;

    printf("The second character of the entered string is %c",*b);

    return 0;
}