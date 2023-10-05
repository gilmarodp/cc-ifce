#include <stdio.h>

int main()
{
    char tipoApartamento;
    int diarias = 0;
    float valorConsumoInterno = 0.0, subtotal = 0.0, total = 0.0, valorDiaria = 0.0, valorTotalDiaria = 0.0;

    printf("Digite o tipo do apartamento (A, B, C ou D): ");
    scanf(" %c", &tipoApartamento);

    printf("Digite a quantidade de dias que você irá passar: ");
    scanf("%d", &diarias);

    printf("Digite o valor do seu consumo interno: ");
    scanf("%f", &valorConsumoInterno);

    if (tipoApartamento == 'A') {
        valorDiaria = 150;
        valorTotalDiaria = valorDiaria * diarias;
        subtotal = valorTotalDiaria + valorConsumoInterno;
    } else if (tipoApartamento == 'B') {
        valorDiaria = 100;
        valorTotalDiaria = valorDiaria * diarias;
        subtotal = valorTotalDiaria + valorConsumoInterno;
    } else if (tipoApartamento == 'C') {
        valorDiaria = 75;
        valorTotalDiaria = valorDiaria * diarias;
        subtotal = valorTotalDiaria + valorConsumoInterno;
    } else if (tipoApartamento == 'D') {
        valorDiaria = 175;
        valorTotalDiaria = valorDiaria * diarias;
        subtotal = valorTotalDiaria + valorConsumoInterno;
    }

    total = subtotal * 1.1;

    printf("Tipo do apartamento: %c\n", tipoApartamento);
    printf("Número de diárias utilizadas: %d\n", diarias);
    printf("Valor unitário da diária: %.2f\n", valorDiaria);
    printf("Valor total das diárias: %.2f\n", valorTotalDiaria);
    printf("Valor da taxa de serviço: %.2f\n", subtotal * 0.1);
    printf("Valor total geral: %.2f\n", total);

    return 0;
}
