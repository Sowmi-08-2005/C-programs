#include <stdio.h>

int main() {
    printf("Continue Example:\n");
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;  
        }
        printf("%d ", i);
    }
    printf("\n\n");
}