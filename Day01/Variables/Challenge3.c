#include <stdio.h>

int main() {
    float km, yards;

    printf("Entrez la distance en km: ");
    scanf("%f", &km);   
    yards = km * 1093.61;

  
    printf("yards est: %.2f\n", yards);

    return 0;
}
