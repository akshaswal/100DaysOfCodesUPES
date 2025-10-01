#include <stdio.h>

int main() {
    int rows = 5;  // number of rows
    int cols = 5;  // number of columns

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= cols; j++) {
            printf("*");
        }
        printf("\n");  // move to next line after each row
    }

    return 0;
}
