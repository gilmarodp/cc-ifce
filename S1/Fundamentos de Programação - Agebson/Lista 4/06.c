#include <stdio.h>

int isPrime(int qtdDivisores, int value, int divisor) {
    int aux = qtdDivisores;

    if (qtdDivisores > 0)
    {
        return 0;
    }

    if (divisor > (value/2) && qtdDivisores == 0) {
        return 1;
    }

    if(value % divisor == 0) {
        aux++;
    }

    return isPrime(aux, value, divisor+1);
}

int main() {
    unsigned int K[15], P[15] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, primes = 0;

    for (int i = 0; i < 15; i++)
    {
        printf("Digite o valor de K[%d]: ", i);
        scanf("%d", &K[i]);

        if (isPrime(0, K[i], 2)) {
            P[primes] = K[i];
            primes++;
        };
    }

    printf("\nTemos %d números primos: \n", primes);
    printf("Vetor P: ");
    
    for (int i = 0; i < primes; i++)
    {
        printf("%d, ", P[i]);
    }

    printf("\n");
    
    
    return 0;
}