// WAP TO merge string2 after string1
#include<stdio.h>
int main()
  {
  	char str1[20], str2[10];
   	int i, l=0;
  	printf("\n Enter first string:");
  	scanf("%s", str1);
  	
  	printf("\n Enter second string:");
  	scanf("%s", str2);
  	
  	for(i=0 ; str1[i] != '\0'; i++)
  	    l++;
  	     
  	for(i=0;str2[i] != '\0'; i++)
  	   {
  	         str1[l] = str2[i];
			 l++;	
	   }
	   
    str1[l] = '\0';
    
    printf("\n Str1 = %s", str1);
    
  	 	    
  	
  	return 0;
  }