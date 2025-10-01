#include <stdio.h>
#include <string.h>

int main() {
    char binary[100], onesComplement[100];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    int length = strlen(binary);

    // Calculate 1's complement
    for(int i = 0; i < length; i++) {
        if(binary[i] == '0')
            onesComplement[i] = '1';
        else if(binary[i] == '1')
            onesComplement[i] = '0';
        else {
            printf("Invalid binary number!\n");
            return 0;
        }
    }

    onesComplement[length] = '\0'; // null-terminate the string

    printf("1's complement of %s is: %s\n", binary, onesComplement);

    return 0;
}
