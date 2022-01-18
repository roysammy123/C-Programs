// Program to take info of 3 employees using structure and display their info

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct
{
    int id;
    char name[30];
    double basicsalary;
    double grosssalary;
} employee;

int main()
{
    employee e1,e2,e3;

    // Employee-1 input 

    printf("Enter name of employee-1:\n");
    scanf(" %[^\n]s",e1.name); // space before identifier to avoid whitespace
    printf("Enter ID of employee-1:\n");
    scanf("%d",&e1.id);
    printf("Enter basic salary of employee-1:\n");
    scanf("%lf",&e1.basicsalary);

    // Employee-2 input

    printf("\nEnter name of employee-2:\n");
    scanf(" %[^\n]s",e2.name); // space before identifier to avoid whitespace
    printf("Enter ID of employee-2:\n");
    scanf("%d",&e2.id);
    printf("Enter basic salary of employee-2:\n");
    scanf("%lf",&e2.basicsalary);

    // Employee-3 input

    printf("\nEnter name of employee-3:\n");
    scanf(" %[^\n]s",e3.name); // space before identifier to avoid whitespace
    printf("Enter ID of employee-3:\n");
    scanf("%d",&e3.id);
    printf("Enter basic salary of employee-3:\n");
    scanf("%lf",&e3.basicsalary);

    // Employee-1 output

    printf("\nEmployee-1 info:\n\n");
    printf("Name:\t\t%s\n",e1.name);
    printf("ID:\t\t%d\n",e1.id);
    printf("Basic Salary:\t%lf\n",e1.basicsalary);

    e1.grosssalary=e1.basicsalary+((0.1)*(e1.basicsalary))+((0.2)*(e1.basicsalary));

    printf("Gross Salary:\t%lf\n",e1.grosssalary);

    // Employee-2 output

    printf("\nEmployee-2 info:\n\n");
    printf("Name:\t\t%s\n",e2.name);
    printf("ID:\t\t%d\n",e2.id);
    printf("Basic Salary:\t%lf\n",e2.basicsalary);

    e2.grosssalary=e2.basicsalary+((0.1)*(e2.basicsalary))+((0.2)*(e2.basicsalary));

    printf("Gross Salary:\t%lf\n",e2.grosssalary);

    // Employee-3 output

    printf("\nEmployee-3 info:\n\n");
    printf("Name:\t\t%s\n",e3.name);
    printf("ID:\t\t%d\n",e3.id);
    printf("Basic Salary:\t%lf\n",e3.basicsalary);

    e3.grosssalary=e3.basicsalary+((0.1)*(e3.basicsalary))+((0.2)*(e3.basicsalary));

    printf("Gross Salary:\t%lf\n",e3.grosssalary);

    return 0;
}
