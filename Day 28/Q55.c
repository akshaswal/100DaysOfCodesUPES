#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for(i = 2; i <= n; i++) {       // start from 2, as 1 is not prime
        isPrime = 1;                // assume i is prime

        // check if i is divisible by any number from 2 to sqrt(i)
        for(j = 2; j*j <= i; j++) {
            if(i % j == 0) {
                isPrime = 0;       // i is not prime
                break;
            }
        }

        if(isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
