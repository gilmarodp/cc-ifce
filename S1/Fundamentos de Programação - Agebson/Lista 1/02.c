#include <stdio.h>

int main() {
    float comprimento, largura, area;

    printf("Digite o comprimento do terreno em metros: ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno em metros: ");
    scanf("%f", &largura);

    area = comprimento * largura;

    printf("Área do terreno: %.2f m²\n", area);

    return 0;
}