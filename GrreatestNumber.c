#include <stdio.h>

int main()
{
   int a,b,c,d,max;
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);
    printf("Enter the third integer: ");
    scanf("%d", &c);
    printf("Enter the fourth integer: ");
    scanf("%d", &d);
   
   if (a >= b && a >= c && a >= d) {
        printf("Greatest: %d\n", a);
    }
    else if (b >= a && b >= c && b >= d) {
        printf("Greatest: %d\n", b);
    }
    else if (c >= a && c >= b && c >= d) {
        printf("Greatest: %d\n", c);
    }
    else {
        printf("Greatest: %d\n", d);
    }

    return 0;
}