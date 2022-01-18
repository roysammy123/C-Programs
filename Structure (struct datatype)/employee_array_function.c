// Program to take info of 3 employees using array in structure and display their info using function

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

void empinfodisplay(employee *x)
{
    // Employee-1 output

    printf("\nEmployee-1 info:\n\n");
    printf("Name:\t\t%s\n",(*x).name);
    printf("ID:\t\t%d\n",(*x).id);
    printf("Basic Salary:\t%lf\n",(*x).basicsalary);

    (*x).grosssalary=(*x).basicsalary+((0.1)*((*x).basicsalary))+((0.2)*((*x).basicsalary));

    printf("Gross Salary:\t%lf\n",(*x).grosssalary);

    // Employee-2 output

    printf("\nEmployee-2 info:\n\n");
    printf("Name:\t\t%s\n",(*(x+1)).name);
    printf("ID:\t\t%d\n",(*(x+1)).id);
    printf("Basic Salary:\t%lf\n",(*(x+1)).basicsalary);

    (*(x+1)).grosssalary=(*(x+1)).basicsalary+((0.1)*((*(x+1)).basicsalary))+((0.2)*((*(x+1)).basicsalary));

    printf("Gross Salary:\t%lf\n",(*(x+1)).grosssalary);

    // Employee-3 output

    printf("\nEmployee-3 info:\n\n");
    printf("Name:\t\t%s\n",(*(x+2)).name);
    printf("ID:\t\t%d\n",(*(x+2)).id);
    printf("Basic Salary:\t%lf\n",(*(x+2)).basicsalary);

    (*(x+2)).grosssalary=(*(x+2)).basicsalary+((0.1)*((*(x+2)).basicsalary))+((0.2)*((*(x+2)).basicsalary));

    printf("Gross Salary:\t%lf\n",(*(x+2)).grosssalary);
}

int main()
{
    employee e[3];

    // Employee-1 input 

    printf("Enter name of employee-1:\n");
    scanf(" %[^\n]s",e[0].name); // space before identifier to avoid whitespace
    printf("Enter ID of employee-1:\n");
    scanf("%d",&e[0].id);
    printf("Enter basic salary of employee-1:\n");
    scanf("%lf",&e[0].basicsalary);

    // Employee-2 input

    printf("\nEnter name of employee-2:\n");
    scanf(" %[^\n]s",e[1].name); // space before identifier to avoid whitespace
    printf("Enter ID of employee-2:\n");
    scanf("%d",&e[1].id);
    printf("Enter basic salary of employee-2:\n");
    scanf("%lf",&e[1].basicsalary);

    // Employee-3 input

    printf("\nEnter name of employee-3:\n");
    scanf(" %[^\n]s",e[2].name); // space before identifier to avoid whitespace
    printf("Enter ID of employee-3:\n");
    scanf("%d",&e[2].id);
    printf("Enter basic salary of employee-3:\n");
    scanf("%lf",&e[2].basicsalary);

    empinfodisplay(&e[0]);

    return 0;
}
