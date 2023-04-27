//Write a program to initialize the members of a structure
//by using a pointer to the structure
#include <stdio.h>

struct student
{
    int r_no;
    char name[20];
    char course[20];
    int fees;
};

int main()
{
    struct student stud1, *ptr_stud1;
    ptr_stud1 = &stud1;
    printf("\n Enter the details of the student: ");
    printf("\n Enter the roll number: ");
    scanf("%d", &ptr_stud1 ->r_no);     //this line refers to (*ptr_stud).roll_no;
                                        //but we use -> instead
    printf("\n Enter the name: ");
    scanf("%s", ptr_stud1 -> name);
    printf("\n Enter the course: ");
    scanf("%s", ptr_stud1 -> course);
    printf("\n Enter the fees: ");
    scanf("%d", &ptr_stud1 -> fees);

    printf("\n DETAILS OF THE STUDENT");
    printf("\n ROLL NUMBER: %d", ptr_stud1 -> r_no);
    printf("\n NAME: %s", ptr_stud1 -> name);
    printf("\n COURSE: %s", ptr_stud1 -> course);
    printf("\n FEES: %d", ptr_stud1 -> fees);

    return 0;
}