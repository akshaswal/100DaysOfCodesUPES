#include <stdio.h>
#include <math.h>

int main() {
    int num, original, firstDigit, lastDigit, digits, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    lastDigit = num % 10;

    // Find number of digits
    digits = (int)log10(num);

    // Find first digit
    firstDigit = num / pow(10, digits);

    // Remove first and last digits from original number
    int middle = num % (int)pow(10, digits);  // remove first digit
    middle = middle / 10;                     // remove last digit

    // Construct swapped number
    swappedNum = lastDigit * pow(10, digits) + middle * 10 + firstDigit;

    printf("Number after swapping first and last digit of %d is: %d\n", original, swappedNum);

    return 0;
}
