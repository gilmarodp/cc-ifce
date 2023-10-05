#include <stdio.h>

int main() {
    float precoQuilo = 32.0, quilos, valorTotal;

    printf("Digite o valor apresentado na balança: ");
    scanf("%f", &quilos);

    valorTotal = precoQuilo * quilos;

    printf("Valor total do prato: R$ %.2f\n", valorTotal);

    return 0;
}
