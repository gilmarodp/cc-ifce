#include <stdio.h>

int main() {
    int pequenas = 0, medias = 0, grandes = 0;
    float precoPequena = 10.0, precoMedia = 12.0, precoGrande = 15.0, total;

    printf("Digite a quantidade de camisetas pequenas: ");
    scanf("%d", &pequenas);

    printf("Digite a quantidade de camisetas médias: ");
    scanf("%d", &medias);

    printf("Digite a quantidade de camisetas grandes: ");
    scanf("%d", &grandes);

    total = (pequenas * precoPequena) + (medias * precoMedia) + (grandes * precoGrande);

    printf("O valor total arrecadado será de R$ %.2f\n", total);

    return 0;
}
