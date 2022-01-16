// Program to write a function to display the fibonacci series

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

void fibonacciseries(int n)
{
    int a,b,c;
    int i;
    
    a=0,b=1;

    printf("%d %d ",a,b);

    for(i=1;i<=(n-2);i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }

}

int main()
{
    int no;
    printf("Enter upto how many terms you want to display the fibonacci series:\n");
    scanf("%d",&no);  

    printf("The fibonacci serious upto %d terms is ",no);

    fibonacciseries(no);

    return 0;
}