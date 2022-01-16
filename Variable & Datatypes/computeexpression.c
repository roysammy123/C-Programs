//Program to compute a given algebraic expression

#include<stdio.h>

int main()
{
    int x,y,z;
    printf("Enter the values of x,y,z\n");
    scanf("%d%d%d",&x,&y,&z);
    float exp1,exp2,expfinal;
    exp1=x*x*x+3*x*x-4*z;
    exp2=7+2*y;
    expfinal=exp1/exp2;
    printf("The value of (x^3+3x^2-4z)/(7+2y) is %f",expfinal);

    return 0;
}