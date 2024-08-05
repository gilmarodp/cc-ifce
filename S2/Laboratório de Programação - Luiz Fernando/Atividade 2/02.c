#include <stdio.h>

int potencia(int base, int exponente) {
    int resultado = 1;

    // o resultado é incrementado base^exponente vezes
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }

    return resultado;
}

int main() {
    int base, exponente;
    
    printf("Digite a base (inteiro positivo): ");
    scanf("%d", &base);
    printf("Digite o exponente (inteiro positivo): ");
    scanf("%d", &exponente);
    
    printf("%dˆ%d = %d\n", base, exponente, potencia(base, exponente));
    
    return 0;
}
