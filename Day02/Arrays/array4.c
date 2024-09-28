#include <stdio.h>

int main()
{
    int n, i, max;

    printf("Entrez le nombre elements : ");
    scanf("%d", &n);

    int arr[n];

  
    for (i = 0; i < n; i++)
    {
        printf("Entrez les elements du tableau :\n");
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Le plus grand element est : %d\n", max);

    return 0;
}
