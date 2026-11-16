#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Initial pointer value: %p\n", (void *)ptr);

    ptr++;
    printf("After ptr++: %p, Value: %d\n", (void *)ptr, *ptr);

    ptr--;
    printf("After ptr--: %p, Value: %d\n", (void *)ptr, *ptr);

    ptr = ptr + 2;
    printf("After ptr + 2: %p, Value: %d\n", (void *)ptr, *ptr);

    ptr = ptr - 1;
    printf("After ptr - 1: %p, Value: %d\n", (void *)ptr, *ptr);

    return 0;
}