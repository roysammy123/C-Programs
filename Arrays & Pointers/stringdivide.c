// Program to take string of 20 characters as input and divide it into 4 parts

#include<stdio.h>
#include<string.h>

int main()
{
    char a[20];
    printf("Enter a string of 20 characters:\n");
    scanf("%s",a);

    printf("\nThe entered string is ");
    for(int x=0;x<20;x++)
    {
        printf("%c",a[x]);
    }

    char *b=a;
    char *c=a+4;
    char *d=a+8;
    char *e=a+12;
    char *f=a+16;

    int i;
    printf("\nThe first part of the entered string is ");
    for(i=0;i<4;i++)
    {
        printf("%c",*(b+i));
    }

    int j;
    printf("\nThe second part of the entered string is ");
    for(j=0;j<4;j++)
    {
        printf("%c",*(c+j));
    }

    int k;
    printf("\nThe third part of the entered string is ");
    for(k=0;k<4;k++)
    {
        printf("%c",*(d+k));
    }

    int l;
    printf("\nThe fourth part of the entered string is ");
    for(l=0;l<4;l++)
    {
        printf("%c",*(e+l));
    }

    int m;
    printf("\nThe fifth and final part of the entered string is ");
    for(m=0;m<4;m++)
    {
        printf("%c",*(f+m));
    }

    return 0;
}
