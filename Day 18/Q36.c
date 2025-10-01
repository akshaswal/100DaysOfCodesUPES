#include <stdio.h>

int main() {
    int a, b, tempA, tempB, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    // Euclid's algorithm
    while(tempB != 0) {
        int remainder = tempA % tempB;
        tempA = tempB;
        tempB = remainder;
    }

    hcf = tempA;
    printf("HCF/GCD of %d and %d is: %d\n", a, b, hcf);

    return 0;
}
