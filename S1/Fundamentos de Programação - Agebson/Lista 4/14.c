#include <stdio.h>

int encontrarSomaMaxima(int array[], int n) {
    int maxAtual = array[0];
    int maxGlobal = array[0];

    for (int i = 1; i < n; i++) {
        maxAtual = (array[i] > maxAtual + array[i]) ? array[i] : maxAtual + array[i];

        maxGlobal = (maxAtual > maxGlobal) ? maxAtual : maxGlobal;
    }

    return maxGlobal;
}

int main() {
    int n;

    printf("Digite o tamanho da sequencia: ");
    scanf("%d", &n);

    int sequencia[n];

    printf("Digite os numeros da sequencia:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &sequencia[i]);
    }

    int somaMaxima = encontrarSomaMaxima(sequencia, n);

    printf("A soma maxima do segmento e: %d\n", somaMaxima);

    return 0;
}
