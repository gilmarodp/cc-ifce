#include <stdio.h>

int main() {
    int dia, mes, dias;

    printf("Digite o dia de uma data: ");
    scanf("%d", &dia);

    printf("Digite o mês de uma data: ");
    scanf("%d", &mes);

    dias = ((mes - 1) * 30) + dia;

    printf("Se passaram %d dias desde o início do ano a partir da data informada.\n", dias);

    return 0;
}
