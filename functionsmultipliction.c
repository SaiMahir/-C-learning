#include <stdio.h>

int multipliedSum(int a,int b)
{ 
        int sum =  a *  b;
        printf("%d",sum);
        
        return sum;
}
 
int main()
{   
    int x,y,sum;
    
    printf("enter the first number: ");
    scanf("%d",&x);
    printf("enter the second number: ");
    scanf("%d",&y);
    
        multipliedSum(x,y);
    
    return 0;
}
