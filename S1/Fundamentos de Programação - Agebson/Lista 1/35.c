#include <stdio.h>

int main() {
    float tempoDado = 0.0, segundos = 0.0;
    int horas = 0, minutos = 0;

    printf("Digite o tempo em minutos: ");
    scanf("%f", &tempoDado);

    tempoDado = tempoDado * 60;

    horas = tempoDado / 3600;
    minutos = (tempoDado - (horas * 3600)) / 60;
    segundos = tempoDado - (horas * 3600) - (minutos * 60);

    printf("Tempo: %dh %dmin %.2fs\n", horas, minutos, segundos);

    return 0;
}
