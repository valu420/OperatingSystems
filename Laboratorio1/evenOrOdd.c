#include <stdio.h>

// Función que verifica si un número es par
int esPar(int numero) {
    if (numero % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int numero;

    printf("Ingresa un numero: ");
    scanf("%d", &numero);

    // Llama a la función esPar y muestra el resultado
    if (esPar(numero)) {
        printf("%d es un numero par.\n", numero);
    } else {
        printf("%d es un numero impar.\n", numero);
    }

    return 0;
}
