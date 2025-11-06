#include <stdio.h>
void max(int*,int*,int*,int*);

int main() {
    int a=40, b=20, c=30;
    int m;
    max(&a,&b,&c,&m);
    printf("\nGreatest element in %d %d %d is %d",a,b,c,m);
    return 0;
}

void max(int *x, int *y, int *z,int *m) {
    
    if(*x > *y && *x > *z)
        *m = *x;
    else if(*y > *x && *y > *z)
        *m = *y;
    else 
        *m = *z;
    
}