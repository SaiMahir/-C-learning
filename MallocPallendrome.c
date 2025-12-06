#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{   int n,i,*arr;
    char str[n];

    printf("enter the length of the string:");
    scanf("%d",&n);

    arr=(int*)malloc(sizeof(int)*10);

    printf("enter the string: ");
    scanf("%s",str);

    for (i=0;i<n;i++) 
    {
        if (str[i]!=str[n-i-1])
        {
            printf("The string is not a pallendrome");
            return 0;
        }
        else {
            printf("The string is a pallendrome");
            return 0;
        }
    }



}