//Program to find the sum of main diagonal elements for a square matrix.
#include <stdio.h>
int main() {
    int n, i, j, sum = 0;
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
    // Calculating the sum of main diagonal elements
    for(i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    printf("The sum of the main diagonal elements is: %d\n", sum);
    return 0;
}