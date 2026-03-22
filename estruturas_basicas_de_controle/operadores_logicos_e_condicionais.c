#include <stdio.h>

// = -> atribuição
// == -> igualdade
// > -> maior
// < -> menor
// >= -> maior ou igual
// <= -> menor ou igual
// != -> diferente
// && -> AND - E
// || -> OR - OU

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d%*c", &idade);
    
    if (idade >= 18) {
        printf("Você é maior de idade.\n");
    }
    else {
        printf("Voce é menor de idade.\n");
    }
}