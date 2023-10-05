#include <stdio.h>

int main() {
    int anoNascimento = 0, anoAtual = 0;

    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    int idadeAnos = anoAtual - anoNascimento;
    int idadeMeses = idadeAnos * 12;
    int idadeDias = idadeMeses * 30;
    int idadeSemanas = idadeMeses * 4;

    printf("Idade em anos: %d\n", idadeAnos);
    printf("Idade em meses: %d\n", idadeMeses);
    printf("Idade em dias: %d\n", idadeDias);
    printf("Idade em semanas: %d\n", idadeSemanas);

    return 0;
}
