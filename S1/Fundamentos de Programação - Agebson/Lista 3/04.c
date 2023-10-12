#include <stdio.h>

int main() {
    float num1 = 0.0, num2 = 0.0, valorFinal = 0.0;
    int operacao = 0;

    printf("Digite um número: ");
    scanf("%f", &num1);

    printf("Digite outro número: ");
    scanf("%f", &num2);

    printf("Digite o número da operação:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n>: ");
    scanf("%d", &operacao);

    switch (operacao)
    {
        case 1:
            valorFinal = num1 + num2;
            break;
        case 2:
            valorFinal = num1 - num2;
            break;
        case 3:
            valorFinal = num1 * num2;
            break;
        case 4:
            valorFinal = num1 / num2;
            break;
    }

    printf("\n\nValor final: %.2f\n", valorFinal);

    return 0;
}