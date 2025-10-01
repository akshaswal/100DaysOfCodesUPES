#include <stdio.h>

int main() {
    int rows = 5;

    for(int i = 1; i <= rows; i++) {
        // print leading spaces
        for(int space = 1; space <= rows - i; space++) {
            printf("  ");  // double space for proper alignment
        }
        // print numbers
        for(int num = rows - i + 1; num <= rows; num++) {
            printf("%d ", num);
        }
        printf("\n");
    }

    return 0;
}
