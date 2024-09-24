#include <stdio.h>

int main() {
    float kmh, ms;

    // Demande de la vitesse en km/h
    printf("Entrez la vitesse en km/h: ");
    scanf("%f", &kmh);

    // Conversion en m/s
    ms = kmh * 0.27778;

    // Affichage du résultat
    printf("La vitesse en m/s est: %.2f\n", ms);

    return 0;
}
