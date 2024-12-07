#include <stdio.h>
#include <stdbool.h>

// Function to find the transpose of a matrix
void transpose(int mat[][3], int trans[][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            trans[j][i] = mat[i][j];
        }
    }
}

// Function to check if a matrix is symmetric
bool isSymmetric(int mat[][3], int trans[][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] != trans[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int mat[3][3] = {
        {1, 2, 3},
        {2, 1, 4},
        {3, 4, 1}
    };

    int trans[3][3];
    int n = 3; // Size of the square matrix

    // Find the transpose of the matrix
    transpose(mat, trans, n);

    // Check if the matrix is symmetric
    if (isSymmetric(mat, trans, n)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
