#include <stdio.h>

int main() {
    int n = 5;  // number of rows for the upper half (maximum stars = 2*n-1)

    // Upper half
    for(int i = 1; i <= n; i++) {
        int stars = 2*i - 1;
        for(int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for(int i = n-1; i >= 1; i--) {
        int stars = 2*i - 1;
        for(int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
