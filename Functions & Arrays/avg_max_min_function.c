// Program to take two integers and display average, maximum, minimum of them in a function

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void avgmaxmin(int *x,int *y)
{
    int max;
    max=(*x>*y)? *x:*y;
    printf("The maximum of the two numbers is %d\n",max);

    int min;
    min=(*x<*y)? *x:*y;
    printf("The minimum of the two numbers is %d\n",min);

    float avg;
    avg=((*x)+(*y))/2.0;
    printf("The average of the two numbers is %f\n",avg);
}

int main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    avgmaxmin(&a,&b);

    return 0;
}
