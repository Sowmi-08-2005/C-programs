#include <stdio.h>

int main() {
   
    int integer = 25;
    float decimal = 12.34f;
    double bigDecimal = 12345.6789;
    char character = 'A';

    printf("Integer value: %d\n", integer);
    printf("Float value: %.2f\n", decimal);
    printf("Double value: %.4lf\n", bigDecimal);
    printf("Character value: %c\n", character);
    printf("\n--- Size of Data Types (in bytes) ---\n");
    printf("Size of int: %zu\n", sizeof(int));
    printf("Size of float: %zu\n", sizeof(float));
    printf("Size of double: %zu\n", sizeof(double));
    printf("Size of char: %zu\n", sizeof(char));

    return 0;
}
