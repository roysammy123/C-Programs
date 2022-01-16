//Program to display each character of a string

#include<stdio.h>
#include<string.h>

int main()
{
    char a[100]={0};
    printf("Enter your name and then press ENTER:\n");
    scanf("%[^\n]s",a);
    printf("\nThe entered name is: %s",a);

    int i;
    
    for(i=0;i<100;i++)
    {
        if(a[i]=='\0')
        {
            break;
        }

        else
        {
            continue;
        }
    }

    printf("\nEach character of the entered string is: ");

    int j;
    for(j=0;j<i;j++)
    {
        printf("'%c',",a[j]);
    }

    printf("\b "); // To remove the last comma in output

    return 0;
}
