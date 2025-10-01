
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter a temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("\nConversion Of %.1f C is %.1f F\n", celsius, fahrenheit);

    return 0;
}