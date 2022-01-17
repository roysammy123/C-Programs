// Program to find GCD of two numbers using recursion

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int gcd(int x,int y)
{
    int max,min;
    max=(x>y)? x:y;
    min=(x<y)? x:y;

    int m=max%min;
    
    if(m==0)
    {
        return min;
    }

    max=min;
    min=m;

    gcd(max,min);
}

int main()
{
    int a,b;
    printf("Enter two numbers of which you want to find the GCD:\n");
    scanf("%d%d",&a,&b);
    
    int hcf;
    hcf=gcd(a,b);

    printf("The GCD of %d and %d is %d",a,b,hcf);

    return 0;
}
