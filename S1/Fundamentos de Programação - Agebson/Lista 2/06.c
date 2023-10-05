#include <stdio.h>

int main()
{
    float peso = 0.0, altura = 0.0, imc = 0.0;
    char sexo;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    
    printf("Digite seu sexo (M ou F): ");
    scanf(" %c", &sexo);

    imc = peso / (altura * altura);

    printf("Sexo: %c\n", sexo);
    printf("IMC: %.2f\n", imc);

    if (sexo == 'F') {
        if (imc < 20.7) printf("Abaixo do peso\n");
        else if (imc <= 26.4) printf("Peso normal\n");
        else if (imc <= 27.8) printf("Marginalmente acima do peso\n");
        else if (imc <= 31.1) printf("Acima do peso ideal\n");
        else printf("Obeso\n");
    } else {
        if (imc < 19.1) printf("Abaixo do peso\n");
        else if (imc <= 25.8) printf("Peso normal\n");
        else if (imc <= 27.3) printf("Marginalmente acima do peso\n");
        else if (imc <= 32.3) printf("Acima do peso ideal\n");
        else printf("Obeso\n");
    }

    return 0;
}
