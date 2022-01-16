// Program to take an integer and a character as input and display a pattern

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void pattern(int n,char c)
{
    printf("The desired output is:\n");
    
    int i,j;

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",c);
        }

        printf("\n");
    }
}

int main()
{
    int a;
    char s;
    printf("Enter an integer:\n");
    scanf("%d",&a);
    printf("Enter a character:\n");
    scanf(" %c",&s); // Space before %c to avoid taking enter as input from previous scanf

    pattern(a,s);

    return 0;
}