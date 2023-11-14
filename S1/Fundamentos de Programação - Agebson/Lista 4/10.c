#include <stdio.h>

int main() {
    int vetor[15];

    for (int i = 0; i < 15; i++) {
        printf("Digite o valor vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    int maior = vetor[0];
    for (int i = 1; i < 15; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    for (int i = 0; i < 15; i++) {
        vetor[i] *= maior;
    }

    printf("Vetor após multiplicação pelo maior valor (%d):\n", maior);
    for (int i = 0; i < 15; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}