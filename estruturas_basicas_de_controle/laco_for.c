#include <stdio.h>

int main() {
    for(int i = 0; i < 5; i++) {
        printf("Numero: %d\n", i);
    }

    printf("\nContagem regeressiva: \n");

    for (int i = 10; i >= 1; i--) {
        printf("%d...\n", i);
    }

    printf("## BOOM! ##\n");

    return 0;
}