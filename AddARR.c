#include<stdio.h>
int main()
{ 
	int a[5],b[5],i;

	printf("enter 5 values: ");

	for (i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Enter an other 5 values:");

	for (i=0; i<5; i++)
	{
		scanf("%d",&b[i]);
	}

    printf("the addition of two arrays is:");

    for (i=0;i,i<5;i++)
    {
        printf("%d ", a[i] + b[i]);
    }
	return 0;
}