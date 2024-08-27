#include <stdio.h>

int main() {
    int x;
    double y;

    printf("Ingrese un número entero: ");
    scanf("%d", &x);

    // Casting implícito
    y = x;
    printf("Casting implícito: x = %d, y = %f\n", x, y);

    // Casting explícito
    y = (double)x;
    printf("Casting explícito: x = %d, y = %f\n", x, y);

    return 0;
}