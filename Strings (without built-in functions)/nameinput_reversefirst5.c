//Program to take input of name as string and reverse the first 5 characters

#include<stdio.h>
#include<string.h>

int main()
{
    char a[100]={0};
    printf("Enter your name and then press ENTER:\n");
    scanf("%[^\n]s",a);
    printf("\nThe entered name is: %s",a);

    int i,j;
    char temp;

    for(i=0,j=4;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }

    printf("\nThe name after reversing the first 5 characters is: %s",a);

    return 0;
}