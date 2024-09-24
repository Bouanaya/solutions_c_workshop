#include <stdio.h>

int main() {
    float celsius;

   
    printf("Entrez la température en Celsius: ");
    scanf("%f", &celsius);

     
    if (celsius < 0) {
        printf("L'état de l'eau à %.2f°C : Solide\n", celsius);
    } else if (celsius < 100) {
        printf("L'état de l'eau à %.2f°C : Liquide\n", celsius);
    } else {
        printf("L'état de l'eau à %.2f°C  : Gaz\n", celsius);
    }

    return 0;
}
