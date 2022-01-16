//Program to display all the perfect square numbers between two numbers entered by the user

#include<stdio.h>

int main()
{
    int a,b,psq,n,sum;
    n=1;
    sum=0;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    
    if(a>b)
    {
        printf("The perfect squares between %d and %d are ",b,a);
        while(n<=a)
        {
            psq=n*n;
            if(psq<=a && psq>=b)
            {
            printf("%d ",psq);
            sum=sum+psq;
            }
            n++;
        }
    }

    else if(b>a)
    {
        printf("The perfect squares between %d and %d are ",a,b);
        while(n<=b)
        {
            psq=n*n;
            if(psq<=b && psq>=a)
            {
            printf("%d ",psq);
            sum=sum+psq;
            }
            n++;
        }
    }

    printf("\nThe sum of the perfect square numbers are %d",sum);

    return 0;
}