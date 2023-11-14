#include <stdio.h>

int main() {
    int n;

    printf("Digite o tamanho da sequencia: ");
    scanf("%d", &n);

    double sequencia[n];

    printf("Digite os numeros da sequencia:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &sequencia[i]);
    }

    printf("\nResultado:\n");
    for (int i = 0; i < n; i++) {
        if (sequencia[i] == 0) {
            continue;
        }

        int contador = 1;

        // Verifica as ocorrências do número
        for (int j = i + 1; j < n; j++) {
            if (sequencia[j] == sequencia[i]) {
                contador++;
                sequencia[j] = 0;
            }
        }

        printf("%.2lf ocorre %d vezes\n", sequencia[i], contador);
    }

    return 0;
}
