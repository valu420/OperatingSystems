#include <stdio.h>
#include <ctype.h>

int isLowercase(char c) {
    return islower(c);
}

int main() {
    char ch;
    printf("Ingrese una letra: ");
    scanf(" %c", &ch);

    if (isLowercase(ch)) {
        printf("%c es una letra minúscula.\n", ch);
    } else {
        printf("%c no es una letra minúscula.\n", ch);
    }
    return 0;
}