#include <stdio.h>

void update_pointer(int **ptr, int *new_address) {
    *ptr = new_address;
}

int main() {
    int first, second;
    int *ptr;

    printf("Enter the first integer: ");
    scanf("%d", &first);

    printf("Enter the second integer: ");
    scanf("%d", &second);

    ptr = &first;

    printf("\nBefore modifying the pointer:\n");
    printf("Value pointed to by ptr: %d\n", *ptr);
    printf("Address stored in ptr: %p\n", (void *)ptr);

    update_pointer(&ptr, &second);

    printf("\nAfter modifying the pointer:\n");
    printf("Value pointed to by ptr: %d\n", *ptr);
    printf("Address stored in ptr: %p\n", (void *)ptr);

    return 0;
}