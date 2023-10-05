#include <stdio.h>

int main() {
    int horasTrabalhadas = 0, horasExtras = 0;
    float salario = 0.0, salarioBruto = 0.0, valorHorasExtras = 0.0, salarioLiquido = 0.0;

    printf("Quantidade de horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    printf("Valor do salário mínimo: ");
    scanf("%f", &salario);

    printf("Quantidade de horas extras: ");
    scanf("%d", &horasExtras);

    salarioBruto = salario + (salario * 0.01 * horasTrabalhadas);
    valorHorasExtras = salario * 0.014 * horasExtras;
    salarioLiquido = salarioBruto + valorHorasExtras;

    printf("Valor a receber: R$ %.2f\n", salarioLiquido);

    return 0;
}
