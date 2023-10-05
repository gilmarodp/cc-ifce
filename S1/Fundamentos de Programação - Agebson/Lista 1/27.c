#include <stdio.h>

int main() {
    float baseMaior = 0.0, baseMenor = 0.0, altura = 0.0, area = 0.0;

    printf("Digite a base maior em metros: ");
    scanf("%f", &baseMaior);

    printf("Digite a base menor em metros: ");
    scanf("%f", &baseMenor);

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    area = ((baseMaior + baseMenor) * altura) / 2;

    printf("Área total do trapézio: %.2f m²\n", area);

    return 0;
}
