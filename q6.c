#include <stdio.h>

void count_elements(int rows, int cols, int matrix[rows][cols],
                    int *positive, int *negative,
                    int *zero, int *even) {
    *positive = 0;
    *negative = 0;
    *zero = 0;
    *even = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int value = *(*(matrix + i) + j);

            if (value > 0)
                (*positive)++;
            else if (value < 0)
                (*negative)++;
            else
                (*zero)++;

            if (value % 2 == 0)
                (*even)++;
        }
    }
}

int main() {
    int rows, cols;
    int positive, negative, zero, even;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", *(matrix + i) + j);
        }
    }

    count_elements(rows, cols, matrix,
                   &positive, &negative, &zero, &even);

    printf("\nPositive elements: %d\n", positive);
    printf("Negative elements: %d\n", negative);
    printf("Zero elements: %d\n", zero);
    printf("Even elements: %d\n", even);

    return 0;
}