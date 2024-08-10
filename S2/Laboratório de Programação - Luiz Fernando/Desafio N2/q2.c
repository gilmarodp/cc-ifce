#include <stdio.h>

void printArray(int* array, int size);
int count(int* array, int (*condition)(int), int size);
int isGreaterThanZero(int x);

int main() {
    int array[] = {34, -3, 22, 6, -7, 44, 2, 3, 5, 1};
    int size = sizeof(array) / sizeof(int);
    int counter = 0;

    // Mostrando o array definido
    printf("Array: ");
    printArray(array, size);

    // Aplicando a função adiciona um a cada elemento do array
    counter = count(array, isGreaterThanZero, size);

    printf("Contador: %d\n", counter);

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

// Função count
int count(int* array, int (*condition)(int), int size) {
    int counter = 0;

    for (int i = 0; i < size; i++) {
        if (condition(array[i])) {
            counter++;
        }
    }

    return counter;
}

// É maior que zero?
int isGreaterThanZero(int x) {
    return x > 0;
}
