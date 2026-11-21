//Q79>.perform diagonal traversal of a matrix.//
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int mat[100][100]; // Fixed size array (easy for beginners)

    // 1. Read the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // 2. Print diagonally using sum of indices (d = i + j)
    for (int d = 0; d < rows + cols - 1; d++) {
        
        if (d % 2 == 0) {
            // Even diagonals go UP-RIGHT (rows go from bottom to top)
            for (int i = rows - 1; i >= 0; i--) {
                for (int j = 0; j < cols; j++) {
                    if (i + j == d) {
                        printf("%d ", mat[i][j]);
                    }
                }
            }
        } else {
            // Odd diagonals go DOWN-LEFT (rows go from top to bottom)
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    if (i + j == d) {
                        printf("%d ", mat[i][j]);
                    }
                }
            }
        }
        
    }

    return 0;
}