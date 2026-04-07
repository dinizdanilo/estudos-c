#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// stdlib.h - utilidades gerais

// - rand() - numero aleatorio
// - srand() - inicializa o gerador com uma semente
// - atoi(), atof() - converte string para int e float
// - exit() - encerra o programa

int main() {
    srand(time(NULL));
    int numero =  rand() % 100; // entre 0 e 99

    printf("Numero aleatorio: %d\n", numero);

    char texto[] = "123";

    int valor = atoi(texto);

    printf("Convertido: %d + 2 = %d\n", valor, valor + 2);

    return 0;
}