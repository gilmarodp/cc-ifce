#include <stdio.h>

int main() {
    int cavalos, ferraduras;

    printf("Digite a quantidade de cavalos comprados para o haras: ");
    scanf("%d", &cavalos);

    ferraduras = cavalos * 4;

    printf("Total de ferraduras necessárias para os %d cavalos: %d\n", cavalos, ferraduras);

    return 0;
}
