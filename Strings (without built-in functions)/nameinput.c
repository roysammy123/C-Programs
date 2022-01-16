//Program to take input of name as string

#include<stdio.h>
#include<string.h>

int main()
{
    char a[100]={0};
    printf("Enter your name and then press ENTER:\n");
    scanf("%[^\n]s",a);
    printf("\nThe entered name is: %s",a);
    return 0;
}