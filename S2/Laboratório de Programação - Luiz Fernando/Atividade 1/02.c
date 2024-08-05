#include <stdio.h>

int main() {
    int num;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    // Verifica se o número é ímpar ou par usando o operador de resto da divisão por 2
    // Pra evitar inserir if e else, podemos usar o operador de resto da divisão por 2
    // Se o número for par, o resto da divisão por 2 será 0
    // Se o número for ímpar, o resto da divisão por 2 será 1
    printf("%d\n", num%2);
    
    return 0;
}