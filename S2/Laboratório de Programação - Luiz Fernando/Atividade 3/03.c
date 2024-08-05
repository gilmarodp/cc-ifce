#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define TAMANHO 100

void gerarNumerosAleatorios(int vetor[], int tamanho) {
    // Seed para o gerador de números aleatórios
    srand(time(NULL));

    // Preenche o vetor com números aleatórios
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand();
    }
}

// Função de busca binária
bool buscaBinaria(int vetor[], int tamanho, int valor) {
    int esquerda = 0;
    int direita = tamanho - 1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        // Verifica se o valor está no meio
        if (vetor[meio] == valor) {
            return true;
        }

        // Se o valor for maior, ignora a metade esquerda
        if (vetor[meio] < valor) {
            esquerda = meio + 1;
        }
        // Se o valor for menor, ignora a metade direita
        else {
            direita = meio - 1;
        }
    }

    // Se chegar aqui, o valor não está presente
    return false;
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


// Quick Sort
void quickSort(int vetor[], int inicio, int fim) {
    if (inicio < fim) {
        int pivoIndex = partition(vetor, inicio, fim);

        // Ordena as partes separadas pelo pivô
        quickSort(vetor, inicio, pivoIndex - 1);
        quickSort(vetor, pivoIndex + 1, fim);
    }
}

int main() {
    int vetor[TAMANHO];

    // Gera números aleatórios e preenche o vetor
    gerarNumerosAleatorios(vetor, TAMANHO);

    // Ordena o vetor usando Quick Sort
    quickSort(vetor, 0, TAMANHO - 1);

    // Imprime o vetor ordenado
    printf("Vetor ordenado: ");
    imprimirVetor(vetor, TAMANHO);

    // Realiza 10 buscas binárias com números aleatórios
    printf("\nResultados da busca binária:\n");
    for (int i = 0; i < 10; i++) {
        int valor_busca = rand();
        bool encontrado = buscaBinaria(vetor, TAMANHO, valor_busca);
        printf("Busca pelo número %d: %s\n", valor_busca, encontrado ? "Encontrado" : "Não encontrado");
    }

    return 0;
}
