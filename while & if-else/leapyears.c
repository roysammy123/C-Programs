//Program to find all the leap years between two years

#include<stdio.h>

int main()
{
    int a,b,y;
    printf("Enter two years\n");
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        printf("The leap years between %d and %d are:\n",b,a);
        y=b;
        while(y<=a)
        {
            if((y%4==0 && y%100!=0)||(y%400==0))
            {
              printf("%d ",y);               
            }    

            y=y+1;         
        }
    }

    else if(b>a)
    {
        printf("The leap years between %d and %d are:\n",a,b);
        y=a;
        while(y<=b)
        {
            if((y%4==0 && y%100!=0)||(y%400==0))
            {
              printf("%d ",y);              
            }

            y=y+1;
        }
    }

    return 0;    
}