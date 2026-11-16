#include <stdio.h>

int main() {
    int number;
    int *ptr;
    int **ptr_to_ptr;

    printf("Enter an integer: ");
    scanf("%d", &number);

    ptr = &number;
    ptr_to_ptr = &ptr;

    printf("\nValue of number: %d\n", number);
    printf("Using *ptr: %d\n", *ptr);
    printf("Using **ptr_to_ptr: %d\n", **ptr_to_ptr);

    printf("\nAddress of number: %p\n", (void *)&number);
    printf("Address stored in ptr: %p\n", (void *)ptr);
    printf("Address of ptr: %p\n", (void *)&ptr);
    printf("Address stored in ptr_to_ptr: %p\n", (void *)ptr_to_ptr);

    return 0;
}