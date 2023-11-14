#include <stdio.h>

void somarSequencias(int seq1[], int seq2[], int resultado[], int n) {
    int transporte = 0;

    for (int i = n - 1; i >= 0; i--) {
        int soma = seq1[i] + seq2[i] + transporte;
        resultado[i + 1] = soma % 10;
        transporte = soma / 10;
    }

    resultado[0] = transporte;
}

int main() {
    int n = 8;
    int seq1[] = {8, 2, 4, 3, 4, 2, 5, 1};
    int seq2[] = {3, 3, 7, 5, 2, 3, 3, 7};
    int resultado[n + 1];

    somarSequencias(seq1, seq2, resultado, n);

    printf("Resultado: ");
    for (int i = 0; i <= n; i++) {
        printf("%d ", resultado[i]);
    }

    printf("\n");
    
    return 0;
}
