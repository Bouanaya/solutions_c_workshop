#include <stdio.h>

int main() {
    float kmh, ms;

    // km/h
    printf("Entrez la vitesse en km/h: ");
    scanf("%f", &kmh);

    // m/s
    ms = kmh * 0.27778;

    // résultat
    printf("La vitesse en m/s est: %.2f\n", ms);

    return 0;
}
