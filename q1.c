#include <stdio.h>

int main() {
    int number;
    int *ptr;

    printf("Enter an integer: ");
    scanf("%d", &number);

    ptr = &number;

    printf("\nValue of variable: %d\n", number);
    printf("Address of variable: %p\n", (void *)&number);
    printf("Value stored in pointer: %p\n", (void *)ptr);
    printf("Dereferenced value: %d\n", *ptr);

    return 0;
}