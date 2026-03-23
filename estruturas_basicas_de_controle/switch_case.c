#include <stdio.h> 

int main() {
//     int opcao = 2;

//    switch (opcao) {
//         case 1:
//             printf("Fase numero 1\n");
//             break;
//         case 2:
//             printf("Fase numero 2\n");
//             break;
//         case 3:
//             printf("Fase numero 3\n");
//             break;
//         case 4:
//             printf("Fase numero 4\n");
//             break;
//         default:
//         printf("Opcao invalida.\n");
//    }

    int dia;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d%*c", &dia);

    switch (dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Digite um numero valido.\n");
        }

   return 0;
}