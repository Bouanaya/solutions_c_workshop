#include <stdio.h>

int main()
{
    int n, i, facteur;

    printf("Entrez le nombre d'elements: ");
    scanf("%d", &n);

    int tab[n];

    for (i = 0; i < n; i++)
    {
        printf("Entrez l'element %d: ", i + 1);
        scanf("%d", &tab[i]);
    }

    printf("Entrez le facteur de multiplication: ");
    scanf("%d", &facteur);

    for (i = 0; i < n; i++)
    {
        tab[i] *= facteur;
    }

    printf("Le tableau resultant est: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
