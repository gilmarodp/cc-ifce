#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distancia;

    printf("Digite o X do primeiro ponto: ");
    scanf("%f", &x1);

    printf("Digite o Y do primeiro ponto: ");
    scanf("%f", &y1);

    printf("Digite o X do segundo ponto: ");
    scanf("%f", &x2);

    printf("Digite o Y do segundo ponto: ");
    scanf("%f", &y2);

    distancia = sqrt(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0));

    printf("Distância entre o primeiro e o segundo ponto: %.2f\n", distancia);

    return 0;
}
