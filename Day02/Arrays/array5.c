#include <stdio.h>

int main()
{
    int n, i, min;

    printf("Entrez le nombre d'éléments: ");
    scanf("%d", &n);

    int tab[n];

    for (i = 0; i < n; i++)
    {
        printf("Entrez l'élément %d: ", i + 1);
        scanf("%d", &tab[i]);
    }
    min = tab[0];

    for (i = 1; i < n; i++)
    {
        if (tab[i] < min)
        {
            min = tab[i];
        }
    }

    printf("Le plus petit élément est: %d\n", min);

    return 0;
}
