#include <stdio.h>

int main()
{
    int Base, exp;
    long long result = 1;

   
    printf("Entrez la Base: ");
    scanf("%d", &Base);
    printf("Entrez l'exp: ");
    scanf("%d", &exp);

   
    for (int i = 0; i < exp; i++)
    {
        result *= Base;
    }

  
    printf("%d^%d = %lld\n", Base, exp, result);

    return 0;
}
