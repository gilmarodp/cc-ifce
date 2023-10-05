#include <stdio.h>

int main() {
    float totalLitros = 0.0, ml350 = 0.0, ml600 = 0.0, ml2000 = 0.0;

    printf("Digite a quantidade de refrigerantes de 350ml que você comprou: ");
    scanf("%f", &ml350);

    printf("Digite a quantidade de refrigerantes de 600ml que você comprou: ");
    scanf("%f", &ml600);

    printf("Digite a quantidade de refrigerantes de 2L que você comprou: ");
    scanf("%f", &ml2000);

    totalLitros = ((ml350 * 350) + (ml600 * 600) + (ml2000 * 2000)) / 1000;

    printf("Total em litros: %.2f\n", totalLitros);

    return 0;
}
