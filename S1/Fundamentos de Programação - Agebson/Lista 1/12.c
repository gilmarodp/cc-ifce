#include <stdio.h>

int main() {
    float salarioInicial, salarioAumento, salarioFinal;

    printf("Digite o seu salário: ");
    scanf("%f", &salarioInicial);

    salarioAumento = salarioInicial + (salarioInicial * 0.15);
    salarioFinal = salarioAumento - (salarioAumento * 0.08);

    printf("Salário inicial: R$ %.2f\n", salarioInicial);
    printf("Salário com aumento (15%%): R$ %.2f\n", salarioAumento);
    printf("Salário com descontos de impostos (8%%): R$ %.2f\n", salarioFinal);

    return 0;
}
