#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[20];

    printf("enter string 1:");
    gets(a);

    strcpy(b,a);

    printf("string 2 is: %s",b);

    return 0;
}