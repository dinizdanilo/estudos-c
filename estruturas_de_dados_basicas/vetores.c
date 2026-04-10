#include <stdio.h>

int main() {
    int notas[5]; // Vetor apra armazenar 5 notas
    //-> int: Tipo dos valores (números inteiros).
    //-> notas: Nome do vetor.
    //-> [5]: Número total de elementos que cabem no vetor.
    int notas2[5] = {10, 32, 9, 2, 3};
    
    for (int i = 0; i < 5; i++) {
        printf("%d\n", notas2[i]);
    }

    return 0;
}