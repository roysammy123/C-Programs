//Program to display calendar of a month

#include <stdio.h>

int main()
{
    int m,y,d,date,i=1,c;
    printf("Enter month and year\n");
    scanf("%d%d",&m,&y);
    printf("Enter 1 for Sunday, 2 for Monday..., 7 for Saturday\n");
    scanf("%d",&d);
    switch(m)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:date=31;
        break;
        case 2:date =28;
        break;
        case 4:
        case 6:
        case 9:
        case 11:date=30;
        break;
        
    }
    printf("\nSun\tMon\tTues\tWed\tThurs\tFri\tSat\n");
    while(i<d)
    {
        printf("\t");
        i++;
    }
    c=d+1;i=1;
    while(i<=date)
    {
        printf("%d\t",i);
        if(c>7)
        {
            c=1;printf("\n");
        }
        i++;
        c++;
    }
    return 0;
}
