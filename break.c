#include <stdio.h>

int main() {
    printf("Break Example:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("\n\n", i);
            break;  
        }
        printf("%d ", i);
    }
}