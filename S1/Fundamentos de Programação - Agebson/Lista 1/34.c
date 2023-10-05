#include <stdio.h>

int main() {
    float reais = 0.0, dolares = 0.0, marcosAlemaes = 0.0, librasEsterlinas = 0.0;

    printf("Digite o valor em reais (R$): ");
    scanf("%f", &reais);

    dolares = reais / 5.65;
    marcosAlemaes = reais / 3.27;
    librasEsterlinas = reais / 7.48;

    printf("Valor em dólares: $ %.2f\n", dolares);
    printf("Valor em marcos alemães: %.2f\n", marcosAlemaes);
    printf("Valor em libras esterlinas: £ %.2f\n", librasEsterlinas);

    return 0;
}
