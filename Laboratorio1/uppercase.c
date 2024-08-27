#include <stdio.h>
#include <ctype.h>

int isUppercase(char c) {
    return isupper(c);
}

int main() {
    char ch;
    printf("Ingrese una letra: ");
    scanf(" %c", &ch);

    if (isUppercase(ch)) {
        printf("%c es una letra mayúscula.\n", ch);
    } else {
        printf("%c no es una letra mayúscula.\n", ch);
    }
    return 0;
}