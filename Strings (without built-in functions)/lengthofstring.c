//Program to find the length of the input string

#include<stdio.h>
#include<string.h>

int main()
{
    char a[100]={0};
    printf("Enter your name and then press ENTER:\n");
    scanf("%[^\n]s",a);
    printf("\nThe entered name is: %s",a);

    printf("\nThe length of the entered string is ");

    int i;
    
    for(i=0;i<100;i++)
    {
        if(a[i]=='\0')
        {
            printf("%d",i);
            break;
        }

        else
        {
            continue;
        }
    }

    return 0;
}