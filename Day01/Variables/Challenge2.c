#include <stdio.h>

int main() {
    float C, K;    
    printf("Entrez la temperature en C: ");
    scanf("%f", &C);
    K = C + 273.15;
    printf("La temperature en Kelvin est: %.2f\n", K);
    return 0;
}
