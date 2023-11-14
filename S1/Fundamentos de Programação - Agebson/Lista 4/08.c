#include <stdio.h>

int main() {
    int vetorA[20];
    
    for (int i = 0; i < 20; i++) {
        printf("Digite o valor de A[%d]: ", i);
        scanf("%d", &vetorA[i]);
    }

    int S = 0;
    for (int i = 0; i < 9; i++) {
        S += (vetorA[i] - vetorA[19 - i]) * (vetorA[i] - vetorA[19 - i]);
    }

    printf("O valor de S e: %d\n", S);

    return 0;
}
