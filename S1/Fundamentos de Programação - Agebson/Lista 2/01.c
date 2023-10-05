#include <stdio.h>

// ola mundo

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
