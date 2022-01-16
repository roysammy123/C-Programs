//Program to convert decimal to octal and hexadecimal

#include<stdio.h>

int main()
{
    char value=0x64;
    printf("Decimal value of %x is %d\n",value,value);
    printf("Octal value of %x is %o\n",value,value);
    printf("Hexadecimal value of %x is %x\n",value,value);

    return 0;
}