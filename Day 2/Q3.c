
#include <stdio.h>

int main() {
    float length, breadth;

    printf("Enter the rectangle's length: ");
    scanf("%f", &length);

    printf("Enter the rectangle's breadth: ");
    scanf("%f", &breadth);

    float area = length * breadth;
    float perimeter = 2 * (length + breadth);

    printf("\nArea: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}