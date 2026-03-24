#include <stdio.h>

int main() {
    int dias;

    printf("Digite quantos dias de treinamento: ");
    scanf("%d%*c", &dias);

    for (int i = 0; i < dias; i++) {
        printf("Dia %d: Tá pago.\n", i + 1);
    }

    printf("\nTreinamento concluído!\n");

    return 0;
}