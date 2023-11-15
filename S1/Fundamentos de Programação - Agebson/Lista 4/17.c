#include <stdio.h>
#include <string.h>
#include <ctype.h>

void converterParaMaiuscula(char str[]) {
    int i = 0;

    str[0] = toupper(str[0]);

    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i + 1] != '\0') {
            str[i + 1] = toupper(str[i + 1]);
        }
        i++;
    }
}

int main() {
    char str[1000];

    printf("Digite uma string:\n");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    converterParaMaiuscula(str);

    printf("String com a primeira letra de cada palavra em maiuscula:\n%s\n", str);

    return 0;
}
