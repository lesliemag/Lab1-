#include <stdio.h>

int main() {
    int given_number;

    // prompt for input
    printf("Enter an integer: ");
    scanf("%d", & given_number);

    // check for even or odd
    if (given_number % 2 == 0) {
        printf("The number is an even number.\n");
    } else {
        printf("The number is an odd number.\n");
    }

    return 0;
}
