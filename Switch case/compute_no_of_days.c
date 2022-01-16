//Program to display the number of days of a date from the Jan 1st of the same year

#include<stdio.h>

int main()
{
    int d,m,y;
    int e,f;
    printf("Enter a date in dd/mm/yyyy format\n");
    scanf("%d/%d/%d",&d,&m,&y);
    if((y%4==0 && y%100!=0)||(y%4==0 && y%100==0 && y%400==0))
    {
        switch (m)
        {
        case 1: e=0;
            break;
        case 2: e=31;
            break;
        case 3: e=60;
            break;
        case 4: e=91;
            break;
        case 5: e=121;
            break;
        case 6: e=152;
            break;
        case 7: e=182;
            break;
        case 8: e=213;
            break;
        case 9: e=244;
            break;
        case 10: e=274;
            break;
        case 11: e=305;
            break;
        case 12: e=335;
        }
    }
    else
    {
        switch (m)
        {
        case 1: e=0;
            break;
        case 2: e=31;
            break;
        case 3: e=59;
            break;
        case 4: e=90;
            break;
        case 5: e=120;
            break;
        case 6: e=151;
            break;
        case 7: e=181;
            break;
        case 8: e=212;
            break;
        case 9: e=243;
            break;
        case 10: e=273;
            break;
        case 11: e=304;
            break;
        case 12: e=334;
        }
    }
    f=e+d;
    printf("The number of days is %d",f);
    return 0;
}
