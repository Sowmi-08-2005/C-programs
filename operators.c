#include <stdio.h>

int main() {
    int a = 10, b = 5, c;

    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);  


    printf("\nRelational Operators:\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);


    printf("\nLogical Operators:\n");
    printf("(a > 5 && b < 10): %d\n", (a > 5 && b < 10));
    printf("(a > 15 || b < 10): %d\n", (a > 15 || b < 10));
    printf("!(a == b): %d\n", !(a == b));

    printf("\nAssignment Operators:\n");
    c = a;
    c += 5;   
    printf("c after += 5: %d\n", c);

    printf("\nUnary Operators:\n");
    printf("++a = %d\n", ++a);
    printf("--b = %d\n", --b);

    printf("\nBitwise Operators:\n");
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n", a >> 1);

    return 0;
}
