//Program to apply discount and calculate total amount

#include<stdio.h>

int main()
{
    long int a,b,c;
    long int adisc,bdisc,cdisc;
    printf("Enter price of Item 1\n");
    scanf("%ld",&a);
    printf("Enter price of Item 2\n");
    scanf("%ld",&b);
    printf("Enter price of Item 3\n");
    scanf("%ld",&c);
    if(a>0 && a<=2000)
    {
        adisc=a;
    }
    else if(a>2000 && a<=3000)
    {
        adisc=a-((a*2)/100);
    }
    else if(a>3000)
    {
        adisc=a-((a*5)/100);
    }
    
    

    if(b>0 && b<=2000)
    {
        bdisc=b;
    }
    else if(b>2000 && b<=3000)
    {
        bdisc=b-((b*2)/100);
    }
    else if(b>3000)
    {
        bdisc=b-((b*5)/100);
    }
    


    if(c>0 && c<=2000)
    {
        cdisc=c;
    }
    else if(c>2000 && c<=3000)
    {
        cdisc=c-((c*2)/100);
    }
    else if(c>3000)
    {
        cdisc=c-((c*5)/100);
    }
    
    long int ad,bd,cd;
    ad=a-adisc;
    bd=b-bdisc;
    cd=c-cdisc;
    long int total=adisc+bdisc+cdisc;
    long int totaldisc;
    if(total>0 && total<=2000)
    {
        totaldisc=0;
    }
    else if(total>2000 && total<=3000)
    {
        totaldisc=(total*2)/100;
    }
    else if(total>3000)
    {
        totaldisc=(total*5)/100;
    }


    long int payment=total-totaldisc;

    printf("Items\t\tAmount\t\tDiscount\tDiscounted Price\n");
    printf("-----\t\t------\t\t--------\t----------------\n");
    printf("1\t\t%ld\t\t%ld\t\t%ld",a,ad,adisc);
    printf("\n2\t\t%ld\t\t%ld\t\t%ld",b,bd,bdisc);
    printf("\n3\t\t%ld\t\t%ld\t\t%ld",c,cd,cdisc);
    printf("\n----------------------------------------------------------------\n");
    printf("Total amount after discount :\t\t\t%ld",total);
    printf("\nFurther discount            :\t\t\t%ld",totaldisc);
    printf("\n----------------------------------------------------------------\n");
    printf("Payment Due                 :\t\t\t%ld",payment);
    printf("\n\nThank you!");

    return 0;
}