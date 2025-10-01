#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    if(rows != cols) {
        printf("Matrix is not square, so diagonal elements cannot be checked.\n");
        return 0;
    }
    int matrix[rows][cols];
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int distinct = 1;
    for(int i = 0; i < rows; i++) {
        for(int j = i + 1; j < rows; j++) {
            if(matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }
        if(!distinct) break;
    }
    if(distinct) {
        printf("All diagonal elements are distinct.\n");
    } else {
        printf("Diagonal elements are not distinct.\n");
    }
    return 0;
}
