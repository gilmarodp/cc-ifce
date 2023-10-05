#include <stdio.h>

int main()
{
    int numero = 0;

    printf("Informe um número: ");
    scanf("%d", &numero);

    if (numero % 10 == 0) {
        printf("O número informado é divisível por 10, 5 e 2.\n");
    } else if (numero % 5 == 0) {
        printf("O número informado é divisível por 5.\n");
    } else if (numero % 2 == 0) {
        printf("O número informado é divisível por 2.\n");
    } else {
        printf("O número informado não é divisível por 10, 5 ou 2.\n");
    }
    

    return 0;
}
