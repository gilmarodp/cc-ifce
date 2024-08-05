#include <stdio.h>

// Função para calcular base^exponente, onde exponente pode ser negativo
double potencia(int base, int exponente) {
    double resultado = 1.0;
    int positivo_exponente = exponente < 0 ? -exponente : exponente;

    // o resultado é incrementado base^exponente vezes
    for (int i = 0; i < positivo_exponente; i++) {
        resultado *= base;
    }

    // Se o exponente for negativo, retorna o inverso da potencia
    if (exponente < 0) {
        return 1.0 / resultado;
    }

    return resultado;
}

int main() {
    int base, exponente;
    
    // Solicita dois números inteiros ao usuário
    printf("Digite a base (inteiro): ");
    scanf("%d", &base);
    printf("Digite o exponente (inteiro): ");
    scanf("%d", &exponente);
    
    // Calcula e imprime base^exponente
    printf("%d^%d = %.6f\n", base, exponente, potencia(base, exponente));
    
    return 0;
}
