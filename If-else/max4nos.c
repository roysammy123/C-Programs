// Program to find the maximum of four numbers

#include <stdio.h>

int main()
{
    int a,b,c,d,max;
    printf("Enter four numbers\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b){
        max=a;
        if(a>c){
            if(a>d){
                    printf("Maximum of the four numbers is %d",max);
                   }
                else{
                    max=d;
                    printf("Maximum of the four numbers is %d",max);
                    }
        }
        else{
            max=c;
            if(c>d){
                    printf("Maximum of the four numbers is %d",max);
                   }
                else{
                    max=d;
                    printf("Maximum of the four numbers is %d",max);
                    }
        }
    }
    else{
        max=b;
        if(b>c){
            if(b>d){
                    printf("Maximum of the four numbers is %d",max);
                   }
                else{
                    max=d;
                    printf("Maximum of the four numbers is %d",max);
                    }
        }
        else{
            max=c;
            if(c>d){
                    printf("Maximum of the four numbers is %d",max);
                   }
                else{
                    max=d;
                    printf("Maximum of the four numbers is %d",max);
                    }
        }
    }

    return 0;
}