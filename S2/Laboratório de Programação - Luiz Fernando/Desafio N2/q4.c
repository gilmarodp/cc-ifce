#include <stdio.h>
#include <stdlib.h>

void printArray(int* array, int size);
int filter(int* array, int (*condition)(int), int size);
int condition(int x);

int main() {
    int array[] = {34, -4};
    int size = sizeof(array) / sizeof(int);
    int newSize = 0;

    // Mostrando o array definido
    printf("Array antigo: ");
    printArray(array, size);

    // Aplicando a função adiciona um a cada elemento do array
    newSize = filter(array, condition, size);

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
int filter(int* array, int (*condition)(int), int size) {
    int j = 0;

    for (int i = 0; i < size ; i++)
    {
        if (condition(array[i]))
        {
            array[j] = array[i];
            j++;
        }
    }

    return j;
}

// Exemplo de função aplicável
int condition(int x) {
    return x > 0;
}
