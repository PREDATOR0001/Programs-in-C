#include <stdio.h>

// Function to add diagonal elements of two square matrices
void addDiagonalElements(int mat1[][3], int mat2[][3], int n) {
    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < n; i++) {
        sum1 += mat1[i][i];
        sum2 += mat2[i][i];
    }

    printf("Sum of diagonal elements of first matrix: %d\n", sum1);
    printf("Sum of diagonal elements of second matrix: %d\n", sum2);
    printf("Total sum of diagonal elements: %d\n", sum1 + sum2);
}

int main() {
    int mat1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int mat2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int n = 3; // Size of the square matrices

    addDiagonalElements(mat1, mat2, n);

    return 0;
}
