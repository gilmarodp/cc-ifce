#include <stdio.h>

int main()
{
    int n1 = 0, n2 = 0;
    char operacao = '+';

    printf("Digite um número: ");
    scanf("%d", &n1);

    printf("Digite outro número: ");
    scanf("%d", &n2);

    printf("Digite o símbolo da operação para fazer entre eles: ");
    scanf(" %c", &operacao);

    switch (operacao)
    {
        case '+':
            printf("%d + %d = %d\n", n1, n2, n1 + n2);
            break;

        case '-':
            printf("%d - %d = %d\n", n1, n2, n1 - n2);
            break;

        case '*':
            printf("%d * %d = %d\n", n1, n2, n1 * n2);
            break;

        case '/':
            printf("%d / %d = %.2f\n", n1, n2, (float) n1 / (float) n2);
            break;
        
        default:
            printf("Operador não é válido!\n");
            break;
    }

    return 0;
}
