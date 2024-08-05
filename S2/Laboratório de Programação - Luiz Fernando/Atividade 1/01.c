#include <stdio.h>

int main() {
    int num, resultado;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    // Desloca 4 bits à direita
    resultado = num >> 4;
    
    printf("Resultado do deslocamento de 4 bits à direita: %d\n", resultado);
    
    return 0;
}