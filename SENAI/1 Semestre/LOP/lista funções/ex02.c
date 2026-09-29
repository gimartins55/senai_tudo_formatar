#include <stdio.h>

int fatorial(int n) {
    int i, fat = 1;

    for(i = 1; i <= n; i++) {
        fat = fat * i;
    }

    return fat;
}

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("Fatorial: %d", fatorial(num));

    return 0;
}