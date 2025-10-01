#include <stdio.h>

int main() {
    int rows = 5;

    for(int i = 0; i < rows; i++) {           // loop for each row
        // print leading spaces
        for(int j = 0; j < i; j++) {
            printf(" ");
        }
        // print stars
        for(int k = 0; k < rows - i; k++) {
            printf("*");
        }
        printf("\n");  // move to next line
    }

    return 0;
}
