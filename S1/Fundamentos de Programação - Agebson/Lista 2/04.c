#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;

    if (a == b) {
        c = a + b;
    } else {
        c = a * b;
    }
    
    printf("Resultado: %d\n", c);

    return 0;
}
