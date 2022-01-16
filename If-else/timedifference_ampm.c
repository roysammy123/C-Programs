//Program to display the time difference between two times

#include<stdio.h>

int main()
{
    int h1,m1,s1;
    int h2,m2,s2;
    int hh1,hh2;
    char ap;
    char ampm;
    printf("Enter the first time in hh:mm:ss a/p format (enter a for am and p for pm)\n");
    scanf("%d:%d:%d %c",&h1,&m1,&s1,&ap);
    printf("Enter the second time in hh:mm:ss a/p format (enter a for am and p for pm)\n");
    scanf("%d:%d:%d %c",&h2,&m2,&s2,&ampm);
    if(ap=='a')
    {
        if(h1>=1 && h1<=11)
        {
            hh1=h1;
        }
        else if(h1==12)
        {
            hh1=00;
        }
        
    }
    else if(ap=='p')
    {
        if(h1>=1 && h1<=11)
        {
            hh1=h1+12;
        }
        else if(h1==12)
        {
            hh1=12;
        }
        
    }
    else
    {
        ("Enter a valid time\n");
    }


    if(ampm=='a')
    {
    if(h2>=1 && h2<=11)
        {
            hh2=h2;
        }
        else if(h2==12)
        {
            hh2=00;
        }
        
    }
    else if(ampm=='p')
    {
        if(h2>=1 && h2<=11)
        {
            hh2=h2+12;
        }
        else if(h2==12)
        {
            hh2=12;
        }
        
    } 
    else
    {
        printf("Enter a valid date\n");
    }
    int hmin1,minsec1;
    int hmin2,minsec2;
    hmin1=hh1*60;
    hmin2=hh2*60;
    minsec1=((hmin1+m1)*60)+s1;
    minsec2=((hmin2+m2)*60)+s2;
    int totalsecdiff;
    if((h1>=1 && h1<=12)&&(h2>=1 && h2<=12))
    {
        if(minsec1>=minsec2)
    {
        totalsecdiff=minsec1-minsec2;
    }
    else
    {
        totalsecdiff=minsec2-minsec1;
    }
    int secdiff=totalsecdiff%60;
    int mindiff1=totalsecdiff/60;
    int hdiff=mindiff1/60;
    int mindiff=mindiff1%60;
    printf("The time difference is %d hours, %d minutes %d seconds",hdiff,mindiff,secdiff);
    }
    else
    {
        printf("Enter a valid date\n");
    }

    return 0;  
}