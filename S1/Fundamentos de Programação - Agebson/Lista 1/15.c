#include <stdio.h>

int main() {
    int eleitores, brancos, nulos, validos;
    float pBrancos, pNulos, pValidos;

    printf("Digite a quantidade de eleitores: ");
    scanf("%d", &eleitores);

    printf("Digite a quantidade de votos brancos: ");
    scanf("%d", &brancos);

    printf("Digite a quantidade de votos nulos: ");
    scanf("%d", &nulos);

    printf("Digite a quantidade de votos válidos: ");
    scanf("%d", &validos);

    pBrancos = ((float)brancos / eleitores) * 100;
    pNulos = ((float)nulos / eleitores) * 100;
    pValidos = ((float)validos / eleitores) * 100;

    printf("%% Brancos: %.2f%%\n", pBrancos);
    printf("%% Nulos: %.2f%%\n", pNulos);
    printf("%% Válidos: %.2f%%\n", pValidos);

    return 0;
}
