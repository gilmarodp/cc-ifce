#include <stdio.h>

int main() {
    int K[30], temp;

    for (int i = 0; i < 30; i++)
    {
        printf("Digite o valor de K[%d]: ", i);
        scanf("%d", &K[i]);
    }

    printf("\nVetor K:\n");
    for (int i = 0; i < 30; i++)
    {
        printf("%d ", K[i]);
    }

    for (int i = 0; i < 29; i += 2) {
        temp = K[i];
        K[i] = K[i + 1];
        K[i + 1] = temp;
    }

    printf("\nVetor K Modificado:\n");
    for (int i = 0; i < 30; i++)
    {
        printf("%d ", K[i]);
    }

    printf("\n");
    
    return 0;
}