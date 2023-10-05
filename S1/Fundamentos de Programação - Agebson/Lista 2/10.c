#include <stdio.h>

int main()
{
    float salario = 0.0, inss = 0.0;

    printf("Informe o valor do salário: ");
    scanf("%f", &salario);

    if (salario > 600 && salario <= 1200) {
        inss = salario * 0.2;
    } else if (salario > 1200 && salario <= 2000) {
        inss = salario * 0.25;
    } else if (salario > 2000) {
        inss = salario * 0.3;
    } else {
        inss = 0;
    }

    printf("Salário com INSS descontado: R$ %.2f.\n", salario - inss);

    return 0;
}
