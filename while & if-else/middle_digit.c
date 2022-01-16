//Program to display the middle digit(S) of a number

#include<stdio.h>

int main()
{
    int n,x,a,count;
    int p,mid,b,c,i;
    int power=1;
    i=1;
    count=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    a=n;

    while (n>9)
    {
        x=n%10;
        count++;
        n=n/10;
    }

    count=count+1; //extra 1 for units place digit

    if (count%2!=0)
    {
        p=(count)/2;
        while(i<=p)
        {
            power=power*10;
            i++;
        }
        b=a/power;
        c=b%10;
        printf("The middle digit or middle digits of %d is %d",a,c);
    }
    
    else if(count%2==0)
    {
        p=(count)/2;
        while(i<=p)
        {
            power=power*10;
            i++;
        }
        b=a/(power/10);
        c=b%100;
        printf("The middle digit or middle digits of %d is %d",a,c);
    }

    return 0;

}