#include <stdio.h>
#include <stdlib.h>

void printArray(int* array, int size);
int reduce(int* array, int (*combine)(int, int), int size);
int combine(int x, int y);

int main() {
    int array[] = {34, 4, 2, 3};
    int size = sizeof(array) / sizeof(int);
    int reducer = 0;

    // Mostrando o array definido
    printf("Array: ");
    printArray(array, size);

    // Aplicando a função adiciona um a cada elemento do array
    reducer = reduce(array, combine, size);

    // Mostrando o array modificado
    printf("Reducer: %d\n", reducer);

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

// Função reduce
int reduce(int* array, int (*combine)(int, int), int size) {
    int reducer = 0;

    for (int i = 0; i < size; i++) {
        reducer = combine(array[i], reducer);
    }

    return reducer;
}

// Exemplo de função aplicável
int combine(int x, int y) {
    return x + y;
}
