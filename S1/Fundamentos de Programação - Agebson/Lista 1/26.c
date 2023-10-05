#include <stdio.h>

int main() {
    float peso = 0.0;

    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    printf("Seu peso em gramas: %.2f g\n", peso * 1000);
    printf("Seu peso se engordar 15%%: %.2f kg\n", peso * 1.15);
    printf("Seu peso se engordar 20%%: %.2f kg\n", peso * 1.20);

    return 0;
}
