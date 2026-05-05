#include <stdio.h>

int main() {
    int notas[3][2];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite a nota do aluno %d, prova %d: ", (i + 1), (j + 1));
            scanf("%d", &notas[i][j]);
        }
    }

    printf("\n=== NOTAS ===\n");

    for (int i = 0; i < 3; i++) {
        printf("Aluno %d: ", (i + 1));
        for (int j = 0; j < 2; j++) {
            printf("%d ", notas[i][j]);
        }
        printf("\n");
    }
}