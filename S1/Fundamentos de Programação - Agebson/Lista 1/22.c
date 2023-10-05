#include <stdio.h>

int main() {
    int m5 = 0, m10 = 0, m25 = 0, m50 = 0, m100 = 0;
    float total = 0.0;

    printf("Digite a quantidade de moedas de 5 centavos que você tem: ");
    scanf("%d", &m5);

    printf("Digite a quantidade de moedas de 10 centavos que você tem: ");
    scanf("%d", &m10);

    printf("Digite a quantidade de moedas de 25 centavos que você tem: ");
    scanf("%d", &m25);

    printf("Digite a quantidade de moedas de 50 centavos que você tem: ");
    scanf("%d", &m50);

    printf("Digite a quantidade de moedas de 1 real que você tem: ");
    scanf("%d", &m100);

    total = (m5 * 5) + (m10 * 10) + (m25 * 25) + (m50 * 50) + (m100 * 100);
    total = total / 100;

    printf("Total: R$ %.2f\n", total);

    return 0;
}
