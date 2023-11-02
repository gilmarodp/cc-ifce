#include <stdio.h>

int main() {
    char G[11], R[11];
    int acertos = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o gabarito da questão %d: ", i + 1);
        scanf(" %c", &G[i]);
    }

    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("Digite a resposta da questão %d do aluno %d: ", j + 1, i + 1);
            scanf(" %c", &R[j]);
        }

        for (int j = 0; j < 10; j++)
        {
            if (G[j] == R[j]) acertos++;
        }

        if (acertos >= 6) {
            printf("Acertos: %d\n", acertos);
            printf("ALUNO %d [APROVADO]\n", i + 1);
        } else {
            printf("Acertos: %d\n", acertos);
            printf("ALUNO %d [REPROVADO]\n", i + 1);
        }
        
        acertos = 0;
    }
    
    
    return 0;
}