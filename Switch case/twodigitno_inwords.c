//Program to display a two digit number in words

#include<stdio.h>

int main()
{
    int a;
    printf("Enter a two digit number\n");
    scanf("%d",&a);
    int b=a/10;
    int c=a%10;
    printf("The two digit integer %d in words is ",a);
    switch (b)
    {
    case 1:
        {
            switch (c)
            {
            case 0: printf("Ten");
                break;
            case 1: printf("Eleven");
                break;
            case 2: printf("Twelve");
                break;
            case 3: printf("Thirteen");
                break;
            case 4: printf("Fourteen");
                break;
            case 5: printf("Fifteen");
                break;
            case 6: printf("Sixteen");
                break;
            case 7: printf("Seventeen");
                break;
            case 8: printf("Eighteen");
                break;
            case 9: printf("Nineteen");
                break;
            }
     
        }
        break;
    
    case 2: printf("Twenty");
        break;
    case 3: printf("Thirty");
        break;
    case 4: printf("Forty");
        break;
    case 5: printf("Fifty");
        break;
    case 6: printf("Sixty");
        break;
    case 7: printf("Seventy");
        break;
    case 8: printf("Eighty");
        break;
    case 9: printf("Ninety");
        break;
    }

    if(b>=2 && b<=9)
    {
        switch (c)
        {
        case 1: printf(" One");
            break;
        case 2: printf(" Two");
            break;
        case 3: printf(" Three");
            break;
        case 4: printf(" Four");
            break;
        case 5: printf(" Five");
            break;
        case 6: printf(" Six");
            break;
        case 7: printf(" Seven");
            break;
        case 8: printf(" Eight");
            break;
        case 9: printf(" Nine");
            break; 
        }
    }
    else
    {
        ;
    }
    return  0;
}