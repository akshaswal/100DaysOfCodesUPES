
#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    double radius, area, circumference;

    printf("Enter the radius of your circle: ");
    scanf("%lf", &radius);

    area = M_PI * radius * radius;
    circumference = 2 * M_PI * radius;

    printf("\nfor a circle with a radius of %.2f:\n", radius);
    printf(" -> The Area is %.2f\n", area);
    printf(" -> The Circumference is %.2f\n", circumference);

    return 0;
}