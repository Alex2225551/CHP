#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

void transpose(char matrix[MAX_ROWS][MAX_COLS], char transposed[MAX_COLS][MAX_ROWS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    char matrix[MAX_ROWS][MAX_COLS];
    char transposed[MAX_COLS][MAX_ROWS];
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter the matrix elements (single characters):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element[%d][%d]: ", i, j);
            scanf(" %c", &matrix[i][j]);
        }
    }

    transpose(matrix, transposed, rows, cols);

    printf("Transposed matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%c ", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}
