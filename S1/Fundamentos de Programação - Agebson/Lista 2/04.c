#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    if (a == b) {
        c = a + b;
    } else {
        c = a * b;
    }
    
    printf("Resultado: %d\n", c);

    return 0;
}
