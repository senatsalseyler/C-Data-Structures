// Write a program that passes a pointer to a structure to a function.
#include <stdio.h>
#include <malloc.h>

struct student
{
    int r_no;
    char name[20];
    char course[20];
    int fees;
};

void display(struct student *ptr)
{
    printf("\n DETAILS OF STUDENT: ");
    printf("\n ROLL NO. = %d", ptr -> r_no);
    printf("\n NAME = %s", ptr -> name);
    printf("\n COURSE = %s", ptr -> course);
    printf("\n FEES = %d", ptr -> fees);

}

int main()
{
    struct student *ptr;
    ptr = (struct student *)malloc(sizeof(struct student));
    printf("\n Enter the data for the student: ");
    printf("\n ROLL NO.: ");
    scanf("%d", &ptr -> r_no);
    printf("\n NAME: ");
    scanf("%s", ptr -> name);
    printf("\n COURSE: ");
    scanf("%s", ptr -> course);
    printf("\n FEES: ");
    scanf("%d", &ptr -> fees);

    display(ptr);

    return 0;
}