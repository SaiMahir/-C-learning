#include<stdio.h>
int main()
   {
   	  int a[5],i,max;
   	  printf("\n Enter 5 elements:");
   	  for(i=0;i<5;i++)
   	     scanf("%d", &a[i]);
   	   
   	  max = a[0];
   	  for(i=0;i<5;i++)
   	     {
		    if(max < a[i])
			   max = a[i];	
   	     }
   	 printf("\n Greatest element of Array=%d", max);
   	  return 0;
   }