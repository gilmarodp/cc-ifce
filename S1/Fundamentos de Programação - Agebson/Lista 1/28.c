#include <stdio.h>

int main() {
    float lado = 0.0, area = 0.0;

    printf("Digite o lado do quadrado em metros: ");
    scanf("%f", &lado);

    area = lado * lado;

    printf("Área total do quadrado: %.2f m²\n", area);

    return 0;
}
