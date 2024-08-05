#include <stdio.h>

// Função recursiva para calcular o n-ésimo termo da sequência de Fibonacci
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    
    // Calcula e imprime o n-ésimo número da sequência de Fibonacci
    printf("O %d-ésimo número da sequência de Fibonacci é: %d\n", n, fibonacci(n));
    
    return 0;
}
