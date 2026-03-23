#include <stdio.h>

int main() {
    char operador;
    float a, b;

    printf("Digite a operacao (+ | - | * | /): ");
    scanf("%c%*c", &operador);
    
    printf("Digite os dois valores: ");
    scanf("%f%*c %f%*c", &a, &b);

    switch (operador) {
        case '+':
            printf("Resultado de %.2f + %.2f = %.2f\n", a, b, a + b);
            break;
        case  '-':
            printf("Resultado de %.2f - %.2f = %.2f\n", a, b, a - b);
            break;
        case '*':
            printf("Resultado de %.2f * %.2f = %.2f\n", a, b, a * b);
            break;
        case '/':
            if (b != 0){
                printf("Resultado de %.2f / %.2f = %.2f\n", a, b, a / b);
                break;
            }
            else {
                printf("Não é possível fazer uma divisao por zero.\n");
                break;
            }
        default:
            printf("Digite um operador válido.\n");
    }

    return 0;
}