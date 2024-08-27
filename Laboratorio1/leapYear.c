#include <stdio.h>

int main() {
    int year;

    printf("Ingresa un año: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        // Si el año es divisible por 100, también debe ser divisible por 400 para ser bisiesto
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d es un año bisiesto.\n", year);
            } else {
                printf("%d no es un año bisiesto.\n", year);
            }
        } else {
            printf("%d es un año bisiesto.\n", year);
        }
    } else {
        printf("%d no es un año bisiesto.\n", year);
    }

    return 0;
}