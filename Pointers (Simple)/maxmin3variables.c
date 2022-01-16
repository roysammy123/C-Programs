// Program to find the maximum and minimum values between three variables using pointers

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three values:\n");
    scanf("%d%d%d",&a,&b,&c);

    int *x,*y,*z;
    x=&a;
    y=&b;
    z=&c;

    int p,q,r;
    p=*x;
    q=*y;
    r=*z;

    int max;

    if(p>q){
        max=p;
        if(p>r){
            printf("Maximum of the three values is %d",max);
                }
                else{
                    max=r;
                    printf("Maximum of the three numbers is %d",max);
                }
    }
    else{
        max=q;
        if(q>r){
            printf("Maximum of the three numbers is %d",max);
                }
                else{
                    max=r;
                    printf("Maximum of the three numbers is %d",max);
                }
    }

    int min;

     if(p<q){
        min=p;
        if(p<r){
            printf("\nMinimum of the three values is %d",min);
                }
                else{
                    min=r;
                    printf("\nMinimum of the three numbers is %d",min);
                }
    }
    else{
        min=q;
        if(q<r){
            printf("\nMinimum of the three numbers is %d",min);
                }
                else{
                    min=r;
                    printf("\nMinimum of the three numbers is %d",min);
                }
    }

    return 0;
}