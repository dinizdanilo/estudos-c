#include <stdio.h>
#include <string.h>

// string.h - manipulação de strings
// principais funções:

// strlen() - tamanho da string

// strcpy() - copia uma string

// strcmp() - compara strings

// strcat() - concatena strings

int main() {
    char nome[] = "Joao";
    char sobrenome[] = " Silva";

    strcat(nome, sobrenome);

    printf("Nome completo: %s\n", nome);

    printf("Tamanho do nome: %ld\n", strlen(nome));

    if (strcmp(nome, "Joao Silva") == 0)  {
        printf("Nome correto!\n");
    } else {
        printf("Nome incorreto!\n");
    }

    return 0;
}