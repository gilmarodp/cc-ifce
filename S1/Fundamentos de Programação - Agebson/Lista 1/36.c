#include <stdio.h>

int main() {
    float altura = 0.0, largura = 0.0, comprimento = 0.0, perimetro = 0.0;
    const float polEmCent = 2.54;

    printf("Digite a altura da bagagem em centímetros: ");
    scanf("%f", &altura);
    printf("Digite a largura da bagagem em centímetros: ");
    scanf("%f", &largura);
    printf("Digite o comprimento da bagagem em centímetros: ");
    scanf("%f", &comprimento);

    perimetro = ((4 * altura) + (4 * largura) + (4 * comprimento));

    printf("O perímetro da bagagem é de %.2f polegadas\n", perimetro / polEmCent);

    return 0;
}
