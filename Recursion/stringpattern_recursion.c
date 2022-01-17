// Program to take a string and display a pattern using recursive function

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

void stringpattern(char *b)
{
    if(*b=='\0')
    {
        return;
    }

    printf("%s",b);
    printf("\n");
    stringpattern(b+1);
}

int main()
{
    char a[20]={0};
    printf("Enter a string (max 20 characters):\n");
    scanf("%s",a);

    printf("The desired string pattern is:\n");
    stringpattern(a);

    return 0;
}