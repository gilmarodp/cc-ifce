#include <stdio.h>

int main()
{
    float media = 0.0;
    char conceito;

    printf("Qual foi sua média: ");
    scanf("%f", &media);

    if (media < 4) conceito = 'E';
    else if (media < 6 && media >= 4) conceito = 'D';
    else if (media < 7.5 && media >= 6) conceito = 'C';
    else if (media < 9 && media >= 7.5) conceito = 'B';
    else conceito = 'A';
    
    if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
        printf("APROVADO\n");
    } else {
        printf("REPROVADO\n");
    }

    return 0;
}
