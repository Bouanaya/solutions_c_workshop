#include <stdio.h>

int main() {
    char Caratere;
    printf("Entrez un caractere : ");
    scanf("%c", &Caratere);

    switch(Caratere) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c est une voyelle.\n", Caratere);
            break;
        default:
            printf("%c n est pas une voyelle.\n", Caratere);
    }

    return 0;
}
