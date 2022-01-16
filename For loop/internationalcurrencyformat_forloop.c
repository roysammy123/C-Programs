//Program to display a figure in international currency format

#include <stdio.h>

int main()
{
    int a,no,tmp,nd=0,rev=0,tens=1,i=0,data,rv;
    printf("Enter the value in figure\n");
    scanf("%d",&no);
    tmp=no;

    printf("The entered value in international currency format is $");

    for(nd=0;tmp>0;nd++)
    {
        a=tmp%10;
        rev=rev*10+a;
        tmp=tmp/10;
    }
    
    /*while(tmp>0)
    {
        a=tmp%10;
        nd++;
        rev=rev*10+a;
        tmp=tmp/10;
    }*/

    for(i=0;i<(nd%3);i++)
    {
        tens=tens*10;
    }

    /*while(i<(nd%3))
    {
        tens=tens*10;
        i++;
    }*/
    
    data=rev%tens;
    rev=rev/tens;
    tmp=data;
    rv=0;

    for(;tmp>0;)
    {
        a=tmp%10;
        rv=rv*10+a;
        tmp=tmp/10;
    }

    /*while(tmp>0)
    {
        a=tmp%10;
        rv=rv*10+a;
        tmp=tmp/10;
    }*/

    printf("%d,",rv);
        
    for(;rev;)
    {
        data=rev%1000;
        tmp=data;
        rv=0;

        for(;tmp>0;)
        {
            a=tmp%10;
            rv=rv*10+a;
            tmp=tmp/10;
        }

        printf("%d,",rv);
        rev=rev/1000;

    }

    /*while(rev>0)
    {
        data=rev%1000;
        tmp=data;
        rv=0;

        while(tmp>0)
        {
            a=tmp%10;
            rv=rv*10+a;
            tmp=tmp/10;
        }

        printf("%d,",rv);
        rev=rev/1000;
    }*/

    printf("\b.00");
    return 0;
}