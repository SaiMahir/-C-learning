#include<stdio.h>
int main()
   {
   	  int a[5]={1,2,3,4,5},i;
//   	  printf("\n Enter 5 elements:");
//   	  for(i=0;i<5;i++)
//   	     scanf("%d", &a[i]);
    	  
   	  for(i=0;i<5;i++)
   	     {
			
   	     printf("\nValue of %d position is %d", i, a[i]);
   	     printf("\n Address of %d position is %u", i, &a[i]);
   	     }
   	 
   	  return 0;
   }