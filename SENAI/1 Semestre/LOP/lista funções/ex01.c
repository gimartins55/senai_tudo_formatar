#include <stdio.h>

float soma(float a, float b) {
    return a + b;
}

float subtracao(float a, float b) {
    return a - b;
}

float multiplicacao(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    return a / b;
}

int main() {
    float n1, n2;
    int op;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("\n1 - Soma");
    printf("\n2 - Subtracao");
    printf("\n3 - Multiplicacao");
    printf("\n4 - Divisao");
    printf("\nEscolha: ");
    scanf("%d", &op);

    switch(op) {
        case 1:
            printf("Resultado: %.2f", soma(n1, n2));
            break;
        case 2:
            printf("Resultado: %.2f", subtracao(n1, n2));
            break;
        case 3:
            printf("Resultado: %.2f", multiplicacao(n1, n2));
            break;
        case 4:
            printf("Resultado: %.2f", divisao(n1, n2));
            break;
        default:
            printf("Opcao invalida!");
    }

    return 0;
}