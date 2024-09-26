#include <stdio.h>

int main() {
    int nombre;

 
    printf("Entrez un nombre: ");
    scanf("%d", &nombre);
 
    if (nombre < 0) {
        printf("c est le nombre negatif.\n");
    } else if(nombre > 0) {
        printf("%d est impair.\n", nombre);
    }
    else
    {
        printf("le nombre est egal a zero.");
    }
    

    return 0;
}
