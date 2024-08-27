#include <stdio.h>

// Función recursiva para calcular la potencia
int potencia(int base, int exponente) {
    if (exponente == 0) {
        return 1;
    }
    // Caso recursivo: base^exponente = base * base^(exponente-1)
    else {
        return base * potencia(base, exponente - 1);
    }
}

int main() {
    int base, exponente, resultado;

    printf("Ingresa la base: ");
    scanf("%d", &base);

    printf("Ingresa el exponente: ");
    scanf("%d", &exponente);

    // Llamar a la función recursiva
    resultado = potencia(base, exponente);

    printf("%d elevado a la potencia %d es: %d\n", base, exponente, resultado);

    return 0;
}
