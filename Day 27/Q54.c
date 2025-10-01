#include <stdio.h>

int main() {
    int n = 4; // number of rows in the upper half (including middle row)

    // Upper half (including middle row)
    for(int i = 1; i <= n; i++) {
        // print leading spaces
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // print stars (odd numbers: 1, 3, 5, 7 ...)
        for(int j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for(int i = n-1; i >= 1; i--) {
        // print leading spaces
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // print stars
        for(int j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
