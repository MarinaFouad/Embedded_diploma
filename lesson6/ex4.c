#include <stdio.h>

struct student
{
    char name[50];
    int roll;
    float mark;
} stud[10] ;

int main()
{   int count = 0 ;
    printf("Enter information of the student \n");

    for (int i=0 ; i<=9 ; i++)
    {
    stud[i].roll=i+1;
    printf("for roll number %d \n ",stud[i].roll);
    printf("Enter the name : ");
    scanf("%s",&stud[i].name);
    printf("\n Enter the mark : ");
    scanf("%f",&stud[i].mark);
    }

    for (int i=0 ; i<=9 ; i++)
    {
    printf("\n displaying information \n");
    printf("for roll number %d \n ",stud[i].roll);
    printf("the name: %s ",stud[i].name);
    printf("the mark : %f",stud[i].mark);
    }
    return;
}
