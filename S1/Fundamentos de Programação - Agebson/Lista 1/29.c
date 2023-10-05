#include <stdio.h>

int main() {
    float diagonalMaior = 0.0, diagonalMenor = 0.0, area = 0.0;

    printf("Digite a diagonal maior do losango em metros: ");
    scanf("%f", &diagonalMaior);

    printf("Digite a diagonal menor do losango em metros: ");
    scanf("%f", &diagonalMenor);

    area = (diagonalMaior * diagonalMenor) / 2;

    printf("Área total do losango: %.2f m²\n", area);

    return 0;
}
