#include <stdio.h>

// Function to multiply two matrices
void multiplyMatrices(int firstMatrix[][3], int secondMatrix[][3], int result[][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n = 3; // Size of the square matrices

    int firstMatrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int secondMatrix[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int result[3][3];

    // Multiply the matrices
    multiplyMatrices(firstMatrix, secondMatrix, result, n);

    // Display the result
    printf("Resultant matrix:\n");
    displayMatrix(result, n);

    return 0;
}
