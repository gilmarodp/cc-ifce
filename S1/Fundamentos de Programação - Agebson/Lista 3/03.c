#include <stdio.h>

int main() {
    int num = 0;

    printf("Digite um número para eu escrever a tabuada para você: ");
    scanf("%d", &num);

    printf("\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    printf("\n");

    return 0;
}