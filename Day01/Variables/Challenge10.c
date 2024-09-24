#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846


int main() {
    double rayon, volume;

    
    printf("Entrez le rayon de la sphere : ");
    scanf("%lf", &rayon);
    volume = (4.0/3.0) * M_PI * pow(rayon, 3);
    printf("Le volume de la sphere est : %.2lf\n", volume);

    return 0;
}
