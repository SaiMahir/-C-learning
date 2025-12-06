#include<stdio.h>
struct student
{
    int rollno;
    char name[30];
    int marks;
};

int main()
{
    struct student s1;
    printf("enter rollno , name , marks: ");
    scanf("%d%s%d",&s1.rollno,s1.name,&s1.marks);
    printf("rollno: %d\n name: %s\n marks: %d",s1.rollno,s1.name,s1.marks);
    struct student s2;
    printf("\n enter rollno , name , marks: ");
    scanf("%d%s%d",&s2.rollno,s2.name,&s2.marks);
    printf("rollno: %d\n name: %s\n marks: %d",s2.rollno,s2.name,s2.marks);
    return 0;
} 