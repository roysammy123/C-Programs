// Program to collect student info using struct and display it

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct
{
    int roll;
    char name[20];
    float cgpa;
} student;

int main()
{
    student s;

    // Student info input

    printf("Enter name of the student:\n");
    scanf("%[^\n]s",s.name);
    printf("Enter roll number of the student:\n");
    scanf("%d",&s.roll);
    printf("Enter CGPA of the student:\n");
    scanf("%f",&s.cgpa);

    // Student info output

    printf("\nStudent info:\n\n");
    printf("Student name:\t%s\n",s.name);
    printf("Roll Number:\t%d\n",s.roll);
    printf("CGPA:\t\t%3.1f\n",s.cgpa);

    return 0;
}