#include <stdio.h>

int main() {
    float salario = 0.0, conta1 = 0.0, conta2 = 0.0, salarioFinal = 0.0;

    printf("Digite o valor do salário que você recebeu: ");
    scanf("%f", &salario);

    printf("Digite o valor da conta 1: ");
    scanf("%f", &conta1);

    printf("Digite o valor da conta 2: ");
    scanf("%f", &conta2);

    salarioFinal = salario - (conta1 * 1.02) - (conta2 * 1.02);

    printf("Saldo restante após o pagamento das contas: R$ %.2f\n", salarioFinal);

    return 0;
}
