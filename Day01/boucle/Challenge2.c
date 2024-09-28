#include <stdio.h>


/*Écrivez un programme C qui calcule la factorielle d'un nombre entier positif `n` entré par l’utilisateur. La factorielle de `n` est le produit de tous les entiers positifs inférieurs ou égaux à `n`. Par exemple, pour `n` = 5, affichez : `5! = 120`.*/

 
unsigned long long factorielle(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorielle(n - 1);
    }
}

int main() {
    int n;
    printf("Entrez un nombre entier positif : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Veuillez entrer un nombre entier positif.\n");
    } else {
        printf("%d! = %llu\n", n, factorielle(n));
    }

    return 0;
}
