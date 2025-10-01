#include <stdio.h>

int main() {
    int a, b, tempA, tempB, hcf;
    long long lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    // Find HCF using Euclid's algorithm
    while(tempB != 0) {
        int remainder = tempA % tempB;
        tempA = tempB;
        tempB = remainder;
    }

    hcf = tempA;

    // Calculate LCM
    lcm = (long long)(a * b) / hcf;

    printf("LCM of %d and %d is: %lld\n", a, b, lcm);

    return 0;
}
