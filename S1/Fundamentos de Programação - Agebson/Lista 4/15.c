#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ehPalindromo(char str[]) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {
        if (tolower(str[inicio]) != tolower(str[fim])) {
            return 0;
        }

        inicio++;
        fim--;
    }

    return 1;
}

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    if (ehPalindromo(str)) {
        printf("A string \"%s\" e um palindromo.\n", str);
    } else {
        printf("A string \"%s\" nao e um palindromo.\n", str);
    }

    return 0;
}