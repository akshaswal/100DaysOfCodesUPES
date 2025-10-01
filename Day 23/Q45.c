#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    int numerator = 2;
    int denominator = 3;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;

        // update numerator and denominator for next term
        numerator += 2;      // 2, 4, 6, 8 ...
        denominator += 4;    // 3, 7, 11, 15 ...
    }

    printf("Sum of the series up to %d terms is: %.4lf\n", n, sum);

    return 0;
}