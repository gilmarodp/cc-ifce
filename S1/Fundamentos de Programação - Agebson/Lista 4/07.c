#include <stdio.h>

int main() {
    int numeros[] = {10, 2, 3, 5, 8, 2, 5, 6, 8, 3}, aux = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = i; j < 10; j++) {
            if (numeros[i] > numeros[j]) {
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 1;
}