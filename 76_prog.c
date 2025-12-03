//Program to check if a matrix is symmetric.
#include <stdio.h>
int main() {
    int n, i, j, isSymmetric = 1;
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    // Reading the matrix elements
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Checking for symmetry
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if(!isSymmetric) {
            break;
        }
    }
    if(isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }
    return 0;
}