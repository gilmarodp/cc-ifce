#include <stdio.h>

int main() {
    float diasSemAcidentes;
    int dias, meses, anos;

    printf("Digite a quantidade de dias sem acidentes: ");
    scanf("%f", &diasSemAcidentes);

    anos = (int)(diasSemAcidentes / 360);
    meses = (int)((diasSemAcidentes - (anos * 360)) / 30);
    dias = (int)(diasSemAcidentes - (anos * 360) - (meses * 30));

    printf("A sua empresa está a %d ano(s), %d mês(es) e %d dia(s).\n", anos, meses, dias);

    return 0;
}
