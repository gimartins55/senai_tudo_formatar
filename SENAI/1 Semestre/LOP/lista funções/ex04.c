#include <stdio.h>

float media(int vetor[], int tamanho) {
    int i, soma = 0;

    for(i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }

    return (float)soma / tamanho;
}

int main() {
    int tamanho, i;

    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for(i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Media: %.2f", media(vetor, tamanho));

    return 0;
}2