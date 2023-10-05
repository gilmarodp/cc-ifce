#include <stdio.h>

int main()
{
    int tipo = 0;
    float valorTotal = 0.0;
    
    printf("Qual desses bichos de estimação você possui:\n");
    printf("1 - Gato\n");
    printf("2 - Papagaio\n");
    printf("3 - Cão\n");
    printf("Digite qualquer outro valor se nenhum\n\n>: ");
    scanf("%d", &tipo);

    if (tipo == 1) valorTotal = 350 + 30;
    else if (tipo == 2) valorTotal = 350 + 12;
    else if (tipo == 3) valorTotal = 350 + 50;
    else valorTotal = 350 - 20;

    printf("Você deve pagar de condomínio o seguinte valor: R$ %.2f\n", valorTotal);    

    return 0;
}
