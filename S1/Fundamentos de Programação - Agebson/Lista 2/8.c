#include <stdio.h>

int main()
{
    float valorCompra = 0.0;

    printf("Qual é o valor de compra do produto? ");
    scanf("%f", &valorCompra);

    if (valorCompra < 20) printf("Valor de venda: %.2f\n", valorCompra * 1.45);
    else printf("Valor de venda: %.2f\n", valorCompra * 1.30);

    return 0;
}
