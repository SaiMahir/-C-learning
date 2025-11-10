#include<stdio.h>
int main()
{
    int a[5],i;

    printf("enter 5 numbers:");

    for (i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
 
    printf("the even no's are: ");

    for (i=0;i<5;i++)
    {
        if (a[i]%2==0)
        printf("%d ",a[i]);
    }
    return 0;
}