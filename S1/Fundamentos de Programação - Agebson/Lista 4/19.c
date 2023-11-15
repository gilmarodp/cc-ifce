#include <stdio.h>
#include <string.h>

int contarOcorrencias(char frase[], char palavra[]) {
    int ocorrencias = 0;
    int tamanhoFrase = strlen(frase);
    int tamanhoPalavra = strlen(palavra);

    for (int i = 0; i <= tamanhoFrase - tamanhoPalavra; i++) {
        if (strncmp(&frase[i], palavra, tamanhoPalavra) == 0) {
            ocorrencias++;
        }
    }

    return ocorrencias;
}

int main() {
    char frase[1000];
    char palavra[100];

    printf("Digite uma frase:\n");
    fgets(frase, sizeof(frase), stdin);

    if (frase[strlen(frase) - 1] == '\n') {
        frase[strlen(frase) - 1] = '\0';
    }

    printf("Digite uma palavra:\n");
    scanf("%s", palavra);

    int ocorrencias = contarOcorrencias(frase, palavra);

    printf("Temos que a palavra ocorre %d vezes na frase.\n", ocorrencias);

    return 0;
}
