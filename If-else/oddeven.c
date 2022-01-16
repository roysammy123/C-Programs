//Program to check whether a number is odd or even

#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a%2==0){
        printf("Entered number is even");
    }
    else{
        printf("Entered number is odd");
    }

    return 0;
}