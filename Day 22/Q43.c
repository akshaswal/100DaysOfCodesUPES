#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    n = num;  // keep original number

    while(n != 0) {
        int digit = n % 10;
        sum += factorial(digit);
        n /= 10;
    }

    if(sum == num)
        printf("%d is a Strong number.\n", num);
    else
        printf("%d is NOT a Strong number.\n", num);

    return 0;
}
