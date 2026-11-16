#include <stdio.h>

int main() {
    int x = 25;
    int *p = &x;
    int **q = &p;

    printf("Initial value of x: %d\n", x);

    *p = 40;
    printf("After *p = 40, value of x: %d\n", x);
    printf("Value using **q: %d\n", **q);

    **q = 75;
    printf("After **q = 75, value of x: %d\n", x);
    printf("Value using *p: %d\n", *p);

    return 0;
}