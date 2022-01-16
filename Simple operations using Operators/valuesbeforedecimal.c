//Program to display the values before  the decimal in real datatype values

#include<stdio.h>

int main()
{
    float a;
    printf("Enter a value of real datatype\n");
    scanf("%f",&a);
    int b=a/1;
    printf("The values before the decimal place of %f is %d",a,b);

    return 0;
}