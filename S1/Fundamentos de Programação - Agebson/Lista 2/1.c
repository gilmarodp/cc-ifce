// 1. Uma pessoa, ao realizar uma compra em um supermercado, recebe um número da sorte para concorrer a um
// prêmio no final do mês. O cálculo do número da sorte é feito da seguinte forma:
// • Caso a compra seja inferior a R$500,00 o número da sorte = 5000 - Valor a compra * Idade
// • Caso a compra seja superior a R$500,00 o número da sorte = 50000 - Valor a compra * Idade
// • Caso a compra seja igual a R$500,00 o número da sorte = Idade * Idade
// Faça um programa em C que receba o Valor Total da Compra e o Ano de Nascimento e informe ao usuário
// qual foi seu número da sorte.

#include <stdio.h>

int main()
{
    float valorTotal = 0;
    int anoNascimento = 0, anoAtual = 2023, numeroDaSorte = 0;

    printf("Digite o valor total: ");
    scanf("%f", &valorTotal);

    printf("Digite o ano da sua data de nascimento: ");
    scanf("%d", &anoNascimento);

    if (valorTotal < 500) {
        numeroDaSorte = 5000 - (valorTotal * (anoAtual - anoNascimento));
    } else if (valorTotal > 500) {
        numeroDaSorte = 50000 - (valorTotal * (anoAtual - anoNascimento));
    } else {
        numeroDaSorte = (anoAtual - anoNascimento) * (anoAtual - anoNascimento);
    }
    
    printf("Número da sorte: %d\n", numeroDaSorte);

    return 0;
}
