//Program to calculate discount on total amount and display the discounted price

#include<stdio.h>

int main()
{
    long int a,b,c;
    printf("Enter price of Item 1\n");
    scanf("%ld",&a);
    printf("Enter price of Item 2\n");
    scanf("%ld",&b);
    printf("Enter price of Item 3\n");
    scanf("%ld",&c);
    long int totalprice=a+b+c;
    long int disc;
    if(totalprice<=1000)
    {
        disc=0;
    }
    else if(totalprice>1000 && totalprice<=3000)
    {
        disc=(totalprice*10)/100;
    }
    else if(totalprice>3000 && totalprice<=5000)
    {
        disc=(totalprice*20)/100;
    }
    else if(totalprice>5000)
    {
        disc=(totalprice*30)/100;
    }
    long int payment=totalprice-disc;

    printf("Items\t\t\t\t\tAmount\n");
    printf("-----\t\t\t\t\t------\n");
    printf("1\t\t\t\t\t%ld",a);
    printf("\n2\t\t\t\t\t%ld",b);
    printf("\n3\t\t\t\t\t%ld",c);
    printf("\n------------------------------------------------------\n");
    printf("Total amount after discount :\t\t%ld",totalprice);
    printf("\nDiscount                    :\t\t%ld",disc);
    printf("\n------------------------------------------------------\n");
    printf("Payment Due                 :\t\t%ld",payment);
    printf("\n\nThank you!");
}