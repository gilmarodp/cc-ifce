#include <stdio.h>

int main() {
    float salario = 0.0, vendas = 0.0, salarioTotal = 0.0;

    printf("Digite seu salário base: ");
    scanf("%f", &salario);

    printf("Digite o valor total das vendas realizadas: ");
    scanf("%f", &vendas);

    salarioTotal = salario + (vendas * 0.04);

    printf("Seu salário final: R$ %.2f\n", salarioTotal);

    return 0;
}
