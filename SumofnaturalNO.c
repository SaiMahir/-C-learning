#include<stdio.h>
int sum(int);

int main()
   {
   	   int n;
   	   printf("\n Enter number of terms to add all natural numbers:");
   	   scanf("%d", &n);
   	   printf("\n Sum of natural numbers : %d", sum(n));
   	   return 0;
    }
    
  int sum(int x)
     {
     	if(x==1)
     	   return 1;
     	else
     	   return x + sum(x-1);
	 }