#include <stdio.h>

int main() {
    int horasNormais = 0, horasExtras = 0;
    float salarioBruto = 0.0, salarioLiquido = 0.0;

    printf("Digite as horas normais trabalhadas: ");
    scanf("%d", &horasNormais);

    printf("Digite as horas extras trabalhadas: ");
    scanf("%d", &horasExtras);

    salarioBruto = (horasNormais * 10) + (horasExtras * 15);
    salarioLiquido = salarioBruto - (salarioBruto * 0.1);

    printf("Salário bruto: R$ %.2f\n", salarioBruto);
    printf("Salário líquido: R$ %.2f\n", salarioLiquido);

    return 0;
}
