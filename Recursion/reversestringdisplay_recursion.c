// Program to take a string and display it in reverse way using recursive function

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

void reversestring(char *b)
{
    if(*b=='\0')
    {
        return;
    }

    reversestring(b+1);

    printf("%c",b[0]);
}

int main()
{
    char a[20]={0};
    printf("Enter a string (max 20 characters):\n");
    scanf("%s",a);

    printf("The entered string after reversing is ");
    reversestring(a);

    return 0;
}