#include <stdio.h>

int main() {
    float a, b;

     
    printf("Entrez a:");
    scanf("%f", &a);

    printf("Entrez b:");
    scanf("%f", &b);

    
    float Addition = a + b;
    float subtraction = a - b;
    float multipication = a * b;
    float division = a / b;

     
    printf("a + b = %.2f\n", Addition);
    printf("a - b = %.2f\n", subtraction);
    printf("a * b = %.2f\n", multipication);
    printf("a / b = %.2f\n", division);

    return 0;
}
