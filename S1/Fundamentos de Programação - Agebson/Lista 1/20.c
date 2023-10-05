#include <stdio.h>

int main() {
    int blusas, novelos;
    float novelosPorBlusa;

    printf("Digite a quantidade de roupas produzidas: ");
    scanf("%d", &blusas);

    printf("Digite a quantidade de novelos utilizados: ");
    scanf("%d", &novelos);

    novelosPorBlusa = (float)novelos / blusas;

    printf("Novelos por blusa: %.2f\n", novelosPorBlusa);

    return 0;
}
