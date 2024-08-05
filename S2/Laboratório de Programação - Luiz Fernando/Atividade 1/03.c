#include <stdio.h>

int main() {
    int num;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    // Converte o número para unsigned int
    unsigned int unsigned_num = (unsigned int) num;
    
    // Imprime o número como unsigned
    printf("Número como unsigned int: %u\n", unsigned_num);
    
    return 0;
}
