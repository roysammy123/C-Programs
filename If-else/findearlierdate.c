// Program to find the earlier date out of two dates

#include <stdio.h>

int main()
{
    int d1,d2,m1,m2,y1,y2;
    printf("Enter first date in dd/mm/yyyy format\n");
    scanf("%d/%d/%d",&d1,&m1,&y1);
    printf("Enter second date in dd/mm/yyyy format\n");
    scanf("%d/%d/%d",&d2,&m2,&y2);
    if(y1==y2){
        if(m1==m2){
            if(d1<d2){
                printf("First date is earlier");
                     }
            else{
                printf("Second date is earlier");
                }
            }
        else{
            if(m1<m2){
                printf("First date is earlier");
                     }
            else{
                printf("Second date is earlier");
                }
            }
        }
        else{
            if(y1<y2){
                printf("First date is earlier");
            }
            else{
                printf("Second date is earlier");
            }
        }

    return 0;
}
