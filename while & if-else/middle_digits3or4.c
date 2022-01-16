//Program to display the middle three digit or middle four digits of a number

#include<stdio.h>

int main()
{
    int n,x,a,count;
    int p,mid,b,c,i,j,e;
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
        p=count;
        j=5;
        e=3;
        while(count>=5 && j<=count && e<count)
        {
            j=j+2;
            e=e+1;
        }
        while(i<=(p-e))
        {
            power=power*10;
            i++;
        }
        b=a/power;
        c=b%1000;
        printf("The middle digit or middle digits of %d is %d",a,c);
    }
    
    else if(count%2==0)
    {
        p=count;
        j=6;
        e=4;
        while(count>=6 && j<=count && e<count)
        {
            j=j+2;
            e=e+1;
        }
        while(i<=(p-e))
        {
            power=power*10;
            i++;
        }
        b=a/power;
        c=b%10000;
        printf("The middle digit or middle digits of %d is %d",a,c);
    }

    return 0;

}