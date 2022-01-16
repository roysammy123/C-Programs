//Program to display the location of first null (\0) character

#include<stdio.h>
#include<string.h>

int main()
{
    char a[100]={0};
    printf("Enter your name and then press ENTER:\n");
    scanf("%[^\n]s",a);
    printf("\nThe entered name is: %s",a);

    int i;
    
    printf("\nThe location of the first null character is ");
    
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