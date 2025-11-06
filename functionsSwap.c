#include <stdio.h>

void swap(int a, int b )
{   int temp = a;
    a = b;
    b = temp;
    printf("after the change %d and %d",a,b);
}

int main()
{   
    int x, y;
    
    printf("enter the first number: ");
    scanf("%d",&x);
    printf("enter the second number: ");
    scanf("%d",&y);
    
        printf("before the change %d and %d \n",x,y);
            swap(x,y);
    
    return 0;
}