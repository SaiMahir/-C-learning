#include<stdio.h>
int main()
{
    int i,j,t,a[5];
    printf("enter 5 values: ");
 
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);

    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i-1;j++)
        {
            if (a[j]>a[j+1])
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t; 
            }
        }
    }
    for(i=0;i<5;i++)
    printf("%d ",a[i]);
    return 0;
}