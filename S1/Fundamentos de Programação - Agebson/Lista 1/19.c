#include <stdio.h>

int main() {
    float precoAnelAlimento = 3.5, precoAnelComChip = 4.0, gastoTotal = 0.0;
    int galinhas;

    printf("Digite a quantidade de galinhas da granja: ");
    scanf("%d", &galinhas);

    gastoTotal = galinhas * ((2 * precoAnelAlimento) + precoAnelComChip);

    printf("Gasto total: R$ %.2f\n", gastoTotal);

    return 0;
}
