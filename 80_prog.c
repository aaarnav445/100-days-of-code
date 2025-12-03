//Program to multiply two matrices.
#include <stdio.h>
int main() {
    int rows1, cols1, rows2, cols2, i, j, k;
    printf("Enter number of rows and columns for the first matrix: ");  
    scanf("%d %d", &rows1, &cols1);
    printf("Enter number of rows and columns for the second matrix: ");  
    scanf("%d %d", &rows2, &cols2);
    // Check if multiplication is possible
    if(cols1 != rows2) {
        printf("Matrix multiplication not possible with the given dimensions.\n");
        return 1;
    }
    int matrix1[rows1][cols1];
    int matrix2[rows2][cols2];
    int product[rows1][cols2];
    // Reading the first matrix elements
    printf("Enter elements of the first matrix:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }       
    // Reading the second matrix elements
    printf("Enter elements of the second matrix:\n");
    for(i = 0; i < rows2; i++) {
        for(j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    // Initializing the product matrix to zero
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols2; j++) {
            product[i][j] = 0;
        }
    }
    // Performing matrix multiplication 
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols2; j++) {
            for(k = 0; k < cols1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    // Printing the product matrix
    printf("The product of the two matrices is:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}