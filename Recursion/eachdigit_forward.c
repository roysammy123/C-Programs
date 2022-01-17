// Prorgram to display each digit of a number in forward direction

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void eachdigitforward(int n)
{
    int m;
    m=n%10;

    if(n==0)
    {
        return;
    }

    eachdigitforward(n/10);

    printf("%d,",m);
}

int main()
{
    int x;
    printf("Enter the number:\n");
    scanf("%d",&x);
    printf("Each digit of the entered number in the forward direction is ");
    
    eachdigitforward(x);

    printf("\b "); //To remove comma after output from function

    return 0;
}