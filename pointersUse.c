
#include <stdio.h>
int main()
{
	int i = 3,*ptr;
	ptr = &i;

	printf("the address of i is %u \n",ptr); //address in decimal format when we use %u
	printf("the address of i is %p \n",ptr); //address in hexadecimal format when we use %p
	printf ("value of this address is %d",*ptr);

	return 0;
}