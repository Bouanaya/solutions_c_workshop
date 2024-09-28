#include <stdio.h>

int main()
{
    int n;
    printf("Entrez un nombre entier : ");
    scanf("%d", &n);

    printf(" %d premiers nombres :\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", 2 * i + 1);
    }

    return 0;
}
