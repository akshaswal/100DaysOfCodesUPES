#include <stdio.h>

int main() {
    int rows = 5;

    for(int i = rows; i >= 1; i--) {          // starting number for each row
        for(int j = i; j <= rows; j++) {      // print numbers from i to 5
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
