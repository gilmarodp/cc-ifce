#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarNumerosAleatorios(int vetor[], int tamanho) {
    // Seed para o gerador de números aleatórios
    srand(time(NULL));

    // Preenche o vetor com números aleatórios
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand();
    }
}

// Função para imprimir um vetor
void imprimirVetor(int vetor[], int tamanho) {
    printf("[");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", vetor[i]);
        if (i < tamanho - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main() {
    int tamanho = 10;
    int vetor[tamanho];

    gerarNumerosAleatorios(vetor, tamanho);

    printf("Vetor gerado: ");
    imprimirVetor(vetor, tamanho);

    return 0;
}
