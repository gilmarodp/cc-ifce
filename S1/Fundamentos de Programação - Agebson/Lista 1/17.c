#include <stdio.h>

int main() {
    float grausCelsius = 0.0, grausFahrenheit = 0.0;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &grausCelsius);

    grausFahrenheit = (grausCelsius * 1.8) + 32;

    printf("Essa é a temperatura em graus Fahrenheit: %.2f\n", grausFahrenheit);

    return 0;
}
