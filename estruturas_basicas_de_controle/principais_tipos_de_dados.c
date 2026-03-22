#include <stdio.h>

int main() {
    int numero = 10;
    float numeroQuebrado = 50.49;
    char letra = 'A';
    char nome[7] = "Danilo";

    printf("Numero: %d\n",numero);
    printf("Numero: %.2f\n",numeroQuebrado);
    printf("Letra: %c\n", letra);
    printf("Nome: %s\n", nome);

    return 0;
}