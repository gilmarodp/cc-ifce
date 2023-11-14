#include <stdio.h>

int main() {
    int vetor[15];

    for (int i = 0; i < 15; i++) {
        printf("Digite o valor de vetor[%d]: ", vetor[i]);
        scanf("%d", &vetor[i]);
    }

    int maior = vetor[0];
    int posicaoMaior = 0;
    int menor = vetor[0];
    int posicaoMenor = 0;

    for (int i = 1; i < 15; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicaoMaior = i;
        }

        if (vetor[i] < menor) {
            menor = vetor[i];
            posicaoMenor = i;
        }
    }

    printf("O maior elemento do vetor e %d e esta na posicao %d.\n", maior, posicaoMaior);
    printf("O menor elemento do vetor e %d e esta na posicao %d.\n", menor, posicaoMenor);

    return 0;
}
