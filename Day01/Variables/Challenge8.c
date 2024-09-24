#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, moyenneGeometrique;

   
    printf("Entrez trois nombres : ");
    scanf("%lf %lf %lf", &a, &b, &c);

  
    moyenneGeometrique = pow(a * b * c, 1.0/3.0);

   
    printf("La moyenne géométrique est : %.2lf\n", moyenneGeometrique);

    return 0;
}
