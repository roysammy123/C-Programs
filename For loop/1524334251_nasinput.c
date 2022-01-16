//Program to print a desired pattern like for n=5, print 1524334251

#include<stdio.h> 

int main()
{ 
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);

    for(int i=1, j=n; i<=n; i++,j--)
    {
        printf("%d %d ", i,j);
    }

    return 0;
}