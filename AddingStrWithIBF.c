#include<stdio.h>
int main()
{
    char a[20],b[30];

    printf("enter your name:");
    fgets(a,20,stdin);

    printf("enter your age: ");
    fgets(b, 10 ,stdin);

    strcat(a,b);
    printf("%s",a);

    return 0;
}