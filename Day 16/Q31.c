#include <stdio.h>

int main() {
    int num;
    int binary[32];  // to store binary digits (32-bit integer max)
    int i = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    int n = num;  // keep original number safe for printing

    while(n > 0) {
        binary[i] = n % 2;  // remainder (0 or 1)
        n = n / 2;          // divide by 2
        i++;
    }

    printf("Binary representation of %d is: ", num);
    for(int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
