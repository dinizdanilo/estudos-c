#include <stdio.h>

int main() {
    int num1 = 10, num2 = 2;
    int resultado = num1 + num2;

    printf("Soma: %d + %d = %d\n", num1, num2, resultado);
    printf("Soma: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Soma: %d * %d = %d\n", num1, num2, num1 * num2);
    printf("Soma: %d / %d = %d\n", num1, num2, num1 / num2);
    printf("Soma: %d %% %d = %d\n", num1, num2, num1 % num2);
}