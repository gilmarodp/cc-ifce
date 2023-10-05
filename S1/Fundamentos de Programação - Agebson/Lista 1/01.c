#include <stdio.h>

int main() {
    int a = 10, b = 20, troca = 0;

    printf("Valor antigo de A: %d\n", a);
    printf("Valor antigo de B: %d\n", b);

    troca = a;
    a = b;
    b = troca;

    printf("\nNovo valor de A: %d\n", a);
    printf("Novo valor de B: %d\n", b);

    return 0;
}