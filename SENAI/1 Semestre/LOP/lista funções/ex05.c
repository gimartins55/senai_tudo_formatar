#include <stdio.h>

void ordenar(int vetor[], int tamanho) {
    int i, j, temp;

    for(i = 0; i < tamanho - 1; i++) {
        for(j = i + 1; j < tamanho; j++) {
            if(vetor[i] > vetor[j]) {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
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

    ordenar(vetor, tamanho);

    printf("Array ordenado: ");

    for(i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}