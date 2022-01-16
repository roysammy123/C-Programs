//Program to reverse a string

#include<stdio.h>
#include<string.h>

int main()
{
    char a[100]={0};
    printf("Enter your name and then press ENTER:\n");
    scanf("%[^\n]s",a);
    printf("\nThe entered string is: %s",a);

    int i,j,k;

    for(k=0;k<100;k++)
    {
        if(a[k]=='\0')
        {
            break;
        }

        else
        {
            continue;
        }
    }

    char temp;

    for(i=0,j=k-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }

    printf("\nThe reversed string is: %s",a);

    return 0;
}