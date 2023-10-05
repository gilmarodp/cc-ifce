#include <stdio.h>

int main() {
    float n1 = 0.0, n2 = 0.0, mediaPonderada = 0.0;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);

    printf("Digite a nota 2: ");
    scanf("%f", &n2);

    mediaPonderada = ((2 * n1) + (3 * n2)) / 5;

    printf("Sua média ponderada: %.2f\n", mediaPonderada);

    return 0;
}
