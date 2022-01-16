//Program to display the middle digit or digits of a number

#include<stdio.h>

int main()
{
    int n,x,a,count;
    int p,mid,b,c,i;
    int power=1;
    count=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    a=n;

    for(n=n;n>9;count++)
    {
        x=n%10;
        n=n/10;
    }

    count=count+1; //extra 1 for units place digit

    if (count%2!=0)
    {
        p=(count)/2;

        for(i=1;i<=p;i++)
        {
            power=power*10;
        }

        b=a/power;
        c=b%10;
        printf("The middle digit or middle digits of %d is %d",a,c);
    }
    
    else if(count%2==0)
    {
        p=(count)/2;

        for(i=1;i<=p;i++)
        {
            power=power*10;
        }

        b=a/(power/10);
        c=b%100;

        printf("The middle digit or middle digits of %d is %d",a,c);
    }

    return 0;

}