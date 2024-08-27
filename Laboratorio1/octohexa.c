#include <stdio.h>

int main() {
    int start, end;
    printf("Ingrese el rango de números (inicio fin): ");
    scanf("%d %d", &start, &end);

    printf("Número\tOctal\tDecimal\tHexadecimal\n");
    for (int i = start; i <= end; i++) {
        printf("%d\t%o\t%d\t%x\n", i, i, i, i);
    }
    return 0;
}