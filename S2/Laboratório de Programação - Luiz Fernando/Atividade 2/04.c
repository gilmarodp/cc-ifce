#include <stdio.h>
#include <stdbool.h>

// Função para verificar se um número é primo
bool isPrimo(int n) {
    if (n <= 1) {
        return false;
    }

    // se ele for divisível por algum número entre 2 e a raiz quadrada de n, ele não é primo
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int num;
    
    // Solicita um número inteiro ao usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    // Verifica se o número é primo e imprime o resultado
    printf("%d\n", isPrimo(num)); // Primo
    
    return 0;
}
