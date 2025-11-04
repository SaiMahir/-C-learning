#include <stdio.h>

int main() {
    int A;

    printf("Enter a number: ");
    scanf("%d", &A);

    if (A > 0) {
        printf("%d is a positive number.", A);
    }
    else if (A < 0) {
        printf("%d is a negative number.", A);
    }
    else {
        printf("You entered 0.");
    }

    return 0; 
}