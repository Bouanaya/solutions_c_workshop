#include <stdio.h>

int main() {
    float n1, n2, n3;
    int poids1 = 2, poids2 = 3, poids3 = 5;
    float moyenne;

    
    printf("Entrez le n1: ");
    scanf("%f", &n1);

    printf("Entrez le n2: ");
    scanf("%f", &n2);

    printf("Entrez le n3: ");
    scanf("%f", &n3);

    // Calcul de la moyenne pondérée
    moyenne = (n1 * poids1 + n2 * poids2 + n3 * poids3) / (poids1 + poids2 + poids3);

    // Affichage du résultat
    printf("La moyenne est: %.2f\n", moyenne);

    return 0;
}
