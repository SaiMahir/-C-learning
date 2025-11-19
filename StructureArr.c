#include<stdio.h>
struct student
{
    int rollno;
    char name[30];
    int marks;
};

int main()
{
    struct student s[5];
    for(int i=0;i<5;i++)
    {
    printf("enter rollno , name , marks: ");
    scanf("%d%s%d",&s[i].rollno,s[i].name,&s[i].marks);
    }
    for(int i=0;i<5;i++)
    {
    printf("rollno: %d\n name: %s\n marks: %d\n",s[i].rollno,s[i].name,s[i].marks);
    }
    return 0;
}