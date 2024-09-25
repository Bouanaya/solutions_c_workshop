#include <stdio.h>

int main() {
    int a, b, somme;
    printf("Entrez  nombres a et b : ");
    scanf("%d %d", &a, &b);
    somme = a + b;
    if (a == b) {
        somme = 3 * somme;
    }
    printf(" result est : %d\n", somme);

    return 0;
}
