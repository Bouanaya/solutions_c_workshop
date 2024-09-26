#include <stdio.h>

float calculer_prime(int age, int typevoiture, int nbaccidents, float primebase) {
    float prime = primebase;
    if (age < 25) {
        prime *= 1.5;
    } else if (age > 65) {
        prime *= 1.2;
    }
 
    switch (typevoiture) {
        case 1:  
            prime *= 2;
            break;
        case 2: 
            prime *= 1.2;
            break;
        case 3: 
            prime *= 1.1;
            break;
        default:
            printf("Type de voiture invalide.\n");
            return 0;
    }

 
    if (nbaccidents > 1) {
        prime *= 1.3;
    }

    return prime;
}

int main() {
    int age, typevoiture, nbaccidents;
    float primebase;

    // Entrée des données
    printf("Entrez l'âge du conducteur : ");
    scanf("%d", &age);
    printf("Entrez le type de voiture (1: Sportive, 2: Utilitaire, 3: Familiale) : ");
    scanf("%d", &typevoiture);
    printf("Entrez le nombre d'accidents au cours des 5 dernières années : ");
    scanf("%d", &nbaccidents);
    printf("Entrez la prime de base : ");
    scanf("%f", &primebase);

    
    float prime = calculer_prime(age, typevoiture, nbaccidents, primebase);

    if (prime != 0) {
        printf("La prime d'assurance est : %.2f\n", prime);
    }

    return 0;
}
