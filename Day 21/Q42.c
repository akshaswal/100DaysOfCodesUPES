#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 0) {
        printf("Enter a positive number.\n");
        return 0;
    }

    // Find sum of divisors
    for(int i = 1; i <= num / 2; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }

    // Check if perfect
    if(sum == num)
        printf("%d is a Perfect number.\n", num);
    else
        printf("%d is NOT a Perfect number.\n", num);

    return 0;
}