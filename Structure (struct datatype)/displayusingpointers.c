// Program to collect student info using struct and display it using pointer

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct
{
    int roll;
    char name[20];
    float cgpa;
} student;

void pointerdisplay(student *x)
{
    printf("\nStudent info:\n\n");
    printf("Student name:\t%s\n",(*x).name);
    printf("Roll Number:\t%d\n",(*x).roll);
    printf("CGPA:\t\t%3.1f\n",(*x).cgpa);
}

int main()
{
    student s;
    printf("Enter name of the student:\n");
    scanf("%[^\n]s",s.name);
    printf("Enter roll number of the student:\n");
    scanf("%d",&s.roll);
    printf("Enter CGPA of the student:\n");
    scanf("%f",&s.cgpa);

    printf("\n");

    pointerdisplay(&s);

    return 0;
}