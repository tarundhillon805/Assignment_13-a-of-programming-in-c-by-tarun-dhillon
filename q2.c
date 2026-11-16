#include <stdio.h>

int main() {
    int number;
    int *ptr;

    printf("Enter an integer: ");
    scanf("%d", &number);

    ptr = &number;

    printf("\nOriginal value: %d\n", number);

    *ptr = *ptr + 10;

    printf("Modified value after increasing by 10: %d\n", number);

    return 0;
}