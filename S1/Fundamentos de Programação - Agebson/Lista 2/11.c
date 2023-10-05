#include <stdio.h>

int main()
{
    float valorCompra = 0.0, valorCompraTotal;
    int parcelas = 0;

    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra);

    printf("Digite a quantidade de parcelas: ");
    scanf("%d", &parcelas);

    if (parcelas <= 1) {
        valorCompraTotal = valorCompra;
        parcelas = 1;
    } else if (parcelas >= 3) {
        valorCompraTotal = valorCompra * 1.2;
        parcelas = 3;
    } else {
        valorCompraTotal = valorCompra * 1.1;
    }

    printf("Número de parcelas: %d\n", parcelas);
    printf("Valor da parcela: %dx de R$ %2.f\n", parcelas, valorCompraTotal / (float) parcelas);
    printf("Valor total: %.2f\n", valorCompraTotal);

    return 0;
}
