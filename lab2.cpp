#include <stdio.h>

#define MAX_SIZE 100

void transpose(int mat[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    int transposed[MAX_SIZE][MAX_SIZE];
    
  
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposed[j][i] = mat[i][j];
        }
    }
    
   
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    
    
    printf("Enter number of rows and columns of matrix: ");
    scanf("%d %d", &rows, &cols);
    
 
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &mat[i][j]);
        }
    }
    
  
    transpose(mat, rows, cols);
    
    return 0;
}
