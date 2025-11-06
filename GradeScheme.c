#include <stdio.h>

int main()
{
    int a;
    printf("enter the no.of marks obtained: ");
    scanf("%d", &a);
    
    if (a<0 || a>100) 
    {
        printf("wrong entry");
    }
    else if (a<50)
    {
        printf("F");
    }
    else if (a<75 && a>50)
    {
        printf("C");
    }
    else if (a<90 && a>75)
    {
        printf("B");
    }
    else 
    printf("A");
     
    return 0;
}

