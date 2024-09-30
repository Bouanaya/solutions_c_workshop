#include <stdio.h>

int produit(int a, int b)
{
    return a * b;
}

int main()
{
    int num1, num2;

    printf("Entrez le premier nombre: ");
    scanf("%d", &num1);
    printf("Entrez le deuxième nombre: ");
    scanf("%d", &num2);

    int resultat = produit(num1, num2);
    printf("Le produit de %d et %d est %d\n", num1, num2, resultat);

    return 0;
}
