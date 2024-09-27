#include <stdio.h>

int main()
{
    int nomber;
    printf("entrez nomber : ");
    scanf("%d", &nomber);
    if (nomber < 10)
    {
        printf("recale");
        }
    else if (nomber >= 10 || nomber < 12)
    {
        printf("la mention passable \n");
    }
    else if (nomber >= 12 || nomber < 14)
    {
        printf("la mention assez bien\n");
    }
    else if (nomber >= 14 || nomber < 16)
    printf("la mention très bien \n");
    }

    return 0;
}
