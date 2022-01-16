//Program to trace the path in a matrix from starting point to ending point

#include<stdio.h>

int main()
{
    int a[6][6]={
                    {0,0,1,0,0,0},
                    {0,0,1,0,0,0},
                    {1,1,1,0,0,0},
                    {1,0,0,1,1,1},
                    {1,1,1,1,0,1},
                    {0,0,0,0,1,1}
                };

    int i,j;

    printf("The maze is:\n\n");

    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            printf("%d (%d,%d)\t",a[i][j],i,j);
        }

        printf("\n");
    }

    int si=0,sj=2,di=5,dj=4;

    printf("\nThe path from START to END moving through '1's is:\n\n");
    printf("START --> ");

    while (1) //1 means TRUE here so infinite loop
    {
        printf("(%d,%d) --> ",si,sj);
        
        if(si==di && sj==dj)
        {
            printf("END");
            break;
        }      

        if(si-1>=0 && a[si-1][sj]==1) //Upwards
        {
            a[si][sj]=-1;
            si--;
        }

        else if(si+1<6 && a[si+1][sj]==1) //Downwards
        {
            a[si][sj]=-1;
            si++;
        }

        else if(sj-1>=0 && a[si][sj-1]==1) //Left
        {
            a[si][sj]=-1;
            sj--;
        }

        else if(sj+1<6 && a[si][sj+1]==1) //Right
        {
            a[si][sj]=-1;
            sj++;
        }
        
    }

    return 0;
}