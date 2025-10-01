#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;   // use long long to handle big results
    int hasEven = 0;         // flag to check if any even number exists

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are:\n", n);

    for(i = 2; i <= n; i += 2) {   // loop through even numbers only
        printf("%d ", i);
        product *= i;
        hasEven = 1;  // at least one even number found
    }

    if(hasEven)
        printf("\nProduct of even numbers = %lld\n", product);
    else
        printf("\nNo even numbers found in the range.\n");

    return 0;
}