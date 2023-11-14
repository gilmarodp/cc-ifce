#include <stdio.h>
#include <string.h>

void removerEspacosRepetidos(char *str) {
    int comprimento = strlen(str);

    for (int i = 0, j = 0; i < comprimento; i++) {
        if (!(str[i] == ' ' && (i == 0 || str[i - 1] == ' '))) {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';
}

int main() {
    char input[500];

    printf("Digite uma string: ");
    fgets(input, sizeof(input), stdin);

    removerEspacosRepetidos(input);

    printf("String sem espacos em branco repetidos: %s", input);

    return 0;
}
