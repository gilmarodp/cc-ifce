#include <stdio.h>

int main()
{
    float valorSalario = 0.0, valorFinanciamento = 0.0, valorSalarioConjuge = 0.0, financiamentoPorSalario = 0.0;

    printf("Digite o valor do seu salário: ");
    scanf("%f", &valorSalario);

    printf("Digite o valor do financiamento: ");
    scanf("%f", &valorFinanciamento);

    financiamentoPorSalario = valorFinanciamento / valorSalario;

    if (financiamentoPorSalario <= 5) {
        printf("Financiamento concedido");
    } else {
        printf("Digite o valor do salário do seu cônjuge: ");
        scanf("%f", &valorSalarioConjuge);

        financiamentoPorSalario = valorFinanciamento / (valorSalario + valorSalarioConjuge);

        if (financiamentoPorSalario <= 5) {
            printf("Financiamento concedido");
        } else {
            printf("Financiamento negado");
        }
    }
    
    printf("\nObrigado por nos consultar.\n");

    return 0;
}
