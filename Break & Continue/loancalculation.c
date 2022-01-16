//Program to calculate in how many years a loan will be repaid

#include<stdio.h>

int main()
{
    float p,w,b,r,firstw;
    int y=0;
    printf("Enter the principal amount:\n");
    scanf("%f",&p);
    printf("Enter the rate of interest per annum:\n");
    scanf("%f",&r);
    printf("Enter the yearly withdrawn amount:\n");
    scanf("%f",&w);
    firstw=0;
    b=p-firstw;
    
    printf("Year\t\t\tPrincipal\t\t\tWithdrawn\t\t\tBalance\n");
    printf("----\t\t\t---------\t\t\t---------\t\t\t-------\n");
    printf("%d\t\t\t%f\t\t\t%f\t\t\t%f\n",y,p,firstw,b);

    while(b>w)
    {
        y=y+1;        
        p=b+((b*r)/100);
        b=p-w;  
        printf("%d\t\t\t%f\t\t\t%f\t\t\t%f\n",y,p,w,b);
    }

    //now Balance < Withdrawn Amount

    if(b>0 && b<w)
    {
        y=y+1;
        p=b+((b*r)/100);
        w=p;
        b=p-w;
        printf("%d\t\t\t%f\t\t\t%f\t\t\t%f\n",y,p,w,b);
    }        

    return 0;
}