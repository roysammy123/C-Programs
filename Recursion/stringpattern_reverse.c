// Program to take a string and display a pattern using recursive function

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

// Function to print reversed string pattern

void stringpattern(char *b, int x)
{
    // Program ending statement as x is length of string which can't be 0

    if(x == 0)
    {
        return;
    }
    
    // copying length of string value 

    int n;
    n = x;

    // printing from the last position of string array

    int i;
    for (i = n-1; i>=0; i--)
    {
        printf("%c",b[i]);
    }    
    printf("\n");

    stringpattern(b, n-1);
    
    /* 
    calling recursive function, but each time, reducing size of string by 1
    For example, for a string of length 4, if first line output display started from b[3], 
    it will start from b[2] in next step, then b[1], then  b[0] and then program will stop
    */

}


int stringlength(char *a)
{
    // finding length of string

    int n;
    for(n=0;n<20;n++)
    {
        if(a[n]=='\0')
        {
            break;
        }

        else
        {
            continue;
        }
    }

    return n; 
}


// Driver code

int main()
{
    // Taking string input

    char a[20]={0};
    printf("Enter a string (max 20 characters):\n");
    scanf("%s",a);

    // calling functions

    printf("The desired string pattern is:\n");

    int n;
    n = stringlength(a);

    stringpattern(a,n);

    return 0;
}
