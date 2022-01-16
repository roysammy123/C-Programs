//Program to display the maximum and minimum of 2 digits

#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("Max is %d\n",a);
        printf("Min is %d",b);
    }
    else{
        printf("Max is %d\n",b);
        printf("Min is %d",a);
    }

    return 0;
}