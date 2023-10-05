#include <stdio.h>

int main() {
    float aguaLitros = 0.0, sucoLitros = 0.0, litros = 0.0;

    printf("Quantos litros de tonel de refresco você quer fazer?: ");
    scanf("%f", &litros);

    aguaLitros = litros * 0.8;
    sucoLitros = litros * 0.2;

    printf("Você vai precisar:\n");
    printf("%.2fL de água\n", aguaLitros);
    printf("%.2fL de suco\n", sucoLitros);

    return 0;
}
