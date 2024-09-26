 #include <stdio.h>

int main() {
    char caractere;

 
    printf("Entrez un caractere : ");
    scanf("%c", &caractere);

   
    if (caractere >= 'A' && caractere <= 'Z') {
        printf("Le caractere '%c' est une lettre majuscule.\n", caractere);
    } else if(caractere >= 'a' && caractere <= 'z') {
        printf("Le caractere '%c'minuscule.\n", caractere);
    }
    return 0 ;
    }