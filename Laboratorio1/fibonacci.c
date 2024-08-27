#include <stdio.h>

// Función que genera la sucesión de Fibonacci hasta n términos
void fibonacci(int n) {
    int t1 = 0, t2 = 1, siguienteTermino;

    printf("Sucesión de Fibonacci:\n");

    for (int i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        siguienteTermino = t1 + t2;
        t1 = t2;
        t2 = siguienteTermino;
    }
    printf("\n");
}

int main() {
    int n;

    printf("¿Cuántos términos de la sucesión de Fibonacci deseas?: ");
    scanf("%d", &n);

    // Llamar a la función fibonacci para mostrar la sucesión
    fibonacci(n);

    return 0;
}