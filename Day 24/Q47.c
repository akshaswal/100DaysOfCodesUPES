#include <stdio.h>

int main() {
    int rows = 5;  // number of rows

    for(int i = 1; i <= rows; i++) {      // loop for rows
        for(int j = 1; j <= i; j++) {     // loop for columns
            printf("*");
        }
        printf("\n");  // move to next line after each row
    }

    return 0;
}
