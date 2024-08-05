#include <stdio.h>
#include <stdlib.h>
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

// Bubble Sort
void bubbleSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // Troca os elementos
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

// Insertion Sort
void insertionSort(int vetor[], int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        int key = vetor[i];
        int j = i - 1;

        // Move os elementos do vetor[0..i-1], que são maiores que a chave, para uma posição à frente
        while (j >= 0 && vetor[j] > key) {
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }
        vetor[j + 1] = key;
    }
}

int partition(int vetor[], int inicio, int fim) {
    int pivo = vetor[fim]; // Pivô
    int i = (inicio - 1); // Índice do menor elemento

    for (int j = inicio; j <= fim - 1; j++) {
        // Se o elemento atual é menor ou igual ao pivô
        if (vetor[j] <= pivo) {
            i++; // Incrementa o índice do menor elemento
            int temp = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = temp;
        }
    }

    // Troca o elemento pivô com o elemento em i + 1
    int temp = vetor[i + 1];
    vetor[i + 1] = vetor[fim];
    vetor[fim] = temp;
    return (i + 1);
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
    int vetor1[TAMANHO];
    int vetor2[TAMANHO];
    int vetor3[TAMANHO];

    // Preenche os vetores com números aleatórios
    gerarNumerosAleatorios(vetor1, TAMANHO);
    gerarNumerosAleatorios(vetor2, TAMANHO);
    gerarNumerosAleatorios(vetor3, TAMANHO);

    // Imprime os vetores antes da ordenação
    printf("Vetor original para Bubble Sort: ");
    imprimirVetor(vetor1, TAMANHO);

    printf("Vetor original para Insertion Sort: ");
    imprimirVetor(vetor2, TAMANHO);

    printf("Vetor original para Quick Sort: ");
    imprimirVetor(vetor3, TAMANHO);

    // Ordena os vetores usando diferentes algoritmos
    bubbleSort(vetor1, TAMANHO);
    insertionSort(vetor2, TAMANHO);
    quickSort(vetor3, 0, TAMANHO - 1);

    // Imprime os vetores após a ordenação
    printf("\nVetor ordenado com Bubble Sort: ");
    imprimirVetor(vetor1, TAMANHO);

    printf("Vetor ordenado com Insertion Sort: ");
    imprimirVetor(vetor2, TAMANHO);

    printf("Vetor ordenado com Quick Sort: ");
    imprimirVetor(vetor3, TAMANHO);

    return 0;
}
