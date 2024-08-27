#include <stdio.h>

int findGreatest(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int a, b, c;
    printf("Ingrese tres números separados por espacio: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("El mayor de los tres números es: %d\n", findGreatest(a, b, c));
    return 0;
}