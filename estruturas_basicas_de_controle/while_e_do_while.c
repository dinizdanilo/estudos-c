#include <stdio.h>

int main() {
    int contador = 1;

    while (contador <= 5) {
        printf("Contando: %d\n", contador);
        contador++;
    }

    int senha;

    do {
        printf("Digite a senha correta (1234): ");
        scanf("%d%*c", &senha);
    } while (senha != 1234);

    return 0;
}