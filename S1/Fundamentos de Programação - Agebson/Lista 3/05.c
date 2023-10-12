#include <stdio.h>

int main() {
    int fatorial = 1, num = 0;

    printf("Digite um número para eu calcular a fatorial do mesmo: ");
    scanf("%d", &num);

    for (int i = num; i >= 1; i--)
    {
        fatorial *= i;

        if (i == 1) {
            printf("%d = ", i);
        } else {
            printf("%d * ", i);
        }
    }

    printf("%d.\n", fatorial);
    
    return 0;
}