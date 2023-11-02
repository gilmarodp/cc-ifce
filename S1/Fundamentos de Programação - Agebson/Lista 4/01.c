#include <stdio.h>

int main() {
    int N[20], menor = 0, posicao = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("Digite o valor de N[%d]: ", i);
        scanf("%d", &N[i]);

        if (i == 0) menor = N[i];
        else if (N[i] < menor) {
            menor = N[i];
            posicao = i;
        }
    }

    printf("\nO menor elemento de N é %d e sua posição é N[%d]\n", menor, posicao);
    
    return 0;
}