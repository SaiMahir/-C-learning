
#include<stdio.h>
int main()

  {
  	char str[10];
  	int i, l=0;
  	printf("\n Enter your name:");
  	scanf("%s", str);
  	
  	for(i=0 ; str[i] != '\0'; i++)
  	    l++;
  	printf("\n Length of given string: %d \n ", l);
  	
  	printf("\n Reverse of given string:\n");
  	    
  	for(i=l-1 ; i>=0; i--)
  	    printf("%c", str[i]);
  	    
  	return 0;
  }  