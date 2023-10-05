#include <stdio.h>

int main() {
    float salario = 0.0, salarioMinimo = 0.0, quantidade = 0.0;

    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salarioMinimo);

    printf("Digite o valor do salário que você ganha: ");
    scanf("%f", &salario);

    quantidade = salario / salarioMinimo;

    printf("Você ganha %.2f salários mínimos.\n", quantidade);

    return 0;
}
