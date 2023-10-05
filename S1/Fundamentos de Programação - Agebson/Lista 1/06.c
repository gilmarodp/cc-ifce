#include <stdio.h>

int main() {
    float precoGasolina, valorPagamento, litros;

    printf("Digite o preço do litro da gasolina: ");
    scanf("%f", &precoGasolina);

    printf("Digite o valor do pagamento: ");
    scanf("%f", &valorPagamento);

    litros = valorPagamento / precoGasolina;

    printf("Foram colocados %.2f litros de gasolina no tanque.\n", litros);

    return 0;
}
