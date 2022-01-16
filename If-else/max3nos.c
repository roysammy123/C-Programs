// Program to display the maximum of three numbers

#include <stdio.h>

int main()
{
    int a,b,c,max;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        max=a;
        if(a>c){
            printf("Maximum of the three numbers is %d",max);
                }
                else{
                    max=c;
                    printf("Maximum of the three numbers is %d",max);
                }
    }
    else{
        max=b;
        if(b>c){
            printf("Maximum of the three numbers is %d",max);
                }
                else{
                    max=c;
                    printf("Maximum of the three numbers is %d",max);
                }
    }

    return 0;
}