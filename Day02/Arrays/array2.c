#include <stdio.h>

int main()
{
    int n;

        printf("Entrez le nombre d'éléments du tableau : ");
    scanf("%d", &n);

    int tableau[n];

    for (int i = 0; i < n; i++)
    {
        printf("Entrez l'élément %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }
    printf("Les éléments du tableau sont :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tableau[i]);
    }

    return 0;
}
