// Program to write a function which takes three numbers and returns their average

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int average(int x,int y,int z)
{
    int avg=(x+y+z)/3;
    return avg;
}

int main()
{
    int a,b,c,result;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    result=average(a,b,c);
    printf("The average of the three numbers entered is %d",result);
    return 0;
}
