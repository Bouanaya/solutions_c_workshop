#include <stdio.h>

int main()
{
    
    int arr[] = {1, 2, 3, 4, 5};
    int taille = sizeof(arr) / sizeof(arr[0]);

 
    for (int i = 0; i < taille; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
