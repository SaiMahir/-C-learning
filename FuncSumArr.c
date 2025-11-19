#include<stdio.h>
int sum (int a[])
{
    int s=0,i;
    for (i=0;i<5;i++)
    s = s + a[i];
    return s;
}
 

int main()
{
    int a[5],i;

    printf("enter 5 values: ");

    for (i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("sum of all the numbers is: %d",sum(a));
    
    return 0;
}
    
