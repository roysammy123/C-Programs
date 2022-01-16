//Program to display each type of datatypes using variables and display the value stored in those variables

#include<stdio.h>

int main()
{
 char a='r';
 short int b=2;
 int c=5;
 long int d=556;
 long long int e=89898;
 float f=6.25;
 double g=56.25;
 long double h=565.25;
 printf("The character datatype variable value is %c\n",a);
 printf("The short int datatype variable value is %d\n",b);
 printf("The int datatype variable value is %i\n",c);
 printf("The long int datatype variable value is %ld\n",d);
 printf("The long long int datatype variable value is %lld\n",e);
 printf("The float datatype variable value is %f\n",f);
 printf("The double datatype variable value is %lf\n",g);
 printf("The long double datatype variable value is %Lf\n",h);
 
 return 0;
}