#include <stdio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int num1, num2, maximum;

    printf("Entrez deux nombres entiers : ");
    scanf("%d %d", &num1, &num2);

    maximum = max(num1, num2);

    printf("Le plus grand nombre entre %d et %d est %d.\n", num1, num2, maximum);

    return 0;
}
