#include <stdio.h>
#include <string.h>

void encontrarPalavraMaisLonga(char frase[]) {
    char palavraMaisLonga[100];
    int comprimentoMaximo = 0;
    int comprimentoAtual = 0;
    int inicioPalavraMaisLonga = 0;
    int inicioPalavraAtual = 0;

    for (int i = 0; i <= strlen(frase); i++) {
        if (frase[i] == ' ' || frase[i] == '\0') {
            comprimentoAtual = i - inicioPalavraAtual;

            if (comprimentoAtual > comprimentoMaximo) {
                comprimentoMaximo = comprimentoAtual;
                strncpy(palavraMaisLonga, &frase[inicioPalavraAtual], comprimentoAtual);
                palavraMaisLonga[comprimentoAtual] = '\0';
            }

            inicioPalavraAtual = i + 1;
        }
    }

    printf("A palavra mais longa na frase e: %s\n", palavraMaisLonga);
}

int main() {
    char frase[100];

    printf("Digite uma frase (ate 100 caracteres):\n");
    fgets(frase, sizeof(frase), stdin);

    if (frase[strlen(frase) - 1] == '\n') {
        frase[strlen(frase) - 1] = '\0';
    }

    encontrarPalavraMaisLonga(frase);

    return 0;
}
