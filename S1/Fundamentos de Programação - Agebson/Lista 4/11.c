#include <stdio.h>

int main() {
    int vetorA[10], vetorB[10], vetorC[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor de vetorA[%d]: ", i);
        scanf("%d", &vetorA[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor de vetorB[%d]: ", i);
        scanf("%d", &vetorB[i]);
    }

    for (int i = 0; i < 10; i++) {
        vetorC[i] = vetorA[i] - vetorB[9 - i];
    }

    printf("Resultado da subtracao elemento a elemento:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetorC[i]);
    }

    printf("\n");

    return 0;
}
