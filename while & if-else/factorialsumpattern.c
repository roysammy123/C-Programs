//Program to print result of 1/1! + 1/3! + 1/5! +.....+ 1/n!

#include<stdio.h>

int main()
{
    int n,i,prd,tmp;
    float sum=0;
    printf("Enter a positive odd number\n");
    scanf("%d",&n);
    i=1;
    while (i<=n)
    {
        tmp=i;
        prd=1;
        while (tmp>=1)
        {
            prd=prd*tmp;
            tmp--;
        }

        sum=sum+(1.0/prd);
        i=i+1;
    }

    printf("The result of 1/1! + 1/3! + 1/5! +.....+ 1/n! is %f",sum);

    return 0;    
}