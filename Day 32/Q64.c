#include <stdio.h>

int main() {
    long num;
    int count[10] = {0};
    int maxCount = 0, maxDigit = 0;

    printf("Enter an integer number: ");
    scanf("%ld", &num);

    if(num < 0) num = -num;


    while(num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }


    for(int i = 0; i < 10; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit that occurs the most: %d (occurs %d times)\n", maxDigit, maxCount);

    return 0;
}
