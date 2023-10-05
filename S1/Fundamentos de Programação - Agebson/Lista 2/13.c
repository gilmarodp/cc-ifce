#include <stdio.h>

int main()
{
    int idadeCrianca = 0;

    printf("Digite a idade da criança: ");
    scanf("%d", &idadeCrianca);

    if (idadeCrianca == 4 || idadeCrianca == 5) printf("Turma A\n");
    if (idadeCrianca >= 6 && idadeCrianca <= 8) printf("Turma B\n");
    if (idadeCrianca >= 9 && idadeCrianca <= 10) printf("Turma C\n");
    else printf("Sem turma\n");

    return 0;
}
