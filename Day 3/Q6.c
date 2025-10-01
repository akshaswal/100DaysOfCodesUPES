
#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("Enter first numbers: ");
    scanf("%d",&num1);
    
    printf("Enter second numbers: ");
    scanf("%d",&num2);

    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("Before swap: %d %d\n", num2, num1);
    printf("After swap: %d %d\n", num1, num2);

    return 0;
}