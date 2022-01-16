//Program to display the second largest of three numbers using ternary operator

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    int d=(a>b && a>c)?((b>c)?b:c):((b>c)?((a>c)?a:c):((a>b)?a:b)); /*(a>b && a>c) will tell us if a is largest.
                                                                    ((b>c)?b:c) finds out the greater between b and c
                                                                    which will be the second largest. If a not largest, then we
                                                                    find out if b is largest by ((b>c)?(a>c)?a:c):((a>b)?a:b),
                                                                    if true then comparing a and c, if
                                                                    false then comparing a and b, we get second largest*/
    printf("The second largest of the three numbers is %d",d);

    return 0;
}