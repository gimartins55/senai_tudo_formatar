#include <stdio.h>

int primo(int n) {
    int i;

    if(n <= 1) {
        return 0;
    }

    for(i = 2; i < n; i++) {
        if(n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(primo(num)) {
        printf("O numero e primo.");
    } else {
        printf("O numero nao e primo.");
    }

    return 0;
}