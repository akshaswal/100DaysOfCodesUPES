#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    int n = num;  // keep original number safe for printing

    while(n != 0) {
        remainder = n % 10;  // get last digit
        sum += remainder;    // add it to sum
        n /= 10;             // remove last digit
    }

    printf("Sum of digits of %d is: %d\n", num, sum);

    return 0;
}
