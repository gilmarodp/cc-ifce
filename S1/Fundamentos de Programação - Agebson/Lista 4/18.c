#include <stdio.h>
#include <string.h>

int contarPalavras(char frase[]) {
    int contador = 0;
    int comprimento = strlen(frase);

    for (int i = 0; i < comprimento; i++) {
        if (frase[i] == ' ' || frase[i] == '\t') {
            contador++;
        }
    }

    contador++;

    return contador;
}

int main() {
    char frase[500];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    int totalPalavras = contarPalavras(frase);

    printf("A frase possui %d palavra(s).\n", totalPalavras);

    return 0;
}
