#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Entrez le nombre   : ");
    scanf("%d", &n);

    int array[n];

    printf("Entrez le tableau :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum += array[i];
    }

    printf("La somme des tableau est : %d\n", sum);

    return 0;
}
