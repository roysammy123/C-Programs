// Program to take two dates using structure and find out the earlier date using function

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct
{
    int dd;
    int mm;
    int yyyy;
} date;

void earlierdate(date x,date y)
{
    if(x.yyyy==y.yyyy)
    {
        if(x.mm==y.mm)
        {
            if(x.dd<y.dd)
            {
                printf("First date is earlier");
            }
            
            else
            {
                printf("Second date is earlier");
            }
        }
        
        else
        {
            if(x.mm<y.mm)
            {
                printf("First date is earlier");
            }
            
            else
            {
                printf("Second date is earlier");
            }
        }
    }
        
    else
    {
            if(x.yyyy<y.yyyy)
            {
                printf("First date is earlier");
            }
            else
            {
                printf("Second date is earlier");
            }
    }
}

int main()
{
    date a,b;
    printf("Enter first date in dd/mm/yyyy format\n");
    scanf("%d/%d/%d",&a.dd,&a.mm,&a.yyyy);
    printf("Enter second date in dd/mm/yyyy format\n");
    scanf("%d/%d/%d",&b.dd,&b.mm,&b.yyyy);

    earlierdate(a,b);

    return 0;
}
