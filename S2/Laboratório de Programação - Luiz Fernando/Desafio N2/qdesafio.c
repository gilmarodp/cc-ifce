#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

void printArray(int* array, int size);
int filter(int* array, int (*not_repeated)(int, int), int size);
int is_not_repeated(int x, int y);

int main() {
    int array[] = {34, -4, -4, -4, -2, 5};
    int size = sizeof(array) / sizeof(int);
    int newSize = 0;

    // Mostrando o array definido
    printf("Array antigo: ");
    printArray(array, size);

    // Aplicando a função adiciona um a cada elemento do array
    newSize = filter(array, is_not_repeated, size);

    // Mostrando o array modificado
    printf("Array depois do filter:");
    printArray(array, newSize);

    return 0;
}

void printArray(int *array, int size) {
    printf("[ ");
    for (int i = 0; i < size; i++) {
        if (i + 1 == size) {
            printf("%d", array[i]);
        } else {
            printf("%d, ", array[i]);
        }
    }
    printf(" ]\n");
}

// Função filter
int filter(int* array, int (*not_repeated)(int, int), int size) {
    int j = 0;

    for (int i = 0; i < size ; i++)
    {
        if (not_repeated(array[i], array[(i+1)%size]))
        {
            array[j] = array[i];
            j++;
        }
    }

    return j;
}

//  Função is_not_repeated
int is_not_repeated(int x, int y) {
    static int seen[MAX_SIZE];
    static int count = 0;

    for (int i = 0; i < count; i++) {
        if (seen[i] == x) {
            return 0; // Valor é repetido
        }
    }

    // Valor não é repetido, adiciona ao vetor de valores vistos
    if (count < MAX_SIZE) {
        seen[count++] = x;
    }

    return 1; // Valor não é repetido
}