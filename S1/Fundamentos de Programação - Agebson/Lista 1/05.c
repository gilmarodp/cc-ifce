#include <stdio.h>

int main() {
    int idade, dias;

    printf("Digite a idade de uma pessoa: ");
    scanf("%d", &idade);

    dias = idade * 365;

    printf("Uma pessoa com %d anos possui pouco mais de %d dias de vida.\n", idade, dias);

    return 0;
}
