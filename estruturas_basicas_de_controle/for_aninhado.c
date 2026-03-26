#include <stdio.h>

int main() {
    int n;
    printf("Digite ate qual numero voce quer ver a tabuada: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        printf("\nTabuada do %d\n", i);

        for (int j = 0; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }
}