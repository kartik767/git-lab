#include <stdio.h>

int main() {
    int a, b, result;

    // Taking first input
    printf("Enter first number: ");
    if (scanf("%d", &a) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    // Taking second input
    printf("Enter second number: ");
    if (scanf("%d", &b) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    // Performing multiplication
    result = a * b;

    // Display result
    printf("Multiplication = %d\n", result);

    return 0;
}
