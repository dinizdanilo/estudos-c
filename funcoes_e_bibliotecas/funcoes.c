// tipo_retorno nome_funcao(parametros) {
//     // bloco de codigo

//     return valor; se houver retorno
// }

#include <stdio.h>

int somar(int numero1, int numero2) {
    // int resultado;

    // resultado = numero1 + numero2;

    // return resultado;

    return numero1 + numero2;
}

int main() {
    // int resultado = somar(3, 2);

    // printf("Resultado: %d\n", resultado);
    
    printf("Resultado: %d\n", somar(3, 2));
    printf("Resultado: %d\n", somar(5, 5));
    printf("Resultado: %d\n", somar(10, 1));


    return 0;
}