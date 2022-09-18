#include <stdio.h>

struct student
{
    char name[50];
    int roll;
    float mark;
} stud ;



int main()
{
    printf("Enter information of the student \n");
    printf("Enter the name : ");
    scanf("%s",&stud.name);
    printf("\n Enter the roll : ");
    scanf("%d",&stud.roll);
    printf("\n Enter the mark : ");
    scanf("%f",&stud.mark);

    printf("\n displaying information \n");
    printf("\n the name %s",stud.name);
    printf("\n the roll %d",stud.roll);
    printf("\n the mark %f",stud.mark);


    return;
}
