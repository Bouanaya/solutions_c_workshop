#include <stdio.h>
#include <string.h>

typedef struct
{
    char nom[50];
    char prenom[50];
    int age;
} Personne;

int main()
{

    Personne p;

    strcpy(p.nom, "bouanaya");
    strcpy(p.prenom, "soufiane");
    p.age = 26;
    printf("Nom: %s\n", p.nom);
    printf("Prénom: %s\n", p.prenom);
    printf("Age: %d\n", p.age);

    return 0;
}
