#include <stdio.h>

int square(int a)
{ 
        int sum =  a *  a;
        printf("%d",sum);
        
        return sum;
}

int main() 
{   
    int x,sum;
    
    printf("enter the first number: ");
    scanf("%d",&x);
    
        square(x);
    
    return 0;
}