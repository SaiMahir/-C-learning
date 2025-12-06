#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,*arr,max=0;

    printf("enter the number of digits you want to store");
    scanf("%d",&n);

    arr=(int*)malloc(sizeof(int)*10);

    printf("enter the values: ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++) 
    {
        if(arr[i]>max) 
        {
            max=arr[i];
        }
    } 

    printf("The maximum value is %d",max);

return 0;
}
