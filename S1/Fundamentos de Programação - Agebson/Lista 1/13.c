#include <stdio.h>

int main() {
    int numero, unidade, dezena, centena;

    printf("Digite um número com 3 dígitos: ");
    scanf("%d", &numero);

    centena = numero / 100;
    dezena = (numero / 10) % 10;
    unidade = numero % 10;

    printf("Centena: %d\n", centena);
    printf("Dezena: %d\n", dezena);
    printf("Unidade: %d\n", unidade);

    return 0;
}
