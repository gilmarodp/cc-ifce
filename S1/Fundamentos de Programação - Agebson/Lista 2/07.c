#include <stdio.h>

int main()
{
    float salario = 0.0;
    int funcao = 0;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    printf("Qual é sua função:");
    printf("\n1 - Técnico");
    printf("\n2 - Gerente");
    printf("\n3 - Outro\n>: ");
    scanf("%d", &funcao);

    if (funcao == 1) printf("Seu novo salário: %.2f.\n", salario * 1.5);
    if (funcao == 2) printf("Seu novo salário: %.2f.\n", salario * 1.3);
    if (funcao == 3) printf("Seu novo salário: %.2f.\n", salario * 1.2);

    return 0;
}
