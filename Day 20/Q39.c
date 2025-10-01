#include <stdio.h>

int main() {
    int num, remainder;
    long long product = 1;
    int hasOdd = 0;  // flag to check if there is any odd digit

    printf("Enter a number: ");
    scanf("%d", &num);

    int n = num;  // keep original number for printing

    while(n != 0) {
        remainder = n % 10;      // get last digit
        if(remainder % 2 != 0) { // check if it is odd
            product *= remainder;
            hasOdd = 1;
        }
        n /= 10;                  // remove last digit
    }

    if(hasOdd)
        printf("Product of odd digits of %d is: %lld\n", num, product);
    else
        printf("No odd digits found in %d\n", num);

    return 0;
}
