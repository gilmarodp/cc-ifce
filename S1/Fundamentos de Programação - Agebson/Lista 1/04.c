#include <stdio.h>

int main() {
    float precoPao = 0.5, precoBroa = 1.5, total, poupanca;
    int paes, broas;

    printf("Digite a quantidade de pães franceses você vendeu hoje: ");
    scanf("%d", &paes);

    printf("Digite a quantidade de broas você vendeu hoje: ");
    scanf("%d", &broas);

    total = (paes * precoPao) + (broas * precoBroa);
    poupanca = total * 0.1;

    printf("Pães franceses vendidos: %d\n", paes);
    printf("Broas vendidas: %d\n", broas);
    printf("Total vendido: R$ %.2f\n", total);
    printf("Quanto deve colocar na poupança (10%% do total): R$ %.2f\n", poupanca);

    return 0;
}
