#include <stdio.h>

int main() {
    int numero;
    unsigned long long factorial = 1;

    printf("Ingresa un numero para calcular su factorial: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("El factorial no esta definido para numeros negativos.\n");
    }
    else {

        for(int i = 1; i <= numero; i++) {
            factorial *= i;
        }
        printf("El factorial de %d es %llu.\n", numero, factorial);
    }

    return 0;
}