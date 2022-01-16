//Program to display ASCII value of each escape character in C

#include<stdio.h>
int main()
{
    char c,d,e,f,g,h;
    c='\n',d='\r',e='\t',f='\b',g='\v',h='\f';
    printf("The ASCII value of \\n is %d\n",c);
    printf("The ASCII value of \\r is %d\n",d);
    printf("The ASCII value of \\t is %d\n",e);
    printf("The ASCII value of \\b is %d\n",f);
    printf("The ASCII value of \\v is %d\n",e);
    printf("The ASCII value of \\f is %d",f);

    return 0;
}
