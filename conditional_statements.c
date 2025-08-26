#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("The number is positive.\n");
    }

    if (number % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    if (number > 0) {
        printf("The number is greater than zero.\n");
    } else if (number == 0) {
        printf("The number is zero.\n");
    } else {
        printf("The number is less than zero.\n");
    }

    return 0;
}
