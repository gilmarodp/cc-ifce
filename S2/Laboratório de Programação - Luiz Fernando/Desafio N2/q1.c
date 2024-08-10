#include <stdio.h>

void printArray(int* array, int size);
void apply(int* array, int (*condition)(int), int size);
int addOne(int x);

int main() {
    int array[] = {34, 3, 22, 6, 7, 44, 2};
    int size = sizeof(array) / sizeof(int);

    // Mostrando o array definido
    printf("Array antigo: ");
    printArray(array, size);

    // Aplicando a função adiciona um a cada elemento do array
    apply(array, addOne, size);

    // Mostrando o array modificado
    printf("Array novo: ");
    printArray(array, size);

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

// Função apply
void apply(int* array, int (*condition)(int), int size) {
    for (int i = 0; i < size; i++) {
        array[i] = condition(array[i]);
    }
}

// Exemplo de função aplicável
int addOne(int x) {
    return x + 1;
}
