#include <stdio.h>

int main()
{
    int n, i, j, min_idx, temp;

    printf("Entrez le nombre d'elements: ");
    scanf("%d", &n);

    int tab[n];

    for (i = 0; i < n; i++)
    {
        printf("Entrez l'element %d: ", i + 1);
        scanf("%d", &tab[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (tab[j] < tab[min_idx])
            {
                min_idx = j;
            }
        }

        temp = tab[min_idx];
        tab[min_idx] = tab[i];
        tab[i] = temp;
    }

    printf("Le tableau trie en ordre croissant est: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
