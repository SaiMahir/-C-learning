#include<stdio.h>
int main()
{
    int a,b,c;
    
    a=10;
    b=20;
    
    a= ++a + b++;
    b= ++b + a++;
    c= a + b;
    
        printf("%d %d %d" , a, b, c);
        
    return 0;
    
}