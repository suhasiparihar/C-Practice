#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 3, cols = 3;
    
    // Allocate memory for 2D array
    int *matrix = (int *)malloc(rows * cols * sizeof(int));
    if (matrix == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    // Assign values to the 2D array
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            *(matrix + i * cols + j) = i * cols + j; // Example initialization

            printf("matrix: %u\t i: %d\t cols: %d\t j: %d\t\n",matrix,i,cols,j);
            printf("\n%u\n",(matrix + i * cols + j));
        }
        printf("\n");
    }
    
    // Print the 2D array
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", *(matrix + i * cols + j));
        }
        printf("\n");
    }
    
    // Free allocated memory
    free(matrix);
    
    return 0;
}
